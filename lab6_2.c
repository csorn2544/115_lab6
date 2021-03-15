#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j=0,k=0,num1,num2,numtemp1,numtemp2;
    scanf("%d",&n);
    scanf("%d",&num1);
    scanf("%d",&num2);
    while(num1!=0)
    {
        numtemp1=num1%10;
        numtemp2=num2%10;
        if(numtemp1==numtemp2)
            j++;
        else
            k++;
        num1=num1/10;
        num2=num2/10;
    }
    printf("%d %d",j,k);
}
