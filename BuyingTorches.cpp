#include<bits/stdc++.h>
#define ll long long
using namespace std;
int64_t ceil_div(int64_t a,int64_t b)
{
    return (a+b-1)/b;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int64_t n,y,k;
        cin>>n>>y>>k;
        int64_t s=(y*k)+k-1;
        int64_t first_trade=ceil_div(s,n-1);
        int64_t second_trade=first_trade+k;
        cout<<second_trade<<endl;
    }
}
