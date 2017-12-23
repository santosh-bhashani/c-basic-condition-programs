#include<stdio.h>
void main()
{
    int a,b;
    printf("ENTER THE FUNCTION YOU WANT TO PERFORM \n");
    printf("1. check the number is even or odd \n 2. check the number is negative positive or zero \n 3. check the number is divisble by 5 or not \n");
    scanf("%d",&a);
    printf("ENTER THE NUMBER YOU WANT TO PERFORM THE FUNCTION ON : ");
    scanf("%d",&b);
    switch(a)
    {
    case 1 :
        if (b%2==0) {printf("%d is even",b);}
        else {printf("%d is odd",b);}
        break;
    case 2 :
        if (b>0) {printf("%d is positive",b);}
        else if (b<0) {printf("%d is negative",b);}
        else {printf("%d is zero",b);}
        break;
    case 3 :
        if (b%5==0) printf("%d is divisible by 5",b);
        else printf("%d is not divisible by 5");
        break;
    default :
        printf("invalid option");
    }
    getch();
}
