/*
This program will remove float number integer part and keep the number decimal number as result. 
for example if float num= 13.50 ---> after casting out the num should be 0.50
*/

#include <stdio.h>

int main()
{
 float data; 
 float deci; 
 int integer; 
 printf("Please enter the data in float"); 
 scanf("%f", &data); 
 integer= (int)data;
 deci= data-integer; 
 printf("The decimal part of a program: %f ", deci);
 

    return 0;
}
