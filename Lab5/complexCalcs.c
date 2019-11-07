// Lab 5 
// ECE264
// Austin Sypolt

#include <stdio.h>      /* Standard Library of Input and Output */
#include <complex.h>    /* Standard Library of Complex Numbers */
#include <math.h>

int main()
{
	printf("Enter a real number r representing the radius of the circle: ");	
	int r;
	scanf("%d", &r);
	printf("Enter a number n for the number of equally spaced points about the circle: ");
	int n;
	scanf("%d", &n);
	
	int complexArray[n];
	double complex z1;
	double complex z2;
	printf("Real (x) / Imaginary (y) Coordinates of given radius (r) and equally spaced points (n):");
	
	int i;
	for (i = 0; i < n; i++){
		double theta = (2 * M_PI)/n;
		
		double x = r * cos(theta);
		double y = r * sin(theta);
	
		double complex z = x + y * I;
		complexArray[i] = z;
		
		//printf("%d\n", complexArray[i]);
		//printf("%f%+fi\n",creal(z), cimag(z));
		//printf("%d\n", complexArrayX[n]);
		//printf("%d\n", complexArrayY[n]);
	}
	for (i=0; i < n; i++){
		printf("Complex Value #: %f", i+1);
		printf("%f%+fi\n",creal(complexArray[i]), cimag(complexArray[i]));
		
		z1 = complexArray[i];
		if ((i+1)!= n){
			z2 = complexArray[i+1];
		}
		else{
			z2 = complexArray[i];
		}
		
		printf("Two complex points being used: z1 = %.2f + %.2fi\tz2 = %.2f %+.2fi\n", creal(z1), cimag(z1), creal(z2), cimag(z2));

		double complex sum = z1 + z2;
		printf("Sum of two complex values: z1 + z2 = %.2f %+.2fi\n", creal(sum), cimag(sum));

		double complex difference = z1 - z2;
		printf("Difference of two complex values: z1 - z2 = %.2f %+.2fi\n", creal(difference), cimag(difference));

		double complex product = z1 * z2;
		printf("Product of two complex values: z1 x z2 = %.2f %+.2fi\n", creal(product), cimag(product));

		double complex quotient = z1 / z2;
		printf("Quotient of two complex values: z1 / z2 = %.2f %+.2fi\n", creal(quotient), cimag(quotient));

		double complex conjugate = conj(z1);
		printf("The conjugate of z1 = %.2f %+.2fi\n\n", creal(conjugate), cimag(conjugate));
		double complex conjugate = conj(z2);
		printf("The conjugate of z2 = %.2f %+.2fi\n\n\n", creal(conjugate), cimag(conjugate));

	}
	
	
}