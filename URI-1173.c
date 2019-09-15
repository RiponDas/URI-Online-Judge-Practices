#include<stdio.h>
int main()
{
    int n[10],i,a;
    scanf("%d",&a);
    n[0]=a;
    for(i=0;i<10;i++){
        printf("N[%d] = %d\n",i,n[i]);
        n[i+1]=2*n[i];
    }
    return 0;
}
