uses
  SysUtils,
{$IFDEF MSWINDOWS}
  unJudge17 in '..\utils\unJudge17.pas';
{$ELSE}
  unJudge17 in '../utils/unJudge17.pas';
{$ENDIF}
type
    int = longint;

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

function check_answer(s, t : string) : string;
var
    len, i : int;
    s_lc, t_lc : string;
    prev : char;
begin
    result := 'ok';

    len := length(s);
    if (length(t) <> len) then begin
        result := 'output string length (' + inttostr(length(t)) + 
                    ') is not equals input''s string length (' + inttostr(len) + ')';
        exit;
    end;

    s_lc := lowercase(s);
    t_lc := lowercase(t);

    prev := ' ';
    for i := 1 to len do begin
        if s_lc[i] <> t_lc[i] then begin
            result := 'mistake in position ' + inttostr(i) + ': input char = "' 
                      + s[i] + '", output char = "' + t[i] + '"';
            exit;
        end;

        if t_lc[i] in ['a'..'z'] then begin
            if (prev <> ' ') and ((t[i] in ['a'..'z']) = (prev in ['a'..'z'])) then begin
                result := 'wrong char case in position ' + inttostr(i);
                exit;
            end;
            prev := t[i];
        end;
        
    end;
end;

var
    dj, dp : int;
    s, ans_s, ouf_s : string;
begin
    s := inf.readstring;
    ans_s := ans.readstring;
    ouf_s := ouf.readstring;

    if check_answer(s, ouf_s) <> 'ok' then begin
        quit(_wa, check_answer(s, ouf_s));
    end;

    if check_answer(s, ans_s) <> 'ok' then begin
        quit(_fail, check_answer(s, ans_s));
    end;

    dj := dist(s, ans_s);
    dp := dist(s, ouf_s);
    if dp > dj then begin
        quit(_wa, 'Jury has better solution: ' + inttostr(dj) + ' < ' + inttostr(dp));
    end else if dp < dj then begin
        quit(_fail, 'Contestant has better solution');
    end;

    quit(_ok, 'OK, good declaration');
end.
