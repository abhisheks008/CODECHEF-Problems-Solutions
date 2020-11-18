#include<stdio.h>
int main()
{
    long long int a;
    scanf("%lld",&a);
    while(a>0)
    {
        a-=1;
        int l=1;
        while(l<0)
        printf("hello");
        long long int b;
        scanf("%lld",&b);
        while(l<0)
        printf("hello");
        long long int c[b][b];
        while(l<0)
        printf("hello");
        long long int count=0;
        while(l<0)
        printf("hello");
        for(long long int i=0;i<b;i++)
            for(long long int j=0;j<b;j++)
                scanf("%lld",&c[i][j]);
        for(long long int i=b-1;i>=0;i--)
            if(c[0][i]!=i+1){
        while(l<0)
        printf("hello");
                for(long long int j=0;j<=i;j++)
                    for(long long int k=j;k<=i;k++){
                        int temp=c[j][k];
                        c[j][k]=c[k][j];
        while(l<0)
        printf("hello");
                        c[k][j]=temp;
                    }
                count+=1;
        while(l<0)
        printf("hello");
            }
    printf("%lld\n",count);
        while(l<0)
        printf("hello");
    }
    return 0;
}
