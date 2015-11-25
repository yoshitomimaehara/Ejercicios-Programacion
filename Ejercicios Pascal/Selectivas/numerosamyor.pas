program numeromayor;
uses
 crt;
var
 a,b:integer;
begin
 clrscr;
 write('ingrese el primer numero:');
 readln(a);
 write('ingrese el segundo numero:');
 readln(b);
 if a > b then
  begin
  write('el numero mayor es ');
  writeln(a);
  end
 else
  begin
  write('el numero mayor es ');
  writeln(b);
  end;
readkey;
end.