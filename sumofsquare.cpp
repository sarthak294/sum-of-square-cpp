#include<iostream>
using namespace std;
int main()
{
    int n,sq=0;
    cout<<"Enter n ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sq=sq+(i*i);
        cout<<(i*i)<<"+";
    }
    cout<<"\b="<<sq;
}
