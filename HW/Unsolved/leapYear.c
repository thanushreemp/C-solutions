# include <stdio.h>
int main( )
{
    int year ;
    printf ( "Enter Year: " ) ;
    scanf ( "%d", &year ) ;
    year % 100 == 0 ? ( year % 400 == 0 ? printf ( " Leap Year\n" )
    : printf ( "Not a Leap Year\n" ) ) : ( year % 4 == 0 ?
    printf ( "Leap Year\n" ) : printf ( "Not A Leap Year\n" ) ) ;
    return 0 ;
}