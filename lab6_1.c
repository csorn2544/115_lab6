#include<stdio.h>
#include <string.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    char string[n][1000],temp[1000];
    for(i=0; i<n; i++)
    {
        scanf(" %[^\n]s",string[i]);
    }
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(strcmp(string[i],string[j])>0)
            {
                strcpy(temp,string[i]);
                strcpy(string[i],string[j]);
                strcpy(string[j],temp);
            }
        }
    }
    for(i=0; i<n; i++)
    {
        printf("%s\n",string[i]);
    }
    return 0;
}
