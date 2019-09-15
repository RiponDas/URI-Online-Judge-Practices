#include<stdio.h>
int main()
{
    long int y;
    int x,i,j;
    scanf("%d%ld",&x,&y);
    for(i=1;i<=y;i=i+x){
        for(j=i;j<i+x;j++){
                if(j==(i+x)-1)
                printf("%d\n",j);
                else
                    printf("%d ",j);
    }
    }
    return 0;
}
