//leap year
#include<stdio.h>
#include<conio.h>
void main()
{int a;
 printf("ENTER THE YEAR : ");
 scanf("%d",&a);
 if(a%4==0 && (a%400==0 || a%100!=0)) printf("%d is a leap year",a);
 else printf("%d is not a leap year",a);
 getch();
}
