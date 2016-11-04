#include <stdio.h> /* cabecera que permite el uso de funciones de entrada y salida de C*/

void bubble_sort(int *arr, int tam){ //firma de la función bubble sort que recibe un apuntador al arreglo y el tamaño del arreglo, no regresa algo.
	int i,j,temp; //crea tres variables de tipo int
	for (i = 0; i < tam; i++){ //usa la variable i en el for para repetir la siguiente operación la cantidad de veces como largo sea el arreglo
		for (j = 0; j < tam-1; j++){ //usa la variable j que recorre hasta un espacio antes del tamaño del arreglo.
			if (arr[j] > arr[j+1]){ //Condición que pregunta si en la posición j el elemento es mayor al de la posición j+1 del arreglo
				temp = arr[j]; //Guarda el elemento de la posición j del arreglo en la variable temp
				arr[j] = arr[j+1]; //Cambia el elemento de la posición j del arreglo por el de la posición j+1 del arreglo
				arr[j+1] = temp; //Cambia el elemento en la posición j+1 por el que se encuentra guardado en temp
			}
		}
	}
}

int main(void){ //función principal del programa, punto de partida para la ejecución
	int arr[] = {4, 3, 2, 5}; //crea un arreglo de tipo int con 4 elementos
	int len = sizeof(arr)/sizeof(int); //calcula la longitud del arreglo dividiendo la cantidad de bytes en este caso 16 bytes entre 4 (para mi compu)

	printf("Arreglo antes de ordenar:\n"); //imprime la frase
	for(int i=0;i<len;i++){ //crea una variable i que va de 0 a la longitud del arreglo-1
		printf("%d ",arr[i]); //imprime cada elemento del arreglo
	}
	printf("\n");

	bubble_sort(&arr[0], len); //llama a la función bubble sort con un apuntador al primer elemento del arreglo y el tamaño del arreglo

	printf("Arreglo después de ordenar:\n"); //imprime la frase
	for(int j=0;j<len;j++){ //crea una variable i que va de 0 a la longitud del arreglo-1
		printf("%d ",arr[j]); //imprime cada elemento del arreglo
	}
	printf("\n");

	return 0;
}