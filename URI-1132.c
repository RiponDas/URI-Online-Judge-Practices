#include<stdio.h>
int main()
{
    int a,b,i,tmp;
    long int sum=0;
    scanf("%d%d",&a,&b);
    if(a>b){
        tmp=a;
        a=b;
        b=tmp;
    }
    for(i=a;i<=b;i++){
        if(i%13!=0){
            sum=sum+i;
        }
    }
    printf("%ld\n",sum);
    return 0;
}
