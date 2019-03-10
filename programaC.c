/* Muestra por pantalla el mayor y el menor de tres números */

#include <stdio.h>

int main(){

	int a, b, c, mayor, menor;

	printf("\nIntroduce tres enteros: ");
	scanf("%d %d %d", &a, &b, &c);

	/* Calculamos el mayor */
	if(a > b && a > c){
		mayor = a;
		}else{
			if(b > a && b > c){
				mayor = b;
			}else{
				mayor = c;
		}
	}

	/* Calculamos el menor */
	if(a < b && a < c){
		menor = a;
		}else{
			if(b < c && b < a){
				menor = b;
			}else{
				menor = c;
		}
	}

	printf("\nEl mayor es %d, y el menor %d.\n", mayor, menor);

	system("pause");
	return 0;
}
