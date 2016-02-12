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

// login: root
// password: 1024

var
    buf, pass: string;
    sum1, sum2: longint;
    i: integer;
    InputTxt, OutputTxt: Text;


begin
    try
      Assign(InputTxt, 'input.txt');
      Reset(InputTxt);
    except VInternalCI; end;
    try
      Assign(OutputTxt, 'output.txt');
      Reset(OutputTxt);
    except VRejectPE; end;

    try
      readln(InputTxt, buf);
    except VInternalCI; end;

    for i := 1 to length(buf) do begin
        if ((i - 1) mod 5 = 0) then
           inc(sum1, ord(buf[i]) - ord('0'));
    end;

    try
      readln(OutputTxt, pass);
    except VRejectPE; end;

    if not Eof(OutputTxt) then VRejectPE;

    for i := 1 to length(pass) do
        inc(sum2, (ord(pass[i]) - ord('0'))
                  * (ord(pass[i]) - ord('0'))
                  * (ord(pass[i]) - ord('0')));

    if ((sum1 + sum2) mod 21 = 9) then
        VAccept;

    VRejectWA;
end.
