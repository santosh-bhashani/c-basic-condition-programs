//positive negative or zero
#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	printf("ENTER THE NUMBER : ");
	scanf("%d",&a);
	if(a>0) printf("NUMBER IS POSITIVE");
	else if(a<0) printf("NUMBER IS NEGATIVE");
	else printf("NUMBER IS ZERO");
	getch();
}
