# include <stdio.h>
int main( )
{
    int l, b, r, area1, perimeter ;
    float area2, circum ;
    printf ( "\nEnter Length & Breadth of Rectangle: " ) ;
    scanf ( "%d %d", &l, &b ) ;
    area1 = l * b ; /* Area of a rectangle */
    perimeter = 2 * l + 2 * b ; /* Perimeter of a rectangle */
    printf ( "Area of Rectangle = %d\n", area1 ) ;
    printf ( "Perimeter of Rectangle = %d\n", perimeter) ;
    printf ( "\n\nEnter Radius of circle: " ) ;
    scanf ( "%d", &r ) ;
    area2 = 3.14 * r * r ; /* Area of Circle */
    circum = 2 * 3.14 * r ; /* Circumference of a circle */
    printf ( "Area of Circle = %f\n", area2 ) ;
    printf ( "Circumference of Circle = %f\n", circum ) ;
    return 0 ;
}
