Proceso identificarDoN
    Definir hora Como Entero;
    Definir dia Como Entero;
    Definir noche Como Entero;
	
    Escribir "Ingrese la hora en formato de 24 horas (0-23): ";
    Leer hora;
	
    Si hora >= 0 y hora < 24 Entonces
        Si hora >= 6 y hora < 18 Entonces
            dia <- 1; //Es de día
        Sino
            noche <- 1; //Es de noche
        FinSi
    FinSi
	
    Si dia = 1 Entonces
        Escribir "Es de día.";
    Sino
        Escribir "Es de noche.";
    FinSi
FinProceso