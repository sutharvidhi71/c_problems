#include<stdio.h>
int main(){
     int n;
     long long reverse=0;

     printf("enter number:\n");
     if(scanf("%d",&n)!=1){
        printf("invelid input:\n");
        return 1;
     }
     int sigh=(n<0)?-1:1;
     long long temp=(n<0)?-(long long )n:(long long )n;
     while(temp>0){
        int digit=temp%10;
        reverse=reverse*10+digit;
        temp/=10;

     }
     reverse*=sigh;
     printf("reversed number: %lld\n",reverse);

    return 0;
}