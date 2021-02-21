#include <bits/stdc++.h>
using namespace std;

bool isPresent(int arr[], int n, int sum)
{
    int l = 0, h = n-1;
    int mid;
    while(l <= h)
    {
        if(arr[l] + arr[h] == sum)
	  {cout<<"Pair is defined with ("<<arr[l]<<","<<arr[h]<<")"<<endl;
           return true;}
        else if(arr[l] + arr[h] > sum)
             h--;
        else l++;
    }
    return false;
}

int main()
{
    int arr[] = {2, 3, 7, 8, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 15;
    
    cout << isPresent(arr, n, sum);
}
