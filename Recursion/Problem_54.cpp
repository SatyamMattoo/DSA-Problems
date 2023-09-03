// Merge Sort

#include <iostream>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;

    int len1 = mid - s + 1;
      int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copying values
    int mainArrayIndex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }

    // merge two sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])        
            arr[mainArrayIndex++]=first[index1++];

        else
        arr[mainArrayIndex++]=second[index2++];
    }

    //if first array is longer
    while(index1<len1)
    {
        arr[mainArrayIndex++]=first[index1++];
    }

    //if second array is longer
    while(index2<len2)
    {
        arr[mainArrayIndex++]=second[index2++];
    }

    delete []first;
    delete []second;
    
}

void mergeSort(int *arr, int s, int e)
{
    if (s >= e)
        return;

    int mid = s + (e - s) / 2;

    // left part sort krna
    mergeSort(arr, s, mid);

    // right part sort krna
    mergeSort(arr, mid + 1, e);

    // merge two sorted arrays
    merge(arr, s, e);
}

int main()
{
    int arr[] = {12, 23, 13, 35, 16, 27};
    int size = 6;

    mergeSort(arr, 0, size - 1);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}