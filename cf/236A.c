#include<stdio.h>

int b[27];

int main()
{
		char a[102];

		scanf("%s",a);
		
		int i;
		int ans=0;

		for( i=0 ; a[i]!='\0' ; i++ )
		{
				if( b[a[i]-'a'] == 0 )
				{
						b[a[i]-'a']=1;
						ans++;
				}
		}
		if( ans%2 == 0)
				printf("CHAT WITH HER!\n");
		else
				printf("IGNORE HIM!\n");


		return 0;
}
