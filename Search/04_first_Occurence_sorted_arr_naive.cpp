#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int x)
{
    for(int i = 0; i < n; i++)
        if(arr[i] == x)
            return i;

    return -1;
}


int main()
{

    int arr[] = {10,10,15,20,20,20,20,20,30,40,50,60};
    int n = 12, x=20;

    cout<<firstOcc(arr,n,x);
    cout<<"\n";

    return 0;
}
