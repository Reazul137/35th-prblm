#include<stdio.h>
int main()
{
    int i, x, y, sum=0;

    printf("Input a pair of number : example(10,2 : 2,10)");

    printf("\n Input the first number of the pair : ");
    scanf("%d",&x);

    printf("\n Input the second number of the pair : ");
    scanf("%d",&y);

    if(x>y)
    {
        printf("The pair is in descending order!");
    }
    else
    {
        printf("The pair is in ascending order!");
    }

    return 0;
}
