#include<stdio.h>

int main()
{
		int x1,x2,y1,y2;
		scanf("%d%d%d%d",&x1,&y1,&x2,&y2);

		int tx,ty;

		tx=x2-x1;
		ty=y2-y1;

		if( tx==ty || tx==-ty)
				printf("%d %d %d %d\n",x1,y2,x2,y1);				
		else if( tx==0 )
				printf("%d %d %d %d\n",x1+y2-y1,y1,x2+y2-y1,y2);				
		else if( ty==0 )
				printf("%d %d %d %d\n",x1,y1+x2-x1,x2,y2+x2-x1);				
		else
				printf("-1\n");

		return 0;
}
