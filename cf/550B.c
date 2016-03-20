#include<stdio.h>

int a[20];

int main()
{
		int n,l,r,x;

		scanf("%d%d%d%d",&n,&l,&r,&x);

		int i;
		int ans=0;
		for( i=0 ; i<n ; i++ )
				scanf("%d",&a[i]);

		for( i=2 ; i < (1<<n) ; i++ )
		{
				int min=1000006;
				int max=0;
				int sum=0;
				int j=i;
				int count=1;
				while( j!=0 )
				{
						if( j%2==1 )
						{
								sum+=a[n-count];
								if( min > a[n-count])
										min=a[n-count];
								if( max < a[n-count])
										max=a[n-count];

						}
						count++;
						j=j/2;
				}
				if( max-min >= x && sum<=r && sum>=l )
						ans++;
		}
		printf("%d\n",ans);
		return 0;
}
