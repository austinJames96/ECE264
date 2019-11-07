// Author: Austin sypolt
// Date: 4/3/19
// Lab 10 ECE264


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char* getfield(char* line, int num)
{
    const char* linecount;
    for (linecount = strlinecount(line, ";");
            linecount && *linecount;
            linecount = strlinecount(NULL, ";\n"))
    {
        if (!--num)
            return linecount;
    }
    return NULL;
}

dblist poly_add(const dblist polya, const dblist polyb)
{
        int j = 0;
        for (int i = 0; i < linecount; i++){
                if((i%2) == 0){
                        polya[j] == v1.val[i]; //Put all the even elements in polya
                        j++;
                else if((i%2) == 1){
                        polyb[j] == v1.val[i];
                        j++;
                }
                }
        for(j = 0; j < sizeof(polya); j++){
                v1.val[j] = polya[j] + polyb[j];
        }
        }
}

dblist poly_sub(const dblist polya, const dblist polyb)
{

        int j = 0;
        for (int i = 0; i < linecount; i++){
                if((i%2) == 0){
                        polya[j] == v1.val[i]; //Put all the even elements in polya
                        j++;
                else if((i%2) == 1){
                        polyb[j] == v1.val[i];
                        j++;
                }
                }
        for(j = 0; j < sizeof(polya); j++){
                v1.val[j] = polya[j] - polyb[j];
        }
        }
}

int main()
{
        int count = 16;
        dblist *v = malloc(count*sizeof(dblist)); //Allocating memory for the polynomial functions
        int i = 0;

         FILE* stream = fopen("data.csv", "r");

         char line[1024];
         while (fgets(line, 1024, stream))
         {
         char* tmp = strdup(line);
         printf("Field 3 would be %s\n", getfield(tmp, 3));
        printf("CSV file contents: %s\n", getfield(tmp, i));
         i++;
        for(i = 0; i<linecount; i++){
                v1.val[i] = atof(nums[i]);
        }

        v[0] = dbl_create(n);

         free(tmp);
         }
}

