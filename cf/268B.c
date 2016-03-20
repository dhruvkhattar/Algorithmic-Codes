#include<stdio.h>

int main()
{
		int n;
		scanf("%d",&n);

		int i;
		int ans=0;
		for( i=1 ; i<n ; i++ )
		{
				ans+=i*(n-i);
		}

		ans+=i*(n-i+1);

		printf("%d\n",ans);

		return 0;
}
