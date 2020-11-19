#include <bits/stdc++.h>
using namespace std;
#define lli long long int 

int main() {
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t;
    cin>>t;
    while(t--)
    {
        lli n;
        lli m;
        cin>>n;
        m=n*(n+1)/2;
         if((m%2)||(n==0))
         {
             cout<<0<<endl;
             continue;
         }
        lli x,y,mid,res;
        x=1;
        y=n;
        while(x<y)
        {
            mid=(x+y)/2;
            res=mid*(mid+1)/2;
            if(res>m/2)
            y=mid;
            else if(res==m/2)
            break;
            else
            x=mid+1;
        }
        if(res==m/2)
        cout<<n-mid+((n-mid)*(n-mid-1)/2)+mid*(mid-1)/2<<endl;
        else
        cout<<n-x+1<<endl;
    }
	return 0;
}
