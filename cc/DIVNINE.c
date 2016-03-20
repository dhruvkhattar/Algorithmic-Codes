#include<stdio.h>

int main()
{
		int t;
		scanf("%d",&t);

		while(t--)
		{

				char a[1000006];
				scanf("%s",a);

				int i;
				int sum=a[0]-'0';

				int flag2=0;
				for( i=1 ; a[i]!='\0' ; i++ )
				{
						sum=sum+a[i]-'0';

				}
				if(sum<9)
				{
								printf("%d\n",9-sum);
						
				}
				else
				{
						sum=sum%9;
						if(sum<=4 )
								printf("%d\n",sum);
						else
								printf("%d\n",9-sum);
				}
		}

		return 0;
}
