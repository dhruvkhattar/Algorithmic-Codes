#include<stdio.h>

int main()
{
		int n;
		scanf("%d",&n);
		long long ans=0;
		while(n--)
		{
				int x1,y1,x2,y2;
				scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
				ans+=(long long)(x2-x1+1)*(y2-y1+1);

		}
		printf("%lld\n",ans);
		return 0;
}
