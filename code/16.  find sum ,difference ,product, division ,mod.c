//program to find the sum,difference,product,division,mod
#include<stdio.h>
#include<conio.h>


void main()
{   const char choice=0;
    int a,b,sum,dif,prod,mod; //defining the variables
	float div;
	printf("CHOOSE THE OPERATION \n A.sum B.difference C.product D.division E.mod");
	scanf("%c",&choice);
	printf("ENTER THE TWO NUMBERS YOU WANT TO perform the operations on : \n");
    scanf("%d %d",&a,&b); //taking input of two numbers
    switch(choice)
    {
	
	case 'A' : sum=a+b; printf("sum = %d",sum); break; //adding the numbers 
    case 'B' : dif=a-b; printf("difference : %d",dif); break;
    case 'C' : prod=a*b; printf("product : %d",prod); break;
    case 'D' : div=(float)a/(float)b; printf("division : %f",div);break; //using type casting
    case 'E' : mod=a%b; printf("mod : %d",mod); break;
    default : printf("invalid input");
     
}
    getch();
};
