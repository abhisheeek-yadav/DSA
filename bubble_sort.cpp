#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n=6;
    int arr[n]={12,45,23,51,19,8};
    for (int i = 0; i < n-1; i++)
    {
        for (int  j = 1; j < n-i; j++)
        {
            if (arr[j]<arr[i])
            {
                int temp = arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}
