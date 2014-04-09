#include <cstdio>

#define NAME "mountain.test"

const int N = 100;
const int M = 100;
const int dx = 50;
const int dvalue = 1000;

void makeGround()
{
	int i = 0;
	for( int t = 0; t < N; ++t )
	{
		int H = dvalue;

		if( t < N / 2 ) ++i;
		else --i;

		for( int j = 0; j < M / 2; ++j )
		{
			if( j >= M / 2 - i ) H += dx;
			printf("%d ", H);
		}
		for( int j = 0; j < M / 2; ++j )
		{
			if( j < i ) H -= dx;
			printf("%d ", H);
		}

		printf("\n");
	}
}

void makeWater()
{
	for( int i = 0; i < 49; ++i )
	{
		for( int j = 0; j < M; ++j ) printf("0 ");
		printf("\n");
	}

	{
		for( int i = 0; i < M / 2 - 1; ++i ) printf("0 ");
		printf("200 ");
		for( int i = 0; i < M / 2; ++i ) printf("0 ");
	}
		
	for( int i = 0; i < 50; ++i )
	{
		for( int j = 0; j < M; ++j ) printf("0 ");
		printf("\n");
	}
}

void makeSprings()
{
	for( int i = 0; i < 49; ++i )
	{
		for( int j = 0; j < M; ++j ) printf("0 ");
		printf("\n");
	}

	{
		for( int i = 0; i < M / 2 - 1; ++i ) printf("0 ");
		printf("1 ");
		for( int i = 0; i < M / 2; ++i ) printf("0 ");
	}
		
	for( int i = 0; i < 50; ++i )
	{
		for( int j = 0; j < M; ++j ) printf("0 ");
		printf("\n");
	}
}

int main()
{
	freopen( NAME, "wt", stdout );

	printf("%d %d\n", N, M);

	makeGround();
	makeWater();
	makeSprings();
	
	fclose( stdout );

	return 0;
}
