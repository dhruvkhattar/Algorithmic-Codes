#include<stdio.h>

char a[1003];
char b[1003];

int main()
{
		int n;
		scanf("%d",&n);

		scanf("%s",a);
		scanf("%s",b);

		int i;
		int ans=0;

		for( i=0 ; i<n ; i++ )
		{
				int diff=a[i]-b[i];

				if( diff<0 )
						diff = -diff;

				if( diff <=5 )
						ans+=diff;
				else
						ans+=10-diff;
		}
		printf("%d\n",ans);
		return 0;
}
