#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int j=1;j<=t;j++)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        int Flag=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        //position
        int ex;
        scanf("%d",&ex);


        for(int i=0;i<n;i++)
        {
            if(arr[i]==ex)
            {
             Flag=1;
             printf("Case %d: %d\n",j,i+1);
             break;
            }
        }
        if(Flag==0)
        {
            printf("Case %d: Not Found\n",j);
        }

    }
    return 0;
}
