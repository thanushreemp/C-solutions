# include <stdio.h>
int main( )
{
int num, a, n ;
int sum = 0 ; 
printf ( "\nEnter a 5 digit number (less than 32767): " ) ;
scanf ( "%d", &num ) ;
a = num % 10 ; /* 5th digit extracted as remainder */
n = num / 10 ; /* remaining digits */
sum = sum + a ; /* sum updated by adding extracted digit */
a = n % 10 ; /* 4th digit */
n = n / 10 ;
sum = sum + a ;
a = n % 10 ; /* 3rd digit */
n = n / 10 ;
sum = sum + a ;
a = n % 10 ; /* 2nd digit */
n = n / 10 ;
sum = sum + a ;
a = n % 10 ; /* 1st digit */
sum = sum + a ;
printf ( "Sum of 5 digits of %d is %d\n", num, sum ) ;
return 0 ;
}