#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d\n",&n);
    char arr[n];

    for(int i=0; i<n; i++)
    {
     scanf("%c",&arr[i]);
    }
    int fr[27];
    for(int i=1;i<=26;i++)
    {
     fr[i]=0;
    }
    for(int i=0;i<n;i++)
    {
     fr[arr[i]-96]++;
    }
    int count=0;
    for(int i=1;i<=26;i++)
    {
     if(fr[i]==1)
     {
      count++;
     }

    }
    printf("%d",count);
    return 0;

}

/*#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d\n",&n);
    char a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%c",&a[i]);
    }
    int fr[27];
    for(int i=1; i<=26; i++)
    {
        fr[i]=0;
    }
    for(int i=0; i<n; i++)
    {
        fr[a[i]-96]++;
    }

    int count;
    for(int i=1; i<=26; i++)
    {
        if(fr[i]==1)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
*/
