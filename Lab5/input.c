#include <stdio.h> // Include packages as needed

int main() 
{
	char name[20];
	
	printf("Hello. What's your name? \n");
	scanf("%d", &name);
	printf("Hi there, %d", name);
	
	getchar();
	return 0;
}