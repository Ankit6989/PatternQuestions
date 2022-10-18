#include<stdio.h> //space change karna par hi 3 pattern ban raha ha
#include<conio.h>

void main()
{
    int i,j,n;
    printf("enter the value ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
            {
                printf("  ");
            }

        for(j=1;j<=i;j++) //   n karna par rhombus ban jata ha
                {
                  printf(" %d ",j);
                }
        printf(" \n");
    }
    getch();
}
