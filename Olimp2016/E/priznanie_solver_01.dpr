uses
    SysUtils;
const
    MAXLEN = 100000;
    letters : set of char = ['a'..'z', 'A'..'Z'];
    chars : set of char = ['.', ',', '!', '?', ':', ';', '-', ' '];
type
    int = longint;
var
    s, s_uc, s_lc : string;
    t : array [0..1] of string;
    len, i, cnt : int;

function dist(s, t : string) : int;
var
    i : int;
begin
    result := 0;
    for i := 1 to length(s) do begin
        if (s[i] <> t[i]) then
            inc(result);
    end;
end;

begin
    read(s);

    len := length(s);
    assert((0 < len) and (len <= MAXLEN));

    s_lc := lowercase(s);
    s_uc := uppercase(s);

    cnt := 0;
    t[0] := '';
    t[1] := '';
    for i := 1 to len do begin
        if (s[i] in letters) then begin
            inc(cnt);
            t[cnt mod 2] := t[cnt mod 2] + s_lc[i];
            t[(cnt + 1) mod 2] := t[(cnt + 1) mod 2] + s_uc[i];
        end else begin
            assert(s[i] in chars);
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
