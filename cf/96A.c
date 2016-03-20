#include<stdio.h>
#include<string.h>

int main()
{
		char a[105];
		scanf("%s",a);

		int len = strlen(a);
		
		int count=1;
		int temp=2;
		int i;

		for( i=0 ; i<len ; i++ )
		{
				if( a[i]==temp )
						count++;
				else
						count=1;
				if( count>=7 )
				{
						printf("YES\n");
						return 0;
				}
				temp=a[i];
		}

		printf("NO\n");

		return 0;
}
