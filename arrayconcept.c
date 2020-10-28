// Header file for input output functions
#include<stdio.h>

// main function - 
// where the execution of program begins 
void main()
{
  // creating array a[] and puting 1,2,3,4,,5
int a[]={1,2,3,4,5},*p;
printf("%d\n",a);
printf("%d\n",a++);
p=&a;
//a++;
//p++;

printf("%d\n",p++);
printf("%d\n",*p);

printf("%d\n",a);
printf("%d\n",*a);

getch();
}
