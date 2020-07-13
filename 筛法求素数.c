#include<stdio.h>
#include<stdlib.h>
#define n 100
int main(void)
{
    int i,j;
    int prime[n+1];
    for(i=2;i<=n;i++)
        prime[i]=1;
    for(i=2;i*i<n;i++)
    {
        if(prime[i]==1)
        {
            for(j=2*i;j<=n;j++)
            {
                if(j%i==0)
                    prime[j]=0;
            }
        }
    }
    for(i=2;i<n;i++)
    {
        if(prime[i]==1)
        {
			printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}

