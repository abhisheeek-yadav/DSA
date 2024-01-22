#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter Matrix Size - ";
    cin>>n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
           cin >> arr[i][j];
        }
        
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout<<arr[i][j];
    //     }
    //     cout<<endl;
        
    // }
    
    int diagonal1 = 0;
    for (int i = 0; i < n; i++)
    {
        diagonal1+=arr[i][i];
    }
    // cout<<diagonal1<<endl;


    int diagonal2 = 0;
    for (int i = 0; i < n; i++)
    {
        diagonal2+=arr[i][n-1-i];
    }
    // cout<<diagonal2;
    

    cout<<"Difference = "<<diagonal1-diagonal2<<endl;
    
    return 0;
}


