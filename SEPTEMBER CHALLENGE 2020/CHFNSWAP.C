#include <stdio.h>
#include <math.h>
#define ll long long int
void fun(int a,int b)
{
    ll arr[100];
    ll df[1000];
    ll gh[10000];
    ll hi[1000];
    for(int i=0;i<100;i++)
    {
        arr[i]=i;
    }
    for(int i=0;i<100;i++)
    {
        arr[i]+=10;
    }
    //sort(arr,arr+100)
}
void fun2(int a,int b)
{
    ll arr[100];
    ll dfo[1000];
    ll ghu[10000];
    for(int i=0;i<100;i++)
    {
        arr[i]=i;
    }
    for(int i=0;i<100;i++)
    {
        arr[i]+=10;
    }
    //sort(arr,arr+100)
}
ll findpoint(ll s){
    ll k=(1+4*s);
    k=sqrt(k);
    k=(k-1)/2;
    return k;
    
}
int main() {
 ll t,n,i,j,k,a,b,c,ans;
 ll temp[1000],khty[100000];
 for(i=0;i<1000;i++);
 ll arro[100000];
 fun(1,2);
 fun2(1,2);
 scanf("%lld",&t);
 while(t--)
 {
     ans=0;
     scanf("%lld",&n);
     ll sm=n*(n+1)/2;
     if(sm%2)
     {
         printf("0\n");
         continue;
     }
     else
     {
         
         ll pt=findpoint(sm);
         ll ls=pt*(pt+1)/2;
         if(ls==sm/2)
         {
             ans+=pt*(pt-1)/2;
             ans+=(n-pt)*(n-pt-1)/2;
             ans+=n-pt;
             
         }
         else
         {
             ans+=n-pt;
         }
     }
     printf("%lld\n",ans);
     
 }
 fun(1,2);
 fun2(1,2);
 return 0;
}
