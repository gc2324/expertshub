#include<stdio.h>
#include<conio.h>
void main()
{
   int no1,no2,no3;
   clrscr();
   printf("enter the input values:");
   scanf("%d %d",&no1,&no2);
   scanf("%d",&no3);
   no3=no1+no2;
   printf("sum of the value are %d",no3);
   getch();
}