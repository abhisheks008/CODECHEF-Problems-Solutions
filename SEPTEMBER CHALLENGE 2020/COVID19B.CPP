#include<bits/stdc++.h>

using namespace std;

int main()

{

  long long int tt;

  cin>>tt;

  while(tt--)

  {

    

    long long int n,best,worst;

    cin>>n;

    best=n,worst=1;

    long long int dan[n];

    for(long long int i=0;i<n;i++)  

     cin>>dan[i]; 

    for(long long int i=0;i<n;i++)

     {

          vector<long long int>veri(n,0);

           veri[i]=1;

           

         for(long long int j=0;j<i;j++)

              {

                if(dan[j]>dan[i])

                  veri[j]=1;

        } 

           for(long long int j=i+1;j<n;j++)

             {

               if(dan[j]<dan[i])

                   veri[j]=1;

         }

      for(long long int s=0;s<i;s++)

      {

        if(veri[s]==1)

           {

              for(long long int p=i;p<n;p++)

                    {

                     if(dan[p]<dan[s])

                        veri[p]=1;

              }

           }

         }

          for(long long int p=i+1;p<n;p++)

           {

        if(veri[p]==1)

        {

          for(long long int ah=0;ah<i;ah++)

          {

                

               if(dan[p]<dan[ah])

                    veri[ah]=1;

            

          }

        }

      

      }

       

           long long int ll=count(veri.begin(),veri.end(),1);

             worst=max(ll,worst);

              best=min(ll,best);

           }

         

         cout<<best<<" "<<worst<<endl;

     }

}
