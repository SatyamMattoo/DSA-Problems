#include <iostream>
using namespace std;
 
int main()
{
    int arr[]={4, 5, 6, 6, 1, 2, 3};  
    int n=7;
    int count=0;

    for (int i = 1; i < 7; i++)
    {
        if (arr[i-1]>arr[i]){
            count++;
        }
    }
    if(arr[n-1]>arr[0]){
        count ++;
    }
    
    if(count<=1){
        cout << "Array is sorted and rotated" << endl;
    }
    else{
        cout << "Array is not sorted and rotated" << endl;
    }


    
return 0;
}