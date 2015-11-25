program promedio;
uses
 crt;
var
 n:array[1..5] of integer;
 a,c:integer;
 i:byte;
 p:real;
begin
 clrscr;
 for i:=1 to 5 do
 begin
  write('ingrese la nota ');
  write(i);
  write(':');
  readln(n[i])
 end;
 a:=0;
 c:=0 ;
 for i:=1 to 5 do
 begin
  a:=n[i]+a;
  c:=c+1;
 end;
 p:=a/c;
 write('el promedio es:');
 writeln(p:2:1);
 readkey;
end.