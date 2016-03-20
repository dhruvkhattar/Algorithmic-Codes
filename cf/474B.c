#include<stdio.h>
int q[1000009];
int main()
{
		int n,i,j=1,a,t;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
				scanf("%d",&a);
				while(a--)
				{
						q[j]=i+1;
						j++;
				}
		}
		int m;
		scanf("%d",&m);
		for(i=0;i<m;i++)
		{
				scanf("%d",&t);
				printf("%d\n",q[t]);
		}
		return 0;
}
