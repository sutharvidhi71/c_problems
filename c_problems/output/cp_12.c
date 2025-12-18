#include<stdio.h>
int main(){
float celsius,fahrenheit;

printf("enter celsius to convert into fahrenheit:-");
scanf("%f",&celsius);

fahrenheit= celsius * 1.8 + 32;// formula to convert celsius into fahrengeit
printf("fahrenhiet:-%f",fahrenheit);
return 0;
}