#include <iostream>
using namespace std;

// 🔹 Heapify function
void heapify(int arr[], int n, int i)
{
    int largest = i;        // assume root is largest
    int left = 2*i + 1;     // left child
    int right = 2*i + 2;    // right child

    // check left child
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // check right child
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // if root is not largest
    if (largest != i)
    {
        swap(arr[i], arr[largest]);   // fix
        heapify(arr, n, largest);     // recursive fix
    }
}

// 🔹 Heap Sort function
void heapSort(int arr[], int n)
{
    // Step 1: Build Max Heap
    for (int i = n/2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // Step 2: Extract elements one by one
    for (int i = n-1; i > 0; i--)
    {
        swap(arr[0], arr[i]);   // move max to end
        heapify(arr, i, 0);     // fix remaining heap
    }
}

// 🔹 Print function
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// 🔹 MAIN FUNCTION (VS CODE READY)
int main()
{
    int arr[] = {4, 10, 3, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array:\n";
    printArray(arr, n);

    heapSort(arr, n);

    cout << "Sorted array:\n";
    printArray(arr, n);

    return 0;
}