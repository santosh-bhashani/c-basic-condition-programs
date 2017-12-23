#include<stdio.h>
#include<conio.h>
void main()
{
	int choice,a,b;

	printf("ENTER two numbers : ");
	scanf("%d%d",&a,&b);
	printf("what do you want to find :\n1.greatest among two\n2.smallest among two");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1 : if(a>b) printf("%d is greater",a);
				else printf("%d is greater",b);
				break;
		
		case 2 : if(a>b) printf("%d is smaller",b);
				else printf("%d is smaller",a);
				break;
		default:  printf("invalid choice");
	}
	getch();
}
