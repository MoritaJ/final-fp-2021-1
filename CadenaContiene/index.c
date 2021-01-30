#include <stdio.h>
#include <string.h>

int buscar(const char * cadena1, const char * cadena2)
{
    int x, longCad1 = strlen(cadena1), longCad2 = strlen(cadena2);
    for ( x = 0; x < longCad1 && x < longCad2 ; x++ )
        if ( cadena1[x] != cadena2[x] )
            break;
    return !(x < longCad1 && x < longCad2);
}

int main()
{
    char palabras[][50] = {"alma", "almacen", "1", "gente", "gentificación", "0"};
    int resultado;
    for ( int x = 0; x < 6; x+=3 ){
        resultado = buscar( palabras[x], palabras[x+1] );
        printf( "Prueba %d:\n%s - %s\t", ( x/2 ) + 1, palabras[x], palabras[x+1] );
        printf( "Resultado:%d. Se esperaba:%d. %s.\n", resultado, palabras[x+2][0] - 48, resultado == palabras[x+2][0] - 48 ? "Prueba exitosa" : "Prueba fallida" );
        printf( "%s\n\n", resultado ? "Una contiene a la otra." : "Ninguna contiene a la otra." );
    }
    return 0;
}
