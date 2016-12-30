#include<stdio.h>
#include<stdlib.h>

long long int count=0;

long long int bubblesort(long int *a,long int n)
	{
	long int i,j,temp;
	count=0;
	for(i=0;i<n;i++)
		{	
		for(j=(n);j>=i+1;j--)
			{
			count++;
			if(a[j] < a[j-1])
				{
				temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
				}
			}
		}
	return count;
	}

long long int insertionsort(long int *a,long int n)
	{
	long int i,j,key;
	count=0;
	for(j=1;j<n;j++)
		{
		key=a[j];
		i=(j-1);
		while((i>=0) && (a[i]>key) && (count++))
			{
			a[i+1]=a[i];
			i=i-1;
			a[i+1]=key;
			}
		}
	return count;
	}


long long int merge(long int *a,long int p, long int q, long int r)
	{	
	long int n1,n2,i,j,k;
	n1=q-p+1;
	n2=r-q;
	long int L[n1+1],R[n2+1];
	for(i=0;i<n1;i++)
		{
		L[i]=a[p+i-1];
		}
	for(j=0;j<n2;j++)
		{
		R[j]=a[q+j];
		}
	i=0;
	j=0;
	for(k=p;k<=r;k++)
		{
		count++;
		if(L[i]<R[j])
			{
			a[k]=L[i];
			i++;
			}
		else
			{
			a[k]=R[j];
			j++;
			}
		}	
	return count;
	}

long long int mergesort(long int *a,long int p,long int r)
	{
	long long int q;
	if(p<r)
		{
		count++;
		q=((p+r)/2);
		mergesort(a,p,q);
		mergesort(a,q+1,r);
		merge(a,p,q,r);
		}
	return count;
	}

long long int partition(long int *a,long int p, long int r)
	{
	long int x,i,j,temp;
	x=a[r];
	i=p-1;
	for(j=p;j<=(r-1);j++)
		{	
		count++;
		if(a[j]<=x)
			{
			i++;
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			}
		}
	temp=a[i+1];
	a[i+1]=a[r];
	a[r]=temp;
	return i+1;
	}

long long int quicksort(long int *a,long int p,long int r)
	{	
	long long int q;	
	if(p<r)
		{
		count++;	
		q=partition(a,p,r);
		quicksort(a,p,q-1);
		quicksort(a,q+1,r);
		}
	return count;
	}



long long int selectionsort(long int *a,long int n)
	{
	long long int i,j,x,min,minp,temp;
	count=0;
	for(i=0;i<(n-1);i++)
		{
		for(j=(i+1);j<n;j++)
			{
			min=a[i];
			minp=i;
			count++;
			if(a[j]<min)
				{
				min=a[j];
				minp=j;
				}
			}
		temp=a[i];
		a[i]=a[minp];
		a[minp]=temp;	
		}
	return count;
	}



















