#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int isPrime( int number );

int main( int argc, char *argv[] ) 
{
	if( argc != 2 )
	{
		printf("Please enter in that format: ./isPrime <number> \n");
		exit(0);
	}

	int i, num = atoi(argv[1]);

	if( isPrime( num ) )
		printf( "%d is a prime number!\n", num );
	else
		printf( "%d is not a prime number!\n", num );

	return 0;
}


int isPrime( int number )
{
	int i;

	for( i = 2; i <= sqrt( number ); i++ )
		if( !(number % i) )
			return 0;

	return 1;

}