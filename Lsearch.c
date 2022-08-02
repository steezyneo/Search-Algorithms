#include<stdio.h>
int lsearch(int[], int, int);
void main(){
	int a[10], key, i, n, pos;
	printf("Input number of elements in array\n");
	scanf("%d", &n);
	printf("Input %d numbers\n", n);
	for(i=0; i<n; i++)
	scanf("%d", &a[i]);
	printf("Input number to search\n");
	scanf("%d", &key);
	if(pos == -1)
	printf("%d is not present in array\n", key);
	else
	printf("%d is present at location %d\n",key, pos+1);
}

int lsearch(int a[], int n, int find){
	int i;
	for(i=0; i<n; i++){
		if(a[i] == find)
		return i;
	}
	return -1;
}
