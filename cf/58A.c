#include<stdio.h>
#include<string.h>

int main()
{
		char a[102];
		scanf("%s",a);
		int len=strlen(a);
		int count=0;
		int i;
		for( i=0 ; i<len ; i++ )
		{
				if( count==0 && a[i]=='h')
						count++;
				else if( count==1 && a[i]=='e')
						count++;
				else if( count==2 && a[i]=='l')
						count++;
				else if( count==3 && a[i]=='l')
						count++;
				else if( count==4 && a[i]=='o')
						count++;
		}

		if( count==5 )
				printf("YES\n");
		else
				printf("NO\n");

		return 0;
}
