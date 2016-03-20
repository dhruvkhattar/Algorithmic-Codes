#include<stdio.h>

int main()
{
		int t;
		scanf("%d",&t);

		while(t--)
		{
				char a[105];
				scanf("%s",a);

				int win=0;
				int lose=0;
				int flag=0;
				int i;
				for( i=0 ; a[i]!='\0' ; i++ )
				{
						if(a[i]=='1')
								win++;
						else if(a[i]=='0') 
								lose++;

						if(win==11 && lose<10)
						{
								printf("WIN\n");
								break;
						}
						else if(lose==11 && win<10)
						{
								printf("LOSE\n");
								break;
						}
						else if( win>=10 && lose>=10)
						{
								if(win-lose>=2)
								{
										printf("WIN\n");
										break;
								}
								else if(lose-win>=2)
								{
										printf("LOSE\n");
										break;
								}

						}
				}
		}

		return 0;
}
