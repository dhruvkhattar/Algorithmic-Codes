#include<stdio.h>

int main()
{
		int a[1000006];
		
		int n;
		scanf("%d",&n);

		int i;
		
		for( i=2 ; i<n ; i++ )
		{
				if( a[i]==0 )
				{
						int j=2;

						while( j*i <= n )
						{
								a[j*i]=1;
								j++;
						}
				}

		}

		//for( i=0 ; i<n ; i++ )
		//		if(a[i]==1)
		//				printf("%d\n",i);

		for( i=1 ; i<n ; i++ )
		{
				if( a[i]==1 && a[n-i]==1 )
				{
						printf("%d %d\n",i,n-i);
						return 0;
				}
		}
		return 0;
}
