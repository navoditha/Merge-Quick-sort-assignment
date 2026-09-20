#include <stdio.h>
int partitionCount = 0;
void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}
int partition(int a[], int low, int high, int n)
{
    int pivot = a[high];
    int i = low - 1;
    for (int j = low; j < high; j++)
    {
        if (a[j] < pivot)
        {
            i++;
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    int temp = a[i + 1];
    a[i + 1] = a[high];
    a[high] = temp;
    partitionCount++;
    printf("Partition %d: Pivot = %d -> ", partitionCount, pivot);
    printArray(a, n);
    return i + 1;
}
void quickSort(int a[], int low, int high, int n)
{
    if (low < high)
    {
        int p = partition(a, low, high, n);
        quickSort(a, low, p - 1, n);
        quickSort(a, p + 1, high, n);
    }
}
int main()
{
    int a[] = {324, 125, 456, 218, 102, 389, 275, 147};
    int n = 8;
    printf("Initial Array: ");
    printArray(a, n);
    quickSort(a, 0, n - 1, n);
    printf("\nSorted Array: ");
    printArray(a, n);
    return 0;
}
