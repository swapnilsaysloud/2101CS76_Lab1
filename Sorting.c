#include <math.h>
#include <stdio.h>
/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int n)

{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n - 1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        // Swap the found minimum element with the first element
        swap(&arr[min_idx], &arr[i]);
    }
}
// A function to print an array of size n
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main()
{
    int n, num, i;
    printf("Enter the number of elements in array:\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Input: 1 for Insertion sort \n 2 for Selection sort \n 3 for Bubble Sort \n 4 for Merge Sort \n 5 for Quick Sort.\n ");
    scanf("%d", &num);
    switch (num)
    {
    case 1: // For insertion sort
        insertionSort(arr, n);
        printf("Sorted array: \n");
        printArray(arr, n);
        break;
    case 2: // For selection sort
        selectionSort(arr, n);
        printf("Sorted array: \n");
        printArray(arr, n);
        break;
    }
    return 0;
}
