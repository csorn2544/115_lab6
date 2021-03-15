#include<stdio.h>
int main()
{
    int n,i,j=0,k=0,max=0,min=0;
    scanf("%d",&n);
    int star[n];
    for(i=0;i<n;i++)
    {
        star[i]=0;
    }
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&j,&k);
        printf("%d %d\n",j,k);
        star[j-1]++;
        star[k-1]++;
    }
    for(i=0;i<n;i++)
    {
        if(star[i]>max)
        {
            max=star[i];
        }
        if(min>star[i]||i==0)
        {
            min=star[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(star[i]==max)
        {
            printf("%d ",i+1);
        }
        if(star[i]==min)
        {
            printf("%d",i+1);
        }
    }
    return 0;
}
