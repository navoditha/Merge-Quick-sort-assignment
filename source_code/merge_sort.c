#include <stdio.h>
int pass = 0;
void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}
void merge(int a[], int low, int mid, int high)
{
    int temp[100];
    int i = low, j = mid + 1, k = low;
    while (i <= mid && j <= high)
    {
        if (a[i] <= a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }
    while (i <= mid)
        temp[k++] = a[i++];
    while (j <= high)
        temp[k++] = a[j++];
    for (i = low; i <= high; i++)
        a[i] = temp[i];
}
void mergeSort(int a[], int low, int high, int n)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        mergeSort(a, low, mid, n);
        mergeSort(a, mid + 1, high, n);
        merge(a, low, mid, high);
        pass++;
        printf("Pass %d: ", pass);
        printArray(a, n);
    }
}
int main()
{
    int a[] = {324, 125, 456, 218, 102, 389, 275, 147};
    int n = 8;
    printf("Initial Array: ");
    printArray(a, n);
    mergeSort(a, 0, n - 1, n);
    printf("\nSorted Array: ");
    printArray(a, n);
    return 0;
}
