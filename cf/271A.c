#include<stdio.h>

int main()
{
		int n;
		scanf("%d",&n);
		int a[6];
		while(1)
		{
				n++;
				int i;
				int x=n;
				for(i=0 ; i<4 ; i++ )
				{
						a[i]=x%10;
						x=x/10;
				}
//				printf("%d%d%d%d\n",a[0],a[1],a[2],a[3]);
				if( a[0]!=a[1] && a[1]!=a[2] && a[2]!=a[3] && a[3]!=a[0] && a[0]!=a[2] && a[1]!=a[3]  )
				{
						printf("%d\n",n);
						return 0;
				}
		}

		return 0;
}
