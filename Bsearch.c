#include<stdio.h>
void main(){
	int target, low=0, mid, high, a[10], i, found = 0, n;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	printf("Enter elements in ascending order: ");
	for(i=0; i<n; i++)
	scanf("%d", &a[i]);
	printf("Enter an element to be searched: ");
	scanf("%d", &target);
	high = n-1;
	while(low<=high){
		mid = (low+high)/2;
		if(target < a[mid])
			high = mid-1;
		else if(target > a[mid])
			low = mid+1;
		else{
			printf("%d found at index = %d", target, i);
			found = 1;
			break;
		}
	}
	if(!found)
		printf("%d is not found", target);
}
