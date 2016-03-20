#include<stdio.h>

int main()
{
		int a,b,n;
		scanf("%d%d%d",&a,&b,&n);

		while( n-- )
		{
				int l,t,m;

				scanf("%d%d%d",&l,&t,&m);

				int yo=a+(l-1)*b;
				if(yo>t)
						printf("-1\n");
				else
				{
						int sum=t*m;
						int s=0;
						int i;
						for(i=l ; ; i++ )
						{
								s+=a+b*(i-1);
								if( s>sum )
										break;
						}
						printf("%d\n",i-1);
				}
		}

		return 0;
}
