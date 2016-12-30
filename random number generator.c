#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	long int i,x;
	srand(time(NULL));
	for(i=0;i<=1000000;i++)
	{
		x=rand()%1000007;
		printf("%ld\n",x);
	}
	return 0;
}	
