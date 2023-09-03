// Book Allocation Problem and Painter's Partition Problem

#include <iostream>
using namespace std;

bool possibleSoln(int arr[], int k, int mid)
{
    int sum = 0;
    int painter = 1;

    for (int i = 0; i < 4; i++)
    {
        if (sum + arr[i] <= mid)
        {
            sum += arr[i];
        }
        else
        {
            painter++;
            if (painter > k || arr[i] > mid)
                return false;
            sum = arr[i];
        }
        if (painter > k)
            return false;
    }
    return true;
}

int main()
{
    int arr[] = {10, 20, 30, 40};
    int k = 2;

    int s = 0;
    int sum = 0;
    for (int i = 0; i < 4; i++)
        sum += arr[i];

    int e = sum;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (possibleSoln(arr, k, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    cout << "the ans is " << ans << endl;

    return 0;
}