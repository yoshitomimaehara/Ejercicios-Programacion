program transpuesta;
uses
	crt;
var
	a:array[1..3,1..3]of integer;
	i,j:integer;
begin
	ClrScr;
	{aca ingresamos datos al arreglo}
	for i:=1 to 3 do
	begin
		for j:=1 to 3 do
		begin	
			write('ingrese el elemento');
                        write('[');
                        write(i);
                        write(',');
                        write(j);
                        write(']:');
			read(a[i,j]);
		end;
	end;
	{aca mostramos el arreglo}
	writeln(' ');
	writeln('los elementos son:');
	for i:=1 to 3 do
	begin
		for j:=1 to 3 do
		begin	
			write(a[i,j]);
			write('  ');
		end;
		writeln(' ')
	end;
	{aca hallamos la transpuesta}
      	writeln('su transpuesta es:');
	for i:=1 to 3 do
	begin
		for j:=1 to 3 do
		begin	
			write(a[j,i]);
			write('  ');
		end;
		writeln(' ')
	end;
	writeln(' ');
readkey();
end.
