#include <stdio.h>

// Consider running Bubble Sort on the array shown below. 
// Write a c program to compute the number of swaps needed for each index in the array. 
// 97  16  45  63  13  22  7  58  72

// Samar Bailey
// in main create the array and call bubbleSort
// in bubbleSort for each interation display the amount of swaps

// function that prints the array
void printArray(int arr[], int s)
{
    for (int i = 0; i < s; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// function that takes the given parameters and swaps them
void swap (int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}


void bubbleSort (int arr[],int s)
{
    int a, b; // creating the variables to be used in the function
    for (a = 0; a < s - 1; a ++ ) // runs the same amount of times as there are elements in the array
    {
        int num_swaps = 0; // declaring the swaps here so it restarts to zero once an interation is completed
        printf("\nStarting Iteration %d:\n", a+1);
        for (b = 0; b < s - a - 1; b++)
        {
            
            if (arr[b] > arr[b + 1])
            {
                swap(&arr[b], &arr[b+1]); // swaping the variables if the condition is true
                num_swaps++; // incrementing the number of swaps if there was a swap made
            }

        }
        printArray (arr, s); // displaying the array to see what swaps were made
        printf("During Iteration %d, there were %d swaps.\n", a+1, num_swaps); // stating how many swaps were made
    }
}

int main ()
{ 
    // the set given
    int bubbleArray[9] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int arraySize = 9;

    printf("\n");
    printf("The non-sorted array: \n");
    printArray (bubbleArray, arraySize);
    // calling bubbleSort
    bubbleSort(bubbleArray, arraySize); 
    // printing the sorted list;
    printf("\nThe bubbly sorted array: \n");
    printArray (bubbleArray, arraySize);
    printf("\n");
    return 0;
}