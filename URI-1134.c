#include<stdio.h>
int main()
{
    int i,n,al=0,gas=0,dis=0;
    do{
       scanf("%d",&n);
    if(n==1)
        al=al+1;
    else if(n==2)
        gas=gas+1;
    else if(n==3)
        dis=dis+1;
    }
    while(n!=4);
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",al);
    printf("Gasolina: %d\n",gas);
    printf("Diesel: %d\n",dis);
    return 0;
}
