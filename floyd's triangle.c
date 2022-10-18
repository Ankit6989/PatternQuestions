#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,n,count = 1;
    printf("enter the value ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
                printf(" %d",count);
                count++;
        }
        printf("\n");
    }
    getch();
}
