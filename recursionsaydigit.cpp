#include<bits/stdc++.h>
using namespace std;

string saydigit(int n,string arr[])
{
    //base case
    if(n==0)
    {
        return;
    }

    //processing

    int digit=n%10;
    n=n/10;

    //recursive call
    saydigit(n,arr);
    cout<<arr[digit]<<" ";

}

int main()
{
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};

    int n;
    cin>>n;

   string ret= saydigit(n,arr);
   cout<<ret<<endl;

    return 0;
}