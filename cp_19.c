// C program to reverse a string
#include<stdio.h>
#include<string.h>
int main()
{
    int num=0;
    char str[10]="vidhi";
    for(int i=strlen(str)-1;i>=0;i--){
        printf("%c",str[i]);
    }
    for(int i=0;str[i]!='\0';i++){
        num++;
        }
        printf("%d",num);
    return 0;
}