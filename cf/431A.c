#include<stdio.h>

int main()
{
		int a[5];

		scanf("%d%d%d%d",&a[1],&a[2],&a[3],&a[4]);

		char s[100005];

		scanf("%s",s);

		int i;
		int ans=0;
		for( i=0 ; s[i]!='\0' ; i++ )
				ans+=a[s[i]-'0'];

		printf("%d\n",ans);

		return 0;
}
