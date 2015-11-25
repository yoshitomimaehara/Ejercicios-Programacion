program decimales;
uses
 crt;
var
 i:integer;
 n:real;
begin
 clrscr;
 n:=1.9;
 for i:=1 to 29 do
 begin
  n:=n+0.2;
  writeln(n:4:1);
 end;
readkey;
end.
