#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
//atoc(str) convert a string in "a + bj" format to a double complex number. 
//Either the real part of the imaginary part could be missed,
//ctoa_r(buf, x, f) To convert a double complex number to a string a + bj format
//with a given buffer based on the convention of Lab 5. 
//ctoa(x, f) Convert a double complex to a string with "a+bj" format without a buffer
//slist_count(sl) Return the number of strings in the array of string


   int val;
   char str[20];
   
   strcpy(str, "98993489");
   val = atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);

   strcpy(str, "tutorialspoint.com");
   val = atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);

   return(0);
}