program numeros;
uses
 crt;
var
 i,n:integer;
begin
 clrscr;
 write('ingrese el numero:');
 read(n);
 i:=1;
 if n<>1 then
 begin
 repeat
  writeln(i);
  i:=i+1;
  until i=n+1;
  end
 else
  begin
  write(1)
  end;
 readkey;
 end.
