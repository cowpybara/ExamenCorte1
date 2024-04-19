Proceso identificarDoN
	Definir hora Como Entero;
	Definir dia Como Entero;
	Definir noche Como Entero;
	Escribir 'Ingrese la hora en formato de 24 horas (0-23): ';
	Leer hora;
	Si hora>=0 Y hora<24 Entonces
		Si hora>=6 Y hora<18 Entonces
			dia <- 1;
		SiNo // Es de día
			noche <- 1;
		FinSi // Es de noche
	FinSi
	Si dia=1 Entonces
		Escribir 'Es de día.';
	SiNo
		Escribir 'Es de noche.';
	FinSi
FinProceso
