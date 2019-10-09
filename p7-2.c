#include <stdio.h>
#include <stdlib.h>

int main(){
	float v_f;//variable tipo float
	double v_d;//variable tipo double
	long double v_ld;//variable tipo long double

	printf("Ingresa un dato tipo float\n");
	scanf("%f",&v_f);
	printf("Ingresa un dato tipo double\n");
	scanf("%lf",&v_d);
	printf("Ingresa un dato tipo long double\n");
	scanf("%Lf",&v_ld);

	printf("Valores leidos\n");
	printf("%f\t%e\t%g\n",v_f,v_f,v_f);
	printf("%f\t%e\t%g\n",v_d,v_d,v_d);
	printf("%Lf\t%Le\t%Lg\n",v_ld,v_ld,v_ld);
  return 0;

}
