#include<stdio.h>

int main()
{
		int a[27]={0};

		char s[102];
		int n;

		scanf("%d",&n);

		scanf("%s",s);

		int i;
		for( i=0 ; i<n ; i++ )
				if(s[i]>='a' && s[i]<='z')
						a[s[i]-'a']++;
				else
						a[s[i]-'A']++;

		for( i=0 ; i<26 ; i++ )
				if( a[i]==0 )
				{
						printf("NO\n");
						return 0;
				}
		printf("YES\n");

		return 0;
}
