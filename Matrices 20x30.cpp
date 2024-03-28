#include <stdio.h>
#include<conio.h>
#include <math.h>
#include <stdlib.h>
#define MAXFIL 20
#define MAXCOL 30
/* definición de constantes simbólicas indicando el numero máximo de filas y de columnas */
void leerentrada(int a[] [MAXCOL], int nfilas, int ncols);
void calcularsuma(int a[] [MAXCOL], int b[] [MAXCOL], int c[] [MAXCOL], int nfila,
int ncols);
void escribirsalida(int c[] [MAXCOL], int nfilas, int ncols);


main()
{
int nfilas, ncols;
int a[MAXFIL] [MAXCOL], b[MAXFIL] [MAXCOL], c[MAXFIL] [MAXCOL];
printf("Cuantas filas : ");
scanf("%d", &nfilas);
printf("Cuantas columnas : ");
scanf("%d", &ncols);
printf("\n\nPrimera Tabla :\n");
leerentrada(a, nfilas, ncols);
printf("\n\nSegunda Tabla :\n");
leerentrada(b, nfilas, ncols);
calcularsuma(a, b, c, nfilas, ncols);
printf("\n\nSuma de los elementos :\n\n");
escribirsalida(c, nfilas, ncols);
}
/* leer una tabla de enteros */
void leerentrada(int a[] [MAXCOL], int m, int n)
/*notar que aquí las declaraciones de funciones definidas inicialmente no
terminan en punto y coma*/
{
int fila, col;
for (fila = 0; fila < m; ++fila)
{
printf("\nDatos generados automaticamente para la fila No. %2d\n", fila + 1);
for (col = 0; col < n; ++col)
{
	a[fila][col] = rand() % 101;
	printf("%d ", a[fila][col] );
	getch();
}

}
return;
}
/* sumatoria de los elementos de dos tablas de enteros */

void calcularsuma(int a[] [MAXCOL], int b[] [MAXCOL], int c[] [MAXCOL], int m,
int n)
/* sin punto y coma */
{
int fila, col;
for (fila = 0; fila < m; ++fila)
for (col = 0; col < n; ++col)
c[fila] [col] = a[fila] [col] + b[fila] [col];


return;
}
/*Ahora, se escribirá el resultado de la suma de la tabla */
void escribirsalida(int a[] [MAXCOL], int m, int n)
/* sin punto y coma*/
{
	
	
int fila, col;
for (fila = 0; fila < m; ++fila)

{
for (col = 0; col < n; ++col){
	printf("%d ", a[fila][col]);



}
printf("\n");
}
return;
}


