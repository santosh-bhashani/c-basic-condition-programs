//divisibility by 3
#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	printf("ENTER A NUMBER : ");
	scanf("%d",&a);
	if(a%3==0) printf("%d is divisible by 3",a);
	else printf("%d is not divisble by 3",a);
	getch();
}
