#include<stdio.h>// KITC/ TIGER IT BANGLADESH/Bjit/
int main()
{
    int n;
    printf("Enter the number of array range\n");
    scanf("%d",&n);
    int arr1[n];
    int arr2[n];
    int i,j;
    for( i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }

    for( i=0;i<n;i++)
    {
        for( j=1;j<n-i;j++)
        {
          if(arr1[j]<arr1[j-1])
          {
            int temp=arr1[j];
          arr1[j]=arr1[j-1];
          arr1[j-1]=temp;
          }
        }
    }
 //Second Input Taking>>>>>>>>>>>>>>>

  for( i=0;i<n;i++)
    {
        scanf("%d",&arr2[i]);
    }

    for( i=0;i<n;i++)
    {
        for( j=1;j<n-i;j++)
        {
          if(arr2[j]>arr2[j-1])
          {
            int temp=arr2[j];
          arr2[j]=arr2[j-1];
          arr2[j-1]=temp;
          }
        }
    }

  for( i=0;i<n;i++)
  {
      printf("%d ",arr1[i]-arr2[i]);
  }



    return 0;
}
