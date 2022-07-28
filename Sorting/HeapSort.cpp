/*Author: jean-pepe*/
#include <iostream>
using namespace std;

void makeHeap(int arr[], int n, int root){
    
    int largest = root;
    int l = 2 * root + 1;
    int r = 2 * root + 2;

    if (l < n && arr[l] > arr[largest])
        largest = l;

    if (r < n && arr[r] > arr[largest])
        largest = r;

    if (largest != root){
        swap(arr[root], arr[largest]);
        makeHeap(arr, n, largest);
    }
}

// implementing heap sort
void heapSort(int arr[], int n){
    for (int i = n / 2 - 1; i >= 0; i--)
        makeHeap(arr, n, i);

    for (int i = n - 1; i >= 0; i--){
        swap(arr[0], arr[i]);
        makeHeap(arr, i, 0);
    }
}

int main()
{
    int array[30],sizeArray;
    cout << "Enter size of array : ";
    cin >> sizeArray;

    cout << "elements to be sorted : ";
    for (int i = 0; i < sizeArray; i++)
        cin >> array[i];

    heapSort(array, sizeArray);

    cout << "Sorted Array: ";
    for (int i = 0; i < sizeArray; i++)
        cout << array[i] << " ";

    return 0;
}