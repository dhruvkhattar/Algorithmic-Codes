#include<stdio.h>
#include<string.h>

int main()
{
		char a[100005];

		scanf("%s",a);

		int lol=strlen(a);

		int q;
		scanf("%d",&q);

		while(q--)
		{

				int ind;
				int len;

				scanf("%d%d",&ind,&len);

				if( ind+len-1 < lol)
						printf("%d\n",ind+1);
				else
						printf("-1\n");
		}
		return 0;
}
