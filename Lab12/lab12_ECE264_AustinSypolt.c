/* Lab 13 ECE264
 * Austin Sypolt
 *
 * lab13_ECE264_AustinSypolt.c
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void read_csv(int row, int col, char *filename, double **data){ 
	FILE *file; 
	file = fopen(filename, "r"); //Open and read from filename

	int i = 0;
    char line[100];
	while (fgets(line, 100, file) && (i < row)) //Loop through the file until reaching the end
    {
        char* tmp = strdup(line);

	    int j = 0;
	    const char* tok;
	    for (tok = strtok(line, "\t"); tok && *tok; j++, tok = strtok(NULL, "\t\n"))
	    {
	        data[i][j] = atof(tok); //Convert str to double and store in array position [i][j]
	        //printf("%f\t", data[i][j]); //Print out the contents of the CSV file
	    }
	    // printf("\n"); //Used to print out csv file contents

        free(tmp);
        i++;
    }
}

struct Node //Declare Node for use in linked lists
{
	void **data;
	struct Node *next;
}

void linkedlistfunc(double **data, int row, int col, int head){
	
	struct Node* pointerNode = (struct Node*)malloc(sizeof(struct Node)); //Allocate memory for Node pointerNode
	pointerNode->next = (*head); //Set position of head
	
	int i, j; //Initialize i and j
	for (i = 0; i<row; i++){ //Loop through the data[i][j] array and arrange the linked list
		for (j = 0; j<col; j++){
			*(int *)(pointerNode->data + i + j) = *(int *)(*data + i);
		}
	}
	(*head) = pointerNode; //reset the position of header
}

void powerfunc(double **data, int row, int col, int head){
	int i, j; //Initialize i and j
	for (i = 0; i<row; i++){ //Loop through the data[i][j] array and arrange the linked list
		for (j = 0; j<col; j++){
			*(int *)(pointerNode->data + i) = *(int *)(*data + j);
		}
	}
	(*head) = pointerNode; //reset the position of header

}

int main(int argc, char const *argv[])
{
	int header = 0; //Start the header at the first position of the linked list
	if (argc < 3){
		printf("Please specify the CSV file as an input.\n"); //Present error upon not enough arguments being used
		exit(0);
	}
	//argv[0] is our execution command
	int row     = atoi(argv[1]); //Argument 2 is the number of rows in the csv
	int col     = atoi(argv[2]); //Argument 3 is the number of cols 
	char fname[256]; //Filename max length 256
	strcpy(fname, argv[3]); //put argv[3] into fname

	double **data;
	data = (double **)malloc(row * sizeof(double *));
	for (int i = 0; i < row; ++i){
		data[i] = (double *)malloc(col * sizeof(double)); //allocate the necessary space for array
	}

	read_csv(row, col, fname, data); //Call the function read_csv
	
	linkedlistfunc(data, row, col, header); //Call linkedlistfunc, written above
	
	return 0;
}