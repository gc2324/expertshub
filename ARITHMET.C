#include<stdio.h>
#include<conio.h>
void main()
{
   int no1,no2,o1,o2,o3,o4,o5;
   clrscr();
   printf("enter the input values:");
   scanf("%d %d",&no1,&no2);
   scanf("%d",&o1);
   o1=no1+no2;
   printf("\nsum of the addition:%d",o1);
   o2=no1-no2;
   printf("\nsum of the substract:%d",o2);
   o3=no1*no2;
   printf("\nsum of the multiplication:%d",o3);
   o4=no1/no2;
   printf("\nsum of the division:%d",o4);
   o5=no1%no2;
   printf("\nsum of the modulus:%d",o5);
   getch();
}