#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,n;
    printf("enter the digit:  ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++) //if n is put their then it makes a square
            {
                printf("* ");
            }
        printf("\n");
    }
    getch();
}
