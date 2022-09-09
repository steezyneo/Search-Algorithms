#include<stdio.h>
void main(){
	int a[10], target, found = 0, n, i;
	
	printf("Enter number of elements: ");
	scanf("%d", &n);
	printf("Enter elements in array: ");
	for(i=0; i<n; i++)
	scanf("%d", &a[i]);
	printf("Enter an element to be searched: ");
	scanf("%d", &target);
	
	for(i=0; i<n; i++){
		if(target == a[i]){
			printf("Element was found at index = %d", i);
			found = 1;
			break;
		}
	}
	if(!found)
		printf("Not found");
}
