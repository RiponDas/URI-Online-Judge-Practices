#include<stdio.h>
int main()
{
    int n,i=1,j;
    scanf("%d",&n);
    for(;i<=n;i++){
                printf("%d %d %d\n",i,i*i,i*i*i);
                printf("%d %d %d\n",i,((i*i)+1),((i*i*i)+1));
    }
    return 0;
}
