PROGRAM operation(input,output);
uses
 crt;
var
n:integer;
o:integer;
begin
 clrscr;
 write('ingrese el numero:');
 readln(n);
 o:=3*n;
 write('la respuesta es:');
 write(o);
 readkey;
 clrscr
end.