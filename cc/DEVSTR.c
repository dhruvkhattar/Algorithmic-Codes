#include<stdio.h>

char a[100005];

int main()
{
		int n,k,t;

		scanf("%d",&t);

		while( t-- )
		{
				scanf("%d%d",&n,&k);
				
				int i;
				scanf("%s",a);

				int count=1;
				char temp=a[0];
				int ans=0;

				for(i=1 ; i<n ; i++ )
				{
						if( count==k && a[i]==temp)
						{
								a[i]='1'+'0'-a[i];
								count=0;
								ans++;
						}
						if( a[i]!=temp )
								count=0;
						count++;
						temp=a[i];
				}
				printf("%d\n",ans);
				printf("%s\n",a);
		}

		return 0;
}
