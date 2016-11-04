#include <stdio.h> /* cabecera que permite usar funciones de entrada y salida de C */

int main(void){ /* función incial */
	int cortos = sizeof(short); /*variable con el tamaño de un short en bytes */
	int enteros = sizeof(int); /*variable con el tamaño de un int en bytes */
	int sin_signo = sizeof(unsigned int); /*variable con el tamaño de un unsigned int en bytes */
	int apuntin = sizeof(int*); /*variable con el tamaño de un apuntador a un int en bytes */
	int car = sizeof(char); /*variable con el tamaño de un char en bytes */
	int flotante = sizeof(float); /*variable con el tamaño de un float en bytes */
	int doble = sizeof(double); /*variable con el tamaño de un double en bytes */
	printf("El tipo short tiene tamaño %d\n", cortos); /*imprime la frase seguida del tamaño de un short*/
	printf("El tipo int tiene tamaño %d\n", enteros); /*imprime la frase seguida del tamaño de un int*/
	printf("El tipo unsigned int tiene tamaño %d\n", sin_signo); /*imprime la frase seguida del tamaño de un unsigned int*/
	printf("El tipo apuntador a int tiene tamaño %d\n", apuntin); /*imprime la frase seguida del tamaño de un apuntador a un int*/
	printf("El tipo char tiene tamaño %d\n", car); /*imprime la frase seguida del tamaño de un char*/
	printf("El tipo float tiene tamaño %d\n", flotante); /*imprime la frase seguida del tamaño de un float*/
	printf("El tipo double tiene tamaño %d\n", doble); /*imprime la frase seguida del tamaño de un double*/
}