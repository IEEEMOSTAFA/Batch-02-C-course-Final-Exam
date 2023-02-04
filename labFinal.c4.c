#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }

    for(i=0;i<n;i++)
    {
        int ch;
        while(arr[i]!=0)
        {
            ch=arr[i]%10;
            //printf("%c",ch+64);
            arr[i]=arr[i]/10;
             printf("%c",ch+64);
        }
        printf("\n");
    }
    return 0;
}


