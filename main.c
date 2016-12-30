#include<stdio.h>
#include"algorithms.h"
#include<stdlib.h>

int main(int argc, char *argv[])
	{
	long long int count;
	long int i,x,*a,n,m;
	n=atoi(argv[2]);
	m=atoi(argv[1]);
	a=(long int *)malloc((n+10)*sizeof(long int));
	FILE* input = fopen("data","r");
	for(i=0;i<n;i++)
		{
		fscanf(input,"%ld", &a[i]);
		}	
	switch(m)
		{
		case 1 : count=bubblesort(a,n);break;
		case 2 : count=insertionsort(a,n);break;
		case 3 : count=mergesort(a,0,n-1);break;
		case 4 : count=quicksort(a,0,n-1);break;
		case 5 : count=selectionsort(a,n);break;
		}
	printf("%lld\n",count);
	return 0;
	}
