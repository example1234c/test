/* Muestra por pantalla el mayor y el menor de tres números */

#include <stdio.h>
 
int main(){
 
	int a, b, c, mayor, menor;
 
 	printf("\nIntroduce tres enteros: ");
	scanf("%d %d %d", &a, &b, &c);

	if(a >= b){
		if (b >= c){
			mayor = a;
			menor = c;
		}else{
			menor = b;
			if ( a >= c){
				mayor = a;
			}else{
				mayor = c;
			}
		}
	}
	else{
		if(a >= c){
			mayor = b;
			menor = c;
			}else{
				menor = a;
				if (b >= c){
					mayor = b;
				}else{
					mayor = c;
			}
		}
	}

	printf("\nEl mayor es %d, y el menor %d.\n", mayor, menor);

	system("pause");
	return 0;
}