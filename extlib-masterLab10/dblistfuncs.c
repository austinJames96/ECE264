/* ECE264 Lab 9
*  Austin Sypolt
*  Due: 3/27/19
*  Objectives:
*   - Design vectorized computing library functions
*   - Apply the vectorized computing library functions
*/

#include <dblist.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "extlib.h"

dblist map(double (*func)(double, void *), dblist v, void *arg)
{
	dblist new;

	new.num = v.num;
	for(int i = 0; i<n;i++){
		void new.val[i] = (*func)(v.val[i]);
		}
	return new;
}

dblist shift_up (const dblist a, int n)
{
	dblist new;
	
	//create the new dblist which has capacity for a.num + n elements
	new.num = a.num + n;
	new.val = malloc(new.num*sizeof(double)); //define space of new.val
	new = dbl_create(a.num + n);
	
	// This are loops iterating the values to shift up in the vector array
	int count = 0;
	
	for(int i = 0; i<n; i++){
		new.val[i] = 0;
		}
	for (int i = n; i < new.num; i++){
		new.val[i] = a.val[count];
		count++;
		}
}

dblist shift_down (const dblist a, int n)
{
	dblist new;
	
	//create the new dblist which has capacity for a.num + n elements
	int count = 0;
	if (n >= a.num){
		new.num = 0;
		new.val = NULL;
		return new;
		}
	
	new.num = a.num - n;
	new.val = malloc(new.num*sizeof(double)); //Define size of new.val
	
		
	// This are loops iterating the values to shift down in the vector array
	for (int i = n; i>0; i--){
		new.val[i] = a.val[count];
		}
}

dblist raise(double x, int n)
{
	dblist X2;
	X2.num = n;
	
	for (int i = 0; i<n; i++){
		X2.val[i] = pow(x, i);
		}	
	return X2;
}

double square (double x, void *arg)
{
	return x*x;
}

double sum (double x, double y, void *arg)
{
	return x + y;
}

main()
{
	double x = 0;
	
	dblist f = {{1,0,5},3};
	dblist X = raise(x);
	
	dblist prod = (f, X); 
	double dot_prod = reduce(sum,prod,NULL);
}
