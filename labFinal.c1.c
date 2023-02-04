/*#include<stdio.h>
int main()
{
    int i,j,row,space,k;
    printf("please,Enter the number of row \n");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(space=1;space<=row-i;space++)
        {
            printf(" ");
        }
        for(k=0;k!=2*i-1;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;

}
*/
#include<stdio.h>
int main()
{
    int i,j,row,space,k;
    printf("please,Enter the number of row \n");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(space=1;space<=row-i;space++)
        {
            printf(" ");
        }
        for(k=0;k!=2*i-1;k++)
        {
            if(i%2!=0)printf("^");
            else printf("*");
        }
        printf("\n");
    }
    return 0;

}
