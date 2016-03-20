#include<stdio.h>
#include<string.h>

int main()
{
		char s[100005];
		scanf("%s",s);
		int q;
		scanf("%d",&q);
		int len=strlen(s);
		while(q--)
		{
				int i,j,k,l;
				scanf("%d%d%d%d",&i,&j,&k,&l);
				int t;
				i--;j--;k--;l--;
				char temp[100005];
				char temp2[100005];
				int yo=0;
				int t2=l;
				for(t=k;t<=l;t++)
				{
						int lol=t;
						int lol2=t2;
						if(t<=j && t>=i)
								lol=j-t+i;
						if(t2<=j && t2>=i)
								lol2=j-t2+i;
						temp[yo]=s[lol];
						temp2[yo]=s[lol2];
						yo++;
						t2--;
				}

				temp[yo]='\0';
				temp2[yo]='\0';
			//	printf("temp=%s\n",temp);
			//	printf("temp2=%s\n",temp2);
				if(strcmp(temp,temp2)==0)
						printf("Yes\n");
				else
						printf("No\n");


		}

		return 0;
}
