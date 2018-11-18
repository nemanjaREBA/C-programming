#include<stdio.h>
#include"headers/sortalgs.h"

void bubbleSort(int arr[], int arrLength)
{
	int i,j;
	int temp;
	
	for(i = 0; i < arrLength - 1; i++)
	{
		for(j = 0; j < arrLength - i - 1; j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

