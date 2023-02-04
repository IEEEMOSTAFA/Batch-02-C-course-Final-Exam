#include<stdio.h>
void display_prime(int x,int y);
int prime_check(int m);
int main()
{
    int n;
    scanf("%d",&n);
    int arr1[n];
    int arr2[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
        scanf("%d",&arr2[i]);

    }
    for(int i=0;i<n;i++)
    {
        display_prime(arr1[i],arr2[i]);
        printf("\n");

    }
return 0;
}
 display_prime(int x,int y)
{
    for(int i=x;i<=y;i++)
        if(prime_check(i)==1)
    {
        printf("%d ",i);
    }
}
 prime_check(int m)
{
    for(int i=2;i<m;i++)
    {
        if(m%i==0)
            return 0;
    }
    return 1;
}
