/*Author: jean-pepe*/
#include <iostream>
using namespace std;

void merge(int*, int, int, int);
void merge_sort(int* arr, int low, int high){
    int mid;
    if (low < high) {
        //divide the array at mid and sort independently using merge sort
        mid = (low + high) / 2;
        merge_sort(arr, low, mid);
        merge_sort(arr, mid + 1, high);
        //merge or conquer sorted arrays
        merge(arr, low, high, mid);
    }
}
// Merge sort 
void merge(int* array, int low, int high, int mid){
    int i, j, k, c[30];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high) {
        if (array[i] < array[j]) {
            c[k] = array[i];
            k++;
            i++;
        }
        else {
            c[k] = array[j];
            k++;
            j++;
        }
    }
    while (i <= mid) {
        c[k] = array[i];
        k++;
        i++;
    }
    while (j <= high) {
        c[k] = array[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++)
        array[i] = c[i];
}

int main()
{
    int array[30],sizeArray;

    cout << "Enter size of array : ";
    cin >> sizeArray;

    cout << "elements to be sorted : ";
    for (int i = 0; i < sizeArray; i++)
        cin >> array[i];

    merge_sort(array, 0, sizeArray - 1);

    cout << "Sorted Array: ";
    for (int i = 0; i < sizeArray; i++)
        cout << array[i] << " ";

    return 0;
}
