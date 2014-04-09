#include <cstdio>

#define NAME "bank2.test"

const int H = 100;
const int W = 100;
const int TOP = 8000;
const int delta = 50;
const int WL = 200;
const int MAXHEIGHT = 8848;

void makeGround()
{
	for( int i = 0; i < 49; ++i )
	{
		for( int j = 0; j < W; ++j ) printf("%d ", MAXHEIGHT);
		printf("\n");
	}

	for( int i = 0; i < 2; ++i )
	{
		int x = TOP;
		for( int j = 0; j < W; ++j )
		{
			printf("%d ", x);
			x -= delta;
		}
		printf("\n");
	}

	for( int i = 0; i < 49; ++i )
	{
		for( int j = 0; j < W; ++j ) printf("%d ", MAXHEIGHT);
		printf("\n");
	}
}

void makeWater()
{
	for( int i = 0; i < 49; ++i )
	{
		for( int j = 0; j < W; ++j ) printf("0 ");
		printf("\n");
	}

	for( int i = 0; i < 2; ++i )
	{
		int x = WL;
		for( int j = 0; j < 4; ++j )
		{
			printf("%d ", x);
			x -= delta;
		}
		for( int j = 0; j < W - 4; ++j ) printf("0 ");
		printf("\n");
	}

	for( int i = 0; i < 49; ++i )
	{
		for( int j = 0; j < W; ++j ) printf("0 ");
		printf("\n");
	}
}

void makeSpring()
{
	for( int i = 0; i < 49; ++i )
	{
		for( int j = 0; j < W; ++j ) printf("%d ", 0);
		printf("\n");
	}

	for( int i = 0; i < 2; ++i )
	{
		printf("1 ");
		for( int j = 0; j < W - 1; ++j ) printf("0 ");
		printf("\n");
	}

	for( int i = 0; i < 49; ++i )
	{
		for( int j = 0; j < W; ++j ) printf("%d ", 0);
		printf("\n");
	}
}

int main()
{
	freopen( NAME, "wt", stdout );

	printf("%d %d\n", H, W);

	makeGround();
	makeWater();
	makeSpring();

	fclose( stdout );
	
	return 0;
}
