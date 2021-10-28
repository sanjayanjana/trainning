#include<stdio.h>
int fun(int i,int j)
{
	return i++ * --j;
}
	int main()
	{
		int result=8,loop= -3;
		clrscr();
		while(loop++)
		{
		   result=result+fun(loop,loop);
		}
		printf("%d",result);
		return 0;
	}