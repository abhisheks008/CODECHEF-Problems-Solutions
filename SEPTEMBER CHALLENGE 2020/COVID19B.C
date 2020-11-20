#include<stdio.h>
#include<string.h>
#define ll long long int
ll find_infected(ll i,ll v[],ll n,ll infected[],float mytm[]){

ll answer=1;
   ll temp=1;
    for(ll j=0;j<n;j++){
        if (v[j]==v[i] || j==i){
        }else{
       float tm=(float)(i-j)/(float)(v[j]-v[i]);
        if(tm>=mytm[i] && infected[j]==0){
            temp+=1;
            infected[j]=1;
            mytm[j]=tm;
            answer+=find_infected(j,v,n,infected,mytm);
        }
        }
    }
    return answer;
}

int main(){
ll t;
scanf("%lld",&t);
while(t--){
   ll minimm=100000000000;
   ll maximm=-1000000000000;
   ll n;
   scanf("%lld",&n);
   ll v[n];
    for(ll i=0;i<n;i++){
        scanf("%lld",&v[i]);
    }
    ll infected[n+1];
    float mytm[n+1];
    for(ll i=0;i<n;i++){
      

   memset(infected,0,sizeof(infected));
   memset(mytm,0,sizeof(mytm));
    //float mytm[n+1]={0};
        infected[i]=1;
        ll res=find_infected(i,v,n,infected,mytm);
        if (minimm >res){
            minimm=res;
        }
        if(res>maximm)
        maximm=res;
    }
            printf("%lld %lld\n",minimm,maximm);

    
    }
    return 0;
}
