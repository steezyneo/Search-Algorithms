#include<stdio.h>
int bsearch(int a[], int low, int high, int key);
void main(){
	int a[5], key, pos, i, n;
	printf("Enter size of array: ");
	scanf("%d", &n);
	printf("Enter %d elements in ascending or descending order:\n", n);
	for(i=0; i<n; i++)
	scanf("%d", &a[i]);
	printf("Enter an element that is to be scanned: ");
	scanf("%d", &key);
	pos = bsearch(a, 0, n-1, key);
	if(pos == -1)
	printf("Sorry, target item was not found");
	else
	printf("\n Target item was found at index : %d", pos);
}

int bsearch(int a[], int low, int high, int key){
	int mid;
	while(low<=high){
		mid = (low+high)/2;
		if(key == a[mid])
		return mid;
		else if(key < a[mid])
		high = mid-1;
		else
		low = mid+1;
	}
	return -1;
}
