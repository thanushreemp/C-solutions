# include <stdio.h>
int main( )
{
    char ch ;
    printf ( "Enter character" ) ;
    scanf ( "%c", &ch ) ;
    ch >= 97 && ch <= 122 ? printf ( "Character is lower case\n" ) : printf ( "Character is not lower case\n" ) ;
    return 0 ;
}