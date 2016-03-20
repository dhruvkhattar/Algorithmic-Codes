#include<stdio.h>

int main()
{
		int m,h1,a1,x1,y1,h2,a2,x2,y2;

		scanf("%d",&m);
		scanf("%d%d",&h1,&a1);
		scanf("%d%d",&x1,&y1);
		scanf("%d%d",&h2,&a2);
		scanf("%d%d",&x2,&y2);

		long long int t=0;
		int flag=0;

		while(1)
		{
				t++;
				h1=(((long long int)(x1%m)*(h1%m))%m+y1%m)%m;
				h2=(((long long int)(x2%m)*(h2%m))%m+y2%m)%m;
				if(h1==a1 && h2==a2)
						break;
				if(t>=100000013)
				{
						flag=1;
						break;
				}
		}
		if( flag==1 )
				printf("-1\n");
		else
				printf("%lld\n",t);
		return 0;
}
