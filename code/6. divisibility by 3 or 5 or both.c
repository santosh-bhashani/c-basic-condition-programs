//divisibile by  or 5 or both 
#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	printf("ENTER A NUMBER : ");
	scanf("%d",&a);
	if(a%3==0 & a%5==0) printf("%d is divisible by both 3 and 5",a);
	else if(a%3==0) printf("%d is divisible by 3");
	else if(a%5==0) printf("%d is divisible by 5");
	else printf("%d is  divisble by neither 3 nor 5",a);
	getch();
}
