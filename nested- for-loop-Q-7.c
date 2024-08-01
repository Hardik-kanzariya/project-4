#include<stdio.h>
/*
* * * * *
*       *
* * * * *
*
*
*/
main()
{
	int h,k;
	
	for(h=1;h<=5;h++)
	{
		for(k=1;k<=5;k++)
		{
			if(k==1|h==1|h==3|h==2&k==5)
			{
				printf("* ");
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
	}
}