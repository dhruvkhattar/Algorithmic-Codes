#include<stdio.h>

int main()
{
		int n;

		scanf("%d",&n);

		int i;
		int a[102];

		for( i=1 ; i<=n ; i++ )
				scanf("%d",&a[i]);

		int x,y;

		scanf("%d%d",&x,&y);

		int ans1=0;
		int ans2=0;

		for( i=x ; i!=y ; i=i%n+1 )
				ans1+=a[i];

		for( i=y ; i!=x ; i=i%n+1 )
				ans2+=a[i];

		if( ans1<ans2 )
				printf("%d\n",ans1);
		else
				printf("%d\n",ans2);

		return 0;
}
