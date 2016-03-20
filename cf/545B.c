#include<stdio.h>

char a[100005];
char b[100005];

int main()
{
		scanf("%s",a);
		scanf("%s",b);
		
		int i=0;
		int count=0;
		while(a[i]!='\0')
		{
				if( a[i]!=b[i] )
						count++;
				i++;
		}

		if(count%2!=0)
		{
				printf("impossible\n");
		}
		else
		{
				int i=0;
				int j=0;
				while(i<count/2)
				{
						if(a[j]!=b[j])
						{
								a[j]='1'+'0'-a[j];
								i++;
						}
						j++;
				}
				printf("%s\n",a);
		}
		return 0;
}
