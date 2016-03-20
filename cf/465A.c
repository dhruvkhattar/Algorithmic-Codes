#include<stdio.h>

int main()
{
		int n;
		scanf("%d",&n);

		char a[102];

		scanf("%s",a);

		int i;
		int ans=0;

		int carry=1;
		for( i=0 ; i<n ; i++ )
		{
				if( carry==0 )
						carry=0;
				else
				{
						ans++;
						if(a[i]=='0')
								carry=0;
				}
		}
		printf("%d\n",ans);

		return 0;
}
