{$APPTYPE CONSOLE}

uses SysUtils;

procedure VInternalCI;
begin Halt($A3); end;
procedure VRejectPE;
begin Halt($AA); end;
procedure VRejectWA;
begin Halt($AB); end;
procedure VAccept;
begin Halt($AC); end;

var
    pass: string;
    sum: integer;
    i: integer;
    OutputTxt: Text;

begin
    try
      Assign(OutputTxt, 'output.txt');
      Reset(OutputTxt);
      readln(OutputTxt, pass);
    except VRejectPE; end;

    sum:=0;
    for i := 1 to length(pass) do
        inc(sum, ord(pass[i]) - ord('a'));

    if (sum mod 124 = 18) and (length(pass) > 10) then
        VAccept;

    VRejectWA;
end.
