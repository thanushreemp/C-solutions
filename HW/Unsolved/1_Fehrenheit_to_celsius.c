#include<stdio.h>
float feh_to_cel(int n){
    float cel= (n-32)/1.8;
    return cel;
}
int main(){
    float feh;
    printf("Enter the Degree in Feharenheit: ");
    scanf("%f",&feh);
    printf("Degree in Celsius is %f",feh_to_cel(feh));
    return 0;
}