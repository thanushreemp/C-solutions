# include <stdio.h>
int main( )
{
int n, a, b, num ;
long int revnum = 0 ;
printf ( "\nEnter a 5-digit number <= 32767): " ) ;
scanf ( "%d", &n ) ;
num = n ; 
a = n % 10 ; /* last digit */
n = n / 10 ; /* remaining digits */
revnum = revnum + a * 10000L; 
a = n % 10 ; /* 4 th digit */
n = n / 10 ; /* remaining digits */
revnum = revnum + a * 1000;
a = n % 10 ; /* 3 rd digit */
n = n / 10 ; /* remaining digits */
revnum = revnum + a * 100;
a = n % 10 ; /* 2 nd digit */
n = n / 10 ; /* remaining digits */
revnum = revnum + a * 10 ;
a = n % 10 ; /* 1 st digit */
revnum = revnum + a ;
if ( revnum == num )
printf ( "Given no. & its reversed number are equal\n" ) ;
else
printf ( "Given no. & its reversed number are not equal\n" ) ;
return 0 ;
}