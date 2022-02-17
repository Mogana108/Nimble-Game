#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t,i,j,n,ans;
    long int a[200];
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        for(j=0;j<n;j++){
            scanf("%ld",&a[j]);
        }
        ans = 0;
        for(j=1;j<n;j++){
            if(a[j]%2!=0){
                ans = ans^j;
            }
        }
        if(ans ==0){
            printf("Second\n");
        }
        else{
            printf("First\n");
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
