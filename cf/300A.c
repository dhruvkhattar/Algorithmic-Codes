#include<stdio.h>

int main()
{
		int n;

		scanf("%d",&n);

		int i;
		int c=0;

		int flag=-1;
		int flag2=-1;
		int a[102];
		for( i=0 ; i<n ; i++ )
		{
				scanf("%d",&a[i]);
				if(a[i]<0)
				{
						if(flag==-1)
								flag=i;
						else if(flag2==-1)
								flag2=i;
						c++;
				}
		}

		printf("1 %d\n",a[flag]);

		if( c%2==1)
		{
				printf("%d",n-2);
				for( i=0 ; i<n ; i++ )
						if(i!=flag && a[i]!=0)
								printf(" %d",a[i]);
				printf("\n");
				printf("1 0\n");
		}
		else 
		{
				printf("%d",n-3);
				for( i=0 ; i<n ; i++ )
						if(i!=flag && i!=flag2 && a[i]!=0)
								printf(" %d",a[i]);
				printf("\n");
				printf("2 0 %d\n",a[flag2]);
		}

		return 0;
}
