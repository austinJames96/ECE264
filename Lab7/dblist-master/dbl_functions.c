#include <stdio.h>
#include <stdlib.h>
#include "dblist.h"

dblist dbl_create(int n) {
	dblist *setlist = malloc(sizeof(dblist)); //Get size of dblist using malloc
	setlist->byteVal = (double*) malloc(n*sizeof(double)); //Get number of bytes to know how many to allocate
	setlist->num = n;
	return *setlist;
}

dblist dbl_make(int n, double *list) {
	int i;
	dblist setlist = dbl_create(n);
	for(i=0; i<n; i++) {
		setlist.byteVal[i] = *(list+i); //Fill setlist.byte[] with the element at list+i
	}
	return setlist;
}

void dbl_clean(dblist *v) {
	free(v); //Frees up allocated memory at the pointer, this is cleaned up by garbage collection
}

dblist dbl_range(double start, double end, double change) {
	int n = (end - start)/change; //Find the average change amount
	dblist setlist = dbl_create(n); 
	int i;
	for(i=0; i<n; i++) {
		setlist.byteVal[i] = start + i*change; //Increment through the values under reaching n
	}
	return setlist;
}

dblist dbl_sum(int n, double *setlist){
	int sum;
	int i;
	for(i=0; i<n; i++) {
		sum += setlist.byteVal[i]; //Add each element to each other then return the sum
	}
	return sum;
}

dblist poly_eval_x(int n, double *setlist){
	printf("Enter the value of x\n"); //Value of x for it to be evaluated
	scanf("%f", &x); //scan for x
	int evaluatedX;
	int i;
	for(i=0; i<n; i++){
		evaluatedX = evaluatedX * x + setlist.byteVal[i];
	}
	return evaluatedX;
}

dblist poly_eval_xlist(int n, double *setlist){
	power = n;
	printf("Given polynomial is:\n"); //Print out the given polynomial
	for (i=0;i<= n;i++)
	{
		if (power < 0) //Error checking
		{
			break;
		}
		if (a[i] > 0){ //Check if positive
			printf(" + ");
		}
		else if (a[i] < 0){ //Check if negative
			printf(" - ");
		}
		else{
			printf (" ");
			printf("%dx^%d ",abs(a[i]),power--); //Print out given polynomial
		}
	}
}