#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
	char v1;//variable tipo char
	bool v2;//variable tipo bool
	char v3[10];//cadena de 10 caracteres

	printf("Ingresa un dato tipo char\n");
	scanf("%c",&v1);
	printf("Ingresa un dato tipo bool\n");
	scanf("%d",&v2);
	printf("Ingresa un dato tipo cadena\n");
	scanf("%s",&v3);

	printf("Valores leidos\n");
	printf("%c\n",v1);
	printf("%d\n",v2);	
	printf("%s\n",v3);
	return 0;

}
