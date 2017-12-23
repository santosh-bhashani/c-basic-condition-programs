//greater among two numbers
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("ENTER TWO NUMBERS : ");
	scanf("%d %d",&a,&b);
	if(a>b) printf("%d > %d",a,b);
	else printf("%d < %d",a,b);
	getch();
}
