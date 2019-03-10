/* Muestra por pantalla el mayor y el menor de tres números */

#include <stdio.h>

int main(){

	int a, b, c, mayor, menor;

	printf("\nIntroduce tres enteros: ");
	scanf("%d %d %d", &a, &b, &c);

	/* Primero calculamos el mayor */
	mayor = a;
	if (b > mayor)
		mayor = b;
	if (c > mayor)
		mayor = c;

	/* Segundo calculamos el menor */
	menor = a;
	if (b < menor)
		menor = b;
	if (c < menor)
		menor = c;

	/* Mostramos el resultado */
	printf("\nEl mayor es %d, y el menor %d.\n", mayor, menor);

	system("pause");
	return 0;
}