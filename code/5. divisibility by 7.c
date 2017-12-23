//divisibility by 7
#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	printf("ENTER A NUMBER : ");
	scanf("%d",&a);
	if(a%7==0) printf("%d is divisible by 7",a);
	else printf("%d is not divisble by 7",a);
	getch();
}
