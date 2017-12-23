#include<stdio.h>
#include<conio.h>
void main()
{
	int choice,l,b;
	printf("ENTER YOUR CHOICE :\n1.area of rectangle\n2.perimeter of rectangle");
	scanf("%d",&choice);
	printf("ENTER LENGTH AND BREADTH : ");
	scanf("%d %d",&l,&b);
	switch(choice)
	{
		case 1 : printf("area : %d",l*b); break;
		case 2 : printf("perimeter : %d ",2*(l+b)); break;
		default:  printf("invalid choice");
	}
	getch();
}
