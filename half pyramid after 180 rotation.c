
#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,n;
    printf("enter the digit:  ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++) //if j is written as j<=n-i it gives answer as inverted half pyramid.
        {
            if(j<=n-i)
            {
                printf("  ");
            }
            else
              {
                 printf(" *");
              }

        }
        printf(" \n");
    }
    getch();
}
