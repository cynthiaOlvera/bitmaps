#include <stdio.h>
#include <stdlib.h>

int main()
{
	char ch;
	int arreglo[10] = { 0 };
	int i, c;
	int primero = 0;
	int ultimo = 9;
	int mitad = (primero +  ultimo)/2;
	
	printf("Escribe el arreglo de 10 numeros\n");
	for(i = 0; i < 10; i++)
		scanf("%d", &arreglo[i]);	
	
	for(i = 0; i<10; i++)
	{
		if(arreglo[i] == 0)
			printf("0");
		else
			printf("1");
	}	
	printf("\n\n");

	printf("Ingrese el valor que desea encontrar\n");
	scanf("%d", &c);
	
	while(primero <= ultimo)
	{
		if(arreglo[mitad] == c)
		{
			printf("El elemento %d se encontro en la posicion %d\n", c, mitad+1);
			break;
		}
		else if(arreglo[mitad]> c)
			ultimo = mitad -1;
		else
			primero = mitad +1;

		mitad = (primero+ultimo)/2;
	}
	
	return 0;
	
}
