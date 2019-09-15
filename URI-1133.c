#include<stdio.h>
int main(){
    int X,Y,i,a,b,t;
    scanf("%d%d",&X,&Y);
    if(X>Y){
        t=X;
        X=Y;
        Y=t;
    }
    for(i=X+1;i<Y;i++){
        if(i%5==2||i%5==3){
          printf("%d\n",i);
        }
    }
    return 0;
}

