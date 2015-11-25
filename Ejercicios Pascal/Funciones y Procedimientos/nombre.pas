program nombre;

uses
crt;
{ el procedimiento }
procedure saludo(nombre:string);
begin
 writeln('Hola ',nombre,' ¨que tal estas?');
end;
{funcion principal}
begin
 clrscr;
 writeln;
 saludo('Yoshitomi');
 readkey;
end.
