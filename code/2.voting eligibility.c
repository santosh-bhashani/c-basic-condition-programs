//voting eligibility india (18 YRS)
#include<stdio.h>
#include<conio.h>
void main()
{
	int age;
	char name[20];
	printf("ENTER NAME : ");
	scanf("%s",&name);
	printf("ENTER AGE :");
	scanf("%d",&age);
	if(age>=18)
	{
			printf("%s IS ELIGIBLE FOR VOTING",name);}
	else
		{
		printf("%s IS NOT ELIGIBLE FOR VOTING",name);}
	getch();
	
}
