Proceso CalcularPromedioAcademicoSiEsMayor85MandarMensajeFelicitandolo
	Definir clase1, clase2, clase3, clase4, clase5 Como Entero;
	Definir promedio Como Real;
	Escribir 'Dime tu nota de la primera clase:';
	Leer clase1;
	Escribir 'Dime tu nota de la segunda clase:';
	Leer clase2;
	Escribir 'Dime tu nota de la tercera clase:';
	Leer clase3;
	Escribir 'Dime tu nota de la cuarta clase:';
	Leer clase4;
	Escribir 'Dime tu nota de la quinta clase:';
	Leer clase5;
	promedio <- (clase1+clase2+clase3+clase4+clase5)/5;
	Si promedio>85 Entonces
		Escribir 'Felicidades tu promedio es de:', promedio;
	SiNo
		Escribir 'Tu promedio es de:', promedio;
	FinSi
	promedio <- (clase1+clase2+clase3+clase4+clase5)/5;
FinProceso
