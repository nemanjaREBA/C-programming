#include<stdio.h>
#include"headers/arrays.h"/* treba / a ne \*/

void readArrayElements(int arr[], int arrLength)
{
	int i;
	for(i = 0; i < arrLength; i++)
	{
		scanf("%d", &arr[i]);
	}
}

void printArrayElements(int arr[], int arrLength)
{
	int i;
	for(i = 0; i < arrLength; i++)
	{
		printf("%d\n",arr[i]);
	}
}


