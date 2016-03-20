#include<stdio.h>

int main()
{
		int n;
		scanf("%d",&n);
		getchar();

		int ans=0;
		
		char a,b;
		b='Y';

		while( n-- )
		{
				scanf("%c",&a);
				if( a==b )
						ans++;
				else
						b=a;
		}

		printf("%d\n",ans);
		return 0;
}
