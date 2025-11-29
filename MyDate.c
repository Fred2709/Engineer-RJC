/* Description
This program demonstrate the use of printf statement and 
the gradual evolution of the date output in different format.*/


#include <stdio.h> 
#include <stdlib.h>

int day, month, year; // Declare the integers day, month year variable as global varible

int day = 27; // assign value to the integer  day
int month = 11; //assign value to integer month
int year = 2025; // Assogn value to integer year

// start the main function or start the program
int main(void)

{

    
    printf("\n");// printf new line


    printf("Hello World"); // print statement Hello World


    printf("\n");// printf new line


    printf("\n"); // print new line
    printf("%i", day); // print day value
    printf("\n"); // printf new line
    printf("%i", month); // print month value
    printf("\n"); // print new line
    printf("%i", year); // print year value


    printf("\n");// print new line
    printf("\n");// printf new line

   
    printf("American Format: "); // Print statement
    printf("\n");// printf new line
    printf("%i", month); // print month value
    printf("/"); // print statement
    printf("%i", day); // print day value
    printf("/"); // print statement
    printf("%i", year); // print year value


    printf("\n");// printf new line
   
   
    printf("European Format: "); // print statement
    printf("\n");  // printf new line
    printf("%i", day);// print day value
    printf("/"); // print statement
    printf("%i", month);// print month value
    printf("/"); // print statement
    printf("%i", year);// print year value








} // End the program 
