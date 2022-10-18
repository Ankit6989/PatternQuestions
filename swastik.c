#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,n;
    printf("enter the value ");
    scanf("%d",&n);

    for(i=1;i<=n*2-1;i++){
        for(j=1;j<=n*2-1;j++){

if(i==n||j==n||i==1&&j>n||i<n&&j==1||i>n&&j==n*2-1||i==n*2-1&&j<n)
   {
  printf(" *");
   }
   else
   {
  printf("  ");
   }
  }
  printf("\n");
        }
        getch();
    }

