#include <iostream>
using namespace std;

int getSum(int arr[], int size){
    
    int sum =0;

    if(size==0)
    return sum;

    sum+=arr[0];

   
    return  sum+=getSum(arr+1, size-1);
    
    
}

int main()
{
    int arr[] = {1, 2, 3, 5, 6, 7};
    int size = 6;

    cout << "The sum is " << getSum(arr,size) << endl;
    return 0;
}