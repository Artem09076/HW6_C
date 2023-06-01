#include <stdio.h>
int main(){
    int n,k,k1;
    scanf("%d",&n);
    int a=n/100,b=(n/10)%10,c=n%10;
    k=a*b;
    k1=(b*c);
    if (k>k1)
    {
        printf("%d%d\n",k,k1);
    }else
    {
        printf("%d%d\n",k1,k);
    } 
}