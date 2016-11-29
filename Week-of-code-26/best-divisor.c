#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int sod(int n)
{
    int sum=0;
    while(n){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main(){
    int n,i; 
    scanf("%d",&n);
    int S=sod(n);
    int ans=n;
    for(i=n/2;i>=1;i--)
    {
        if(n%i==0)
                if(S<=sod(i))
                {
                    ans=i;
                    S=sod(ans);
                }
    }
    printf("%d",ans);
    return 0;
}
