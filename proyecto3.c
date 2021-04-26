#include <stdio.h>

int main ()
{
     /* Karen Garduño
    equipo AMUKE
    21 abr 21
    Programa 3. Pide dos valores reales,  calcula promedio y muestra resultadps
    */

    float primer, segundo, tercero;
    printf ("/n/n Programa 3");
    printf ("/n/n Saca el promedio de valores reales");
    printf ("/n/nDame el primer valor real")
    scanf ("%f", &primer); //permite caapturar un valor real y lo guarda en variable primer 
    printf ("/n/nDame el segundo valor real")
    scanf ("%f", &segundo); //permite caapturar un valor real y lo guarda en variable primer 
    tercero= (primer + segundo)/2;
    printf ("/N El promedio es %f",tercero);
    return 0;

}