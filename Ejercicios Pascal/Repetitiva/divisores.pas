program divisores;
uses
 crt;
var
 n,i:integer;
begin
 clrscr;
 write('ingrese el numero: ');
 readln(n);
 for i:=1 to n do
 begin
  if (n mod i= 0) then
  begin
   writeln(i);
  end;
 end;
 readkey;
end.