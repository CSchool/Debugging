uses
    SysUtils;
var
    s, s_uc, s_lc : string;
    t : array [0..1] of string;
    len, i, cnt : longint;

function dist(s, t : string) : longint;
var
    i : longint;
begin
    result := 0;
    for i := 1 to length(s) do begin
        if (s[i] <> t[i]) then
            result:=result + 1;
    end;
end;

begin
    read(s);

    len := length(s);

    s_lc := lowercase(s);
    s_uc := uppercase(s);

    cnt := 0;
    t[0] := '';
    t[1] := '';
    for i := 1 to len do begin
        if (s[i] > 'a') and (s[i] < 'z') or (s[i] > 'A') and (s[i] < 'Z') then begin
            cnt:=cnt + 1;
            t[cnt mod 2] := t[cnt mod 2] + s_lc[i];
            t[(cnt + 1) mod 2] := t[(cnt + 1) mod 2] + s_uc[i];
        end else begin
            t[0] := t[0] + s[i];
            t[1] := t[1] + s[i];
        end;
    end;

    if (dist(s, t[0]) < dist(s, t[1])) then begin 
        writeln(t[0]);
    end else begin
        writeln(t[1]);
    end;
end.
