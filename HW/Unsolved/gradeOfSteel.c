# include <stdio.h>
# include <stdlib.h>
int main( )
{
    float hard, carbon, tensile ;
    printf ( "\nEnter Hardness of steel: " ) ;
    scanf ( "%f", &hard ) ;
    printf ( "\nEnter Carbon content: " ) ;
    scanf ( "%f", &carbon ) ;
    printf ( "\nEnter Tensile strength:" ) ;
    scanf ( "%f", &tensile ) ;
    if ( hard > 50 && carbon < 0.7 && tensile > 5600 )
    {
        printf ( "Grade 10\n" ) ;
        exit ( 0 ) ; /* Terminates the execution */
    }
    if ( hard > 50 && carbon < 0.7 && tensile <= 5600 )
    {
        printf ( "Grade 9\n" ) ;
        exit ( 0 ) ;
    }
    if ( hard <= 50 && carbon < 0.7 && tensile > 5600 )
    {
        printf ( "Grade 8\n" ) ;
        exit ( 0 ) ;
    }
    if ( hard > 50 && carbon >= 0.7 && tensile > 5600 )
    {
        printf ( "Grade 7\n" ) ;
        exit ( 0 ) ;
    }
    if ( hard > 50 || carbon < 0.7 || tensile > 5600 )
    {
        printf ( "Grade 6\n" ) ;
        exit ( 0 ) ;
    }
    printf ( "Grade 5\n" ) ;
    return 0 ;
}
