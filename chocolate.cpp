#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
   int currency = 15;
   int total_chocolate=0;
   int rest_wrapper=0;
   while (currency>0)
   {
        int chocolate=currency;
        total_chocolate+=chocolate;
        int wrapper = chocolate;
        wrapper+=rest_wrapper;
        rest_wrapper=wrapper%3;
        currency=wrapper/3;
   }
   cout<<total_chocolate<<endl;
    
    return 0;
}
