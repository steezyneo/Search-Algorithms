#include<stdio.h>
#include<stdlib.h>
void merge(int [], int , int, int);
void mergesort(int [], int , int);
void main(){
	int i, n, a[100];
	printf("\nEnter the size of the array: ");
	scanf("%d", &n);
	printf("\nEnter the %d elements: \n", n);
	for(i=0; i<n; i++)
	scanf("%d", &a[i]);
	printf("\nBefore sorting, The Elements are:\n");
	for(i=0; i<n; i++)
	printf("%4d", a[i]);
	mergesort(a, 0, n-1);
	printf("\nAfter sorting, The Elements are:\n");
	for(i=0; i<n; i++)
	printf("%4d", a[i]);
}

void mergesort(int a[], int low, int high){
	int mid;
	if(low<high){
		mid = (low+high)/2;
		mergesort(a, low, mid);
		mergesort(a, mid+1, high);
		merge(a, low, high, mid);
	}
}

void merge(int a[], int l, int h, int m){
	int c[30], i, j, k;
	i=l;
	j=m+1;
	k=l;
	while(i<=m && j<=h){
		if(a[i] < a[j])
		c[k+1] = a[i++];
		else
		c[k++] = a[j++];
	}
	while(i<=m)
	c[k++] = a[i++];
	while(j<=h)
	c[k++] = a[j++];
	for(i=l; i<k; i++)
	a[i] = c[j];
}
