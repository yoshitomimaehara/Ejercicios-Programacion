create database biblioteca;
use biblioteca;
show tables;
create table alumnos(
	codalumno int,nombre varchar(40),
	escuela varachar(30),ciclo varchar(3));

drop table alumnos;

create table alumnos(
	codalumno int auto_increment primary key,nombre varchar(40),
	escuela varachar(30),ciclo varchar(3));
	