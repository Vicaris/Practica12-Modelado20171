#include <stdio.h> /* cabecera que permite el uso de funciones de entrada y salida de C*/

void swap(int *a, int *b){ /*firma de la función swap que no regresa nada y recibe dos apuntadores a int*/
		int temp = *a; /* Crea una variable y le asigna el valor de *a */
		*a = *b; /* Al apuntador *a le asigna el valor de *b */
		*b = temp; /* A *b le asigna el valor de temp (antes *a) */
	}

int main(void){ /* función inicial */

	int a = 3; /* crea una variable de tipo int y le asigna de valor 3 */
	int b = 2; /* crea una variable de tipo int y le asigna de valor 2 */

	printf("El valor de a es: %d\ny el valor de b es: %d\n\n",a,b); /* imprime los valores de a y b */
	swap(&a,&b); /* intercambia los valores de a y b pasándoles directamente la dirección de memoria */
	printf("Después del swap a es: %d\ny b es: %d\n",a,b); /* imprime los valores de a y b después del swap */
}