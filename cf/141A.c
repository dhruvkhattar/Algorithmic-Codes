#include<stdio.h>

int main()
{

		char a[102];
		char b[102];
		char c[102];

		scanf("%s",a);
		scanf("%s",b);
		scanf("%s",c);
		
		int count[27]={0};
		
		int i;
		for( i=0 ; a[i]!='\0' ; i++ )
				count[a[i]-'A']++;

		for( i=0 ; b[i]!='\0' ; i++ )
				count[b[i]-'A']++;

		for( i=0 ; c[i]!='\0' ; i++ )
				count[c[i]-'A']--;

		for( i=0 ; i<26 ; i++ )
				if( count[i]!=0 )
				{
						printf("NO\n");
						return 0;
				}

		printf("YES\n");
		return 0;
}
