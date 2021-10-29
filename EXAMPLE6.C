 #include<stdio.h>
 int main()

 {
	int num=5;
	int i=63;
	while(i>num)
	   {
	    switch(num%9)

	     {

	     case0:
	     num=num+4;

	     case 1:
	     num=num+8;

	     case 2:
	     num=num+9;

	     case3:
	     num=num+6;

	   default:

	     num=num/10;

	     }

	     i--;
	}

	printf("%d%d",num,i);
	return 0;
 }