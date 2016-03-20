#include<stdio.h>

long long max(long long a,long long b)
{
		if(a > b)
			return a;
		return b;
}

int main()
{
		int n;
		scanf("%d",&n);

		int i;
		int a[100005];
		int c[100005]={0};
		long long ans[100005];
		int ma=0;
		for( i=0 ; i<n ; i++ )
		{
				scanf("%d",&a[i]);
				c[a[i]]++;
				if( ma < a[i] )
						ma=a[i];
		}

		ans[0]=0;
		ans[1]=c[1];
		for( i=2 ; i<=ma ; i++ )
		{
				ans[i]=max(ans[i-1],(long long)c[i]*i+ans[i-2]);
		}

		printf("%lld\n",ans[ma]);

		return 0;
}
