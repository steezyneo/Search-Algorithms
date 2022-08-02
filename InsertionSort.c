#include<stdio.h>
void insertinsort(int a[], int size);
void main(){
	int n, a[10], i;
	printf("Enter the size of array: ");
	scanf("%d", &n);
	printf("Enter the %d elements:\n", n);
	for(i=0; i<n; i++)
	scanf("%d", &a[i]);
	printf("\nBefore sorting, the elementrs are: \n");
	for(i=0; i<n; i++)
	printf("%4d", a[i]);
	printf("\n");
	insertinsort(a, n);
	printf("\n\nAfter sorting, the elementrs are: \n");
	for(i=0; i<n; i++)
	printf("%4d", a[i]);
}
void insertinsort(int a[], int n){
	int i, j, temp;
	for(i=0; i<n; i++){
		temp = a[i];
		for(j=i-1; (j>=0) && (temp<=a[j]); j--)
		a[j+1] = a[j];
		a[j+1] = temp;
	}
}
