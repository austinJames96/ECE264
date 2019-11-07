#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STR_LEN 10

int main () {
//atoc(str) convert a string in "a + bj" format to a double complex number. 
//Either the real part of the imaginary part could be missed,
//ctoa_r(buf, x, f) To convert a double complex number to a string a + bj format
//with a given buffer based on the convention of Lab 5. 
//ctoa(x, f) Convert a double complex to a string with "a+bj" format without a buffer
//slist_count(sl) Return the number of strings in the array of string
	
	int n;
	int real;
	int imag;
	
	char realnums[MAX_STR_LEN];
	char imagnums[MAX_STR_LEN];
	char buffer[256];
	
	realnums[0] = '1';
	realnums[1] = '2';
	realnums[2] = '3';
	realnums[3] = '4';
	realnums[4] = '5';
	imagnums[0] = '1';
	imagnums[1] = '2';
	imagnums[2] = '3';
	imagnums[3] = '4';
	imagnums[4] = '5';
	
	int realLen = strlen(realnums);
	int imagLen = strlen(imaagnums);
	double doubleImag;
	double doubleReal;
	
	//atoc(str)
	if(sizeof(imagnums) != sizeof(realnums){
		printf("Real and imaginary arrays are not of the same size");
	
		for (int i = 0; i<sizeof(realnums); i++){
			fgets(buffer, 256, realnums[i]);
			doubleReal = atoc(realnums[i]);
		}
		for (int i = 0; i<sizeof(imagnums); i++){
			fgets(buffer, 256, imagnums[i]);
			doubleImag = atoc(imagnums[i]);
		}
		for(int i = 0; i<sizeof(realnums); i++){
			printf("Your converted complex numbers are: %f + %f i\n", doubleReal[i], doubleImag[i]);
		}
	
	
	//ctoa_r(buf, x, f);
		for (int i = 0; i<sizeof(realnums); i++){
			fgets(buffer, 256, realnums[i]);
			doubleReal = ctoa_r(buffer, i, imagnums[i]);
		}
		for (int i = 0; i<sizeof(imagnums); i++){
			fgets(buffer, 256, imagnums[i]);
			doubleImag = ctoa_r(buffer, i, realnums[i]);
		}
	
	
		for(int i = 0; i<sizeof(realnums); i++){
			printf("Your converted complex numbers are: %f + %f i\n", doubleReal[i], doubleImag[i]);
		}	
	}
	
   return(0);
}