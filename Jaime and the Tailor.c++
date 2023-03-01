#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
int main()
{
    ll n,p; cin>>n >>p;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    //sorting the array
    sort(a,a+n);
    ll ans=0;
    ll prev=-1; // to store the previous used buttons
    for(ll i=0;i<n;i++) {
        int buttons = a[i]/p;
        if(buttons * p == a[i]) 
        {
            if(buttons <= prev) 
            {
                ans = ans + prev+1;
                prev++;
            }
            else
            {
                ans = ans + buttons;
                prev = buttons;
            }
        }
        else
        {
            buttons++;
            if(buttons <= prev)
            {
                ans = ans + prev+1;
                prev++;
            }
            else
            {
                ans = ans + buttons;
                prev = buttons;
            }
        }
    }
    cout<<ans<<endl;
}
