#include<stdio.h>
#include"headers/arrays.h"
#include"headers/sortalgs.h"

int main()
{
	int array[50], arrayLength;
	printf("Enter array size: ");
	scanf("%d", &arrayLength);
	
	printf("Enter %d elements: \n", arrayLength);
	readArrayElements(array, arrayLength);
	
	bubbleSort(array, arrayLength);
	
	printf("Sorted elements of the array are: \n");
	printArrayElements(array, arrayLength);
	
	return 0;
}
