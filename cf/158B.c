#include<stdio.h>

int a[100005];

int main()
{
		int n;
		scanf("%d",&n);

		int i;
		int c1,c2,c3,c4;
		c1=c2=c3=c4=0;
		int ans=0;
		for( i=0 ; i<n ; i++ )
		{
				scanf("%d",&a[i]);
				if( a[i]==4 )
						c4++;
				else if( a[i]==3 )
						c3++;
				else if( a[i]==2 )
						c2++;
				else if( a[i]==1 )
						c1++;
		}
		ans+=c4;
		ans+=c2/2;
		if( c2%2!=0 )
				if( c1>1 )
				{
						c1-=2;
						ans+=1;
				}
				else 
				{
						c1-=1;
						ans+=1;
				}
		ans+=c3;
		c1-=c3;

		if(c1>0)
				if(c1%4==0)
						ans+=c1/4;
				else
						ans+=c1/4+1;

		printf("%d\n",ans);

		return 0;
}
