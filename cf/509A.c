#include<stdio.h>

int a[20][20];

int main()
{
		int n;
		scanf("%d",&n);
		
		int i;
		for( i=1 ; i<=n ; i++ )
				a[1][i]=a[i][1]=1;

		int j;
		for( i=2 ; i<=n ; i++ )
				for( j=2 ; j<=n ; j++ )
						a[i][j]=a[i-1][j]+a[i][j-1];

		printf("%d\n",a[n][n]);			

		return 0;
}
