#include <stdio.h> /* cabecera que permite el uso de funciones de entrada y salida de C*/

/* Declaración de funciones */
int misterio1(int (*fun) (int), int);
void misterio2(void (*fun) (int), int);
int cuadrado_num(int);
void imprime_num(int);

int main() //Función principal, punto de partida para el programa
{

  int (*fun1) (int); //crea un apuntador a funcion de tipo int que recibe un int
  void (*fun2) (int); //crea un apuntador a funcion de tipo int que recibe un int

  fun1 = &cuadrado_num; //al apuntador fun1 le asigna la función cuadrado_num
  fun2 = &imprime_num; //al apuntador fun2 le asigna la función imprime_num

  int var = misterio1(fun1, 3); //crea una variable de tipo int (var) y almacena el valor que devuelve la función misterio1.
                                //sería 9 ya que le está pasando el apuntador fun1 que tiene la función de elevar al cuadrado.
  misterio2(fun2, var); //llama a la fución misterio2 con los parámetros fun2(el apuntador a la función imprime_num) y la variable anterior (var)
                        //imprime el valor de la variable var ya que la está pasando el apuntador fun2 que tiene asignado la función imprime_num
}


int misterio1(int (*fun) (int), int num) //firma de la función misterio1 que recibe un apuntador a función (que recibe y regresa un int), además recibe un int y regresa un int 
{
    return fun(num); //regresa el valor entero que da como resultado la función fun con el valor num como parámetro
}

void misterio2(void (*fun) (int), int num) //firma de la función misterio2 que recibe un apuntador a función (llamado fun, que recibe un int pero no regresa algo), además recibe un int y no regresa algo
{
    fun(num); //llama a la función fun con el parámetro num
}

int cuadrado_num(int num) //firma de la función cuadrado_num que recibe y regresa un int
{
    return num * num; //regresa el número ingresado al cuadrado
}

void imprime_num(int num) //firma de la función imprime_num que recibe un int y no regresa algo
{
    printf("Tada: %d\n", num); //imprime la expresión "Tada: " seguida del número ingresado
}
