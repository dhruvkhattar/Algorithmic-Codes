#include<stdio.h>

int main()
{
		int n,v;

		scanf("%d%d",&n,&v);

		int i;
		int a[60][60];
		int count=0;
		int z[60];

		for( i=0 ; i<n ; i++ )
		{
				int k;
				scanf("%d",&k);
				
				int j;
				int flag=0;
				for( j=0 ; j<k ; j++ )
				{
						scanf("%d",&a[i][j]);
						if( a[i][j] < v && flag==0 )
						{
								flag=1;
								z[count++]=i;
						}
				}
		}

		printf("%d\n",count);

		for( i=0 ; i<count ; i++)
				printf("%d ",z[i]+1);

		printf("\n");

		return 0;
}
