//another pettern just the change is that it prints number instead of stars as you
//know we can always print any sings we just have to put it in in the print function.

#include <stdio.h>

int main(){
int row;
printf("enter the number of row:-");
scanf("%d",&row);

for(int i=1;i<=row;i++)//controls the row of pettern
{
    for(int j=1;j<=i;j++)//printf the pettern in rows
    {
        printf("%d",j);
    }
    printf("\n");//to start new row
}
    return 0;
}

