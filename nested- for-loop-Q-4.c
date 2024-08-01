/* Project-4  Q.4 Develop a program that prints the given Inverted Left half triangle pattern using a nested for loop.

1 0 1 0 1
1 0 1 0
1 0 1
1 0
1
*/

#include<stdio.h>

main()
{
	int i,j,k;
	
	for(i=5;i>=1;i--)
	{
		for(k=5;k>=i;k--)
		{
			printf("  ");
		}
		
		for(j=1;j<=i;j++)
		{
			if(j%2==1)
			{
				printf(" 1");
			}
			else
			{
				printf(" 0");
			}
		}
		
		printf("\n");
	}
}