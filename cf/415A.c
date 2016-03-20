#include<stdio.h>

int main()
{
		int n,m;

		scanf("%d%d",&n,&m);

		int i;
		int a[120];
		int b[120]={0};
		for( i=0 ; i<m ; i++ )
		{
				scanf("%d",&a[i]);
				int j;
				for( j=a[i] ; j<=n ; j++ )
						if(b[j]==0)
								b[j]=a[i];
		}

		for( i=1 ; i<=n ; i++ )
				printf("%d ",b[i]);

		printf("\n");	

		return 0;
}
