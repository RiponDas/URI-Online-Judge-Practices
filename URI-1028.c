#include<stdio.h>
int main()
{
    int t,a,b,i,j,count;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d %d", &a, &b);
        if(a>b){
            count=a;
            a=b;
            b=count;
        }
            for(j=2;j<=a;j++){
                if(a%j==0 && b%j==0){
                count=0;
                count=count+j;
                }
            }
        printf("%d\n",count);
    }
    return 0;
}
