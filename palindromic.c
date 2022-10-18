#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,k,n;
    printf("enter the value ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%d",k);
        }
        for(j=k-2;j>=1;j--)
        {
           printf("%d",j);
        }
         printf(" \n");
    }
    getch();
}
