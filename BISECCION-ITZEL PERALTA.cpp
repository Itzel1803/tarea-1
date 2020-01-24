#include <stdio.h>
#include <math.h>
 
#define Raiz(x) (x*x*x+4*x*x-10)

float f_B(float xl, float xu, float xa, float xr, float ea, float e, int i);
int main() {
	float xl, xu, xr, xa, ea, e;
	int i;
		printf("Ingresa xl: ");
		scanf("%f", &xl);
		printf("Ingresa xu: ");
		scanf("%f", &xu);
 		printf ("Indica el margen de error: ");
 		scanf ("%f",&e);
			i = 0;
			xa = 0.0;
			ea = 0;
			f_B(xl, xu, xa, xr, ea, e, i);
 
return 0;
}


float f_B(float xl, float xu, float xa, float xr, float ea, float e, int i){
	do{
		i++;
		xr = (xl + xu) / 2;
	if(i>= 2) {
		ea = ((xr - xa) / xr);
	}
	
	
	ea = fabs(ea); 
	printf("%d %f %f %f %f \n", i, xl, xu, xr, fabs(ea));
	xa = xr;
	if(Raiz(xr) > 0) {
		xl = xr;
	} 
	
	
	else{
		xu = xr;
	}

	} while(ea > e || (ea == 0.0 && i == 1));
 
	printf("\nLa raiz es: %f\n", xr);
}
