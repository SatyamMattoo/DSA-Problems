// Inversion count

#include <iostream>
using namespace std;

int inversion(int arr[], int size)
{
    int count =0;

    for(int i=0;i<size;i++){
        for (int j=i+1;j<size;j++){
            if(arr[j]<arr[i])
            count++;
        }
    }
    return count;
    
}

int main()
{
    int arr[] = {1, 20, 6, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Size of array is " << size << endl;

    int count = inversion(arr, size);

    cout << "The inversion count for this array is " << count << endl;

    return 0;
}