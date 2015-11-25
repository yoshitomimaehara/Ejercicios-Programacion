CREATE DATABASE Universidad
USE Universidad

CREATE TABLE alumno(
id_alumno CHAR(4) NOT NULL PRIMARY KEY,
alu_Nombre VARCHAR(20)
)

INSERT INTO alumno VALUES('A001','Juan Ruiz')

SELECT * FROM alumno


