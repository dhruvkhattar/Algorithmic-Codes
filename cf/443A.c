#include<stdio.h>

int main()
{
		char a[1003];

		scanf("%[^\n]s",a);
		int z[26]={0};
		
		int i;
		int ans=0;
		for ( i=0 ; a[i]!='\0' ; i++ )
		{
				if( a[i]<='z' && a[i]>='a' && z[a[i]-'a']==0 )
				{
						ans++;
						z[a[i]-'a']++;
				}
		}

		printf("%d\n",ans);

		return 0;
}
