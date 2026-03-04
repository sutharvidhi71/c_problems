#include<stdio.h>
#include<string.h>

void parseHTML(char str)
{
    int in=0,index=0;
    for(int i=0;i<sizeof(str);i++)
    {
        if(str[i]=='<'){
            in=1;
            continue;
        }
        else if(str[i]=='>'){
            in=0;
            continue;
        }
        else if(in==0){
            str[index++]=str[i];
        }
    }
    
}
int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';
    
    printf("before: %s\n", str);
    parseHTML(str);
    
    return 0;
}
