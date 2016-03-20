#include<stdio.h>

int main()
{
		int n;
		scanf("%d",&n);
		int a[102];
		int b[102];
		int sum[102]={0};

		int i;
		int ans=0;
		for( i=0 ; i<n ; i++ )
		{
				scanf("%d",&a[i]);
				if( a[i]==0 )
						b[i]=1;
				else
				{
						b[i]=-1;
						ans++;
				}
				sum[i+1]=sum[i]+b[i];
		}

		int j;
		int max=sum[1];

		for( i=0 ; i<n-1 ; i++ )
				for( j=i+1 ; j<n ; j++ )
				{
						if( sum[j+1]-sum[i]>max)
								max= sum[j+1]-sum[i];								
				}

		printf("%d\n",ans+max);

		return 0;
}
