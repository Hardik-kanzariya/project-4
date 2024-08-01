/*  Project-4	Q.5 Develop a program that prints the given Full Pyramid pattern using a nested for loop.

        5
      4 5 4
    3 4 5 4 3
  3 3 4 5 4 3 2
1 2 3 4 5 4 3 2 1

*/

#include<stdio.h>

main()
{
	int i,j,h;
	
	for(i=5;i>=1;i--)
	{
		for(h=i;h>1;h--)
		{
			printf(" ",h);
		}
		
		for(j=i;j<=5;j++)
		{
			printf("%d",j);
		}
		
		for(j=4;j>=i;j--)
		{
			printf("%d",j);
		}
		
	  printf("\n");
	  	
	}
}