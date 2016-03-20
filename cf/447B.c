#include<stdio.h>

int main()
{
		char s[1003];

		scanf("%s",s);

		long long ans=0;

		int k;

		scanf("%d",&k);

		int i;

		int a[26];
		int max=0;

		for( i=0 ; i<26 ; i++ )
		{
				scanf("%d",&a[i]);
				if( a[i] > max )
						max=a[i];
		}

		for( i=0 ; s[i]!='\0' ; i++ )
				ans+=(long long)a[s[i]-'a']*(i+1);
		int yo=i;
		for( i ; i<yo+k ; i++ )
				ans+=(long long)max*(i+1);


		printf("%lld\n",ans);

		return 0;
}
