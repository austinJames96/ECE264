/* Lab 11 ECE264
 * Austin Sypolt
 * Due: 4/10/19
 *
 * Objectives: Build an ambidextrous structure, use multiple selection, 
 * Comprehend user's requirements and translate them to a program
 */

#include <stdio.h>
#include <stdlib.h>
#include <complex.h>

typedef double complex dcomplex;

typedef enum{
	dt_double,
	dt_complex
} datatype;

typedef struct matrix {
	int rows, cols;
	datatype dtype;
	union {
		double **d;
		dcomplex **c;
	};
} matrix;

int main(void){
	matrix construct(10, 10, (rand()%2)-1);
	destruct(matrix1);
	
	return 0;
}


matrix construct(int nrows, int ncols, datatype dtype){ //number of rows, columns, and datatype of numbers
	
	int i, j;
	struct matrix matrixrep;
	matrix.rows = nrows;
	matrix.cols = ncols;
	
	if (enum == 0){ //The matrix is a using double values
		matrix.data = (double**)malloc(sizeof(double*) * nrows);
		//Allocate memory for dt_double datatype matrix
		
		for(i=0;i<nrows;i++){
			matrix.data[i] = (double**)malloc(sizeof(double*) * ncols);
		}
		for(i=0;i<matrix.rows;i++){
			for(j=0;j<matrix.cols;j++){
				matrix.data[i][j] = rand() % 100; //Random value for double matrix (1-100)
			}
		}
	}
	
	if (enum == 1){ //The matrix is using complex values
		matrix.data = (double**)malloc(sizeof(dcomplex*) * nrows);
		//Allocate memory for dt_complex datatype matrix
	
		for(i=0;i<nrows;i++){
			matrix.data[i] = (double**)malloc(sizeof(dcomplex*) * ncols);
		}
		for(i=0;i<matrix.rows;i++){
			for(j=0;j<matrix.cols;j++){
				matrix.data[i][j] = creal(rand() % 100); //setting real part (1-100)
				matrix.data[i][j] = cimag(rand() % 100); //setting imaginary part (1-100)
			}
		}
	}
	
	struct matrix matrixrep;
	matrix.rows = nrows;
	matrix.cols = ncols;
	
	struct matrix *matrix1;
	matrix1 = &matrixrep;
	return matrix1; //Return your created matrix of i rows and j columns of given datatype
}

void output_matrix(matrix* matrixprint){ //Output the given matrix
	int i,j;
	for(i=0;i<matrixprint.rows;i++){
		for(j=0;j<matrixprint.cols;j++){
			printf("%f", matrixprint.data[i][j]); //Print out matrix at position [i][j] (rows/cols)
		}
	}
	return 0;
}

void destruct(matrix *matrixFree){
	free(matrix.data); //Deallocate space associated with your created matrix
	
	return 0;
}