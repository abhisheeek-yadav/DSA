#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[5]={10,0,20,0,30};
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<"\n";
    }
    cout<<endl;
    for (int i:arr)
    {
        cout<<i<<"\n";
    }
    
    return 0;
}
