/*
Write a program that receives an integer representing in seconds 
The program should convert the given seconds into: 
1.Total Hours = sec/3600
2.Minutes = (sec-3600)/60
3.remaining seconds =  (sec-3600) %60
Remember the final answer should  be in the format H:M:S
*/

 #include <stdio.h>
int main()
{
int sec; 
printf("Enter time in seconds: ");
scanf("%d",&sec); 
double hour = sec/(60*60); 
double minute = (sec-3600)/60;
double remaining_seconds = (sec-3600)%60;

printf("The total hours are %lf and total minutes %lf and remaining seconds %lf ",hour, minute,remaining_seconds);

return 0; 
}
