#include<stdio.h>
int gcd(int a,int b);
int main()
{
    int t;
    scanf("%d",&t);
    int count;
    for(int k=1;k<=t;k++)
    {
        int n,j,count=0;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
        {
         scanf("%d",&arr[i]);
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(arr[i]==arr[j])
                    continue;


                    if(gcd(arr[i],arr[j])==1)
                count++;
            }

        }
        printf("%d\n",count);

    }
    return 0;

}
gcd(int a,int b)
{
    int gc,i;
    for(i=1;i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
            gc=i;
    }
    return gc;
}
