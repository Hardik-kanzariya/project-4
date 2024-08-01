
/* Project-4  Q.2 Develop a program that prints the given Floyd’s triangle pattern using a nested for loop.

11
12 13
14 15 16
17 18 19 20

*/

#include<stdio.h>

main()
{
	int i,j,h=11;
	
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",h);
				h++;
		}
		
		printf("\n");
		
	}
}
