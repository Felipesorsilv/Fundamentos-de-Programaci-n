
# include  < stdio.h >
# include  < conio.h >
# include  < string.h >

# define  TAM  10
//    Estructuras
//    Prototipos de funciones
 encabezado vacío ( vacío );
 aleta vacía ( vacía );
//    PRINCIPAL
int  main ( nulo ) {
	char cadena [TAM];
	int contador;
	int a;
	int b;
	system ( " cls " );
	system ( " color 71 " );
	header
header ();
	printf ( " \ n \ t \ t \ t Ingresa una palabra: " );
	scanf ( " % s " , & cadena);
    a = strlen (cadena);
    a = a- 1 ;
    for (contador = 0 , b = a; contador <= a / 2 ; contador ++, b--);
    	if (cadena [contador] == cadena [b]) {
    		printf ( " \ n \ n \ t \ t \ t Es un palindromo. \ n " );
		} más {
			printf ( " \ n \ n \ t \ t \ t No es un palindromo. \ n " );
		}
	aleta ();
	getch ();
	return  0 ;
}

