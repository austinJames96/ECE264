//Austin Sypolt
//ECE264
//Lab 6
//Purpose:
//	Design a program to integrate a polynomial symbolically and numerically.
//	To apply the struct construction to improve a program's readability.

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAXSIZE 10 //Maximum size of the array a

main()
{
	int a[MAXSIZE]; //array to store the polynomial values
	int b[MAXSIZE]; //array to store the integral polynomial
	int i; //looping index number
	int N; //Used for the order of the polynomial 
	int power; //Used for printing out subsequent powers of the order N polynomial
	float lowerbound; //Lower bound of integral
	float upperbound; //Upper bound of integral
	float x; //Used for the value of x in evaluation
	float evaluatedX; //Evaluated polynomial with value x
	float polynomialIntegral; //Integral of the polynomial

	printf("Enter the order of the polynomial\n"); //Order of polynomial entered in
	scanf("%d", &N); //scan for order

	printf("Enter %d coefficients\n",N+1); 
	for (i=0;i <= N;i++)
	{
		scanf("%d",&a[i]); //Read in N number of coefficients for the polynomial
	}
	
	power = N;
	printf("Given polynomial is:\n"); //Print out the given polynomial
	for (i=0;i<= N;i++)
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
	
	printf("Enter the value of x\n"); //Value of x for it to be evaluated
	scanf("%f", &x); //scan for x
	
	for (i=1;i<= N;i++)
	{
		evaluatedX = evaluatedX * x + a[i];
	}
	
	printf("\nThe evaluated polynomial with value %f is: %f\n", x, evaluatedX); 

	printf("Enter the lower bound for the integral: \n"); //LB of the integral
	scanf("%f",&lowerbound);
	
	printf("Enter the upper bound for the integral: \n"); //UB of the integral
	scanf("%f",&upperbound);
	
	if (lowerbound > upperbound){
		printf("Please make sure your lower bound is less than your upper bound"); //Error checking
		break;
	}
	power = N;
	for(i = lowerbound; i < upperbound; i+=(upperbound - lowerbound)/N) //Defining integral from LB to UB
	{
		if (power < 0) //Error checking
		{
			break;
		}
		else
		{
			b[i] = a[i]*power; //Store the integrated value into array b
			power--; //Decrease the power to move onto the next polynomial element
		}
	}
	printf(printf("\nIntegral of the polynomial = "); //Print out the integrated polynomial
	for (i = 0; i < N-1; i++){ // N-1 elements because integration does that
		if (power < 0) //Error checking
		{
			break;
		}

		if (b[i] > 0){ //Check if positive
			printf(" + ");
		}
		else if (b[i] < 0){ //Check if negative
			printf(" - ");
		}
		else{
			printf (" ");
			printf("%dx^%d ",abs(b[i]),power--); //Print out each element
		}
	}
}