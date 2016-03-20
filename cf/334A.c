#include<stdio.h>

int a[102][102];

int main()
{
		int n;
		scanf("%d",&n);

		int i,j;
		int x=1;
		for( i=0 ; i<n ; i++ )
		{
				for( j=0 ; j<n && i%2==0 ; j++ )
				{
						a[j][i]=x;
						x++;
				}
				
				for( j=n-1 ; j>=0 && i%2!=0 ; j-- )
				{
						a[j][i]=x;
						x++;
				}
		}

		for( i=0 ; i<n ; i++)
		{
				for( j=0 ; j<n ; j++)
						printf("%d ",a[i][j]);
				printf("\n");
		}
		return 0;

}
