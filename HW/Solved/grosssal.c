# include <stdio.h> 
int main( ) 
{ 
 float base, da, hra, gross ; 
 printf ( "\nEnter Basic Salary of Ramesh: " ) ; 
 scanf ( "%f", &base ) ; 
 da = 0.4 * base ; 
 hra = 0.2 * base ; 
 gross = base + da + hra ; 
 printf ( "Basic Salary of Ramesh = %f\n", base) ; 
 printf ( "Dearness Allowance = %f\n", da ) ; 
 printf ( "House Rent Allowance = %f\n", hra ) ; 
 printf ( "Gross Pay of Ramesh is %f\n", &gross ) ; 
 return 0 ; 
} 