#include<stdio.h>
#include<math.h>
int main()
{
		int x;
		float y;
		scanf("%d %f",&x,&y);
		if((float)x>(y-0.5))
				printf("%.2f\n",y);
		else if(x%5!=0)
				printf("%.2f\n",y);
		else
				printf("%.2f\n",(y-0.5-(float)x));
		return 0;
}
