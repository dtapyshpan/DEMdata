#include <cstdio>

#define TEST "mountain.test"
const int H = 100;
const int W = 100;
const int TOP = 8000;
const int delta = 50;
const int WL = 200;

void makeMountain()
{
	for( int i = 0; i < H; ++i )
	{
		int x = TOP;
		for( int j = 0; j < W; ++j )
		{
			printf("%d ", x);
			x -= delta;
		}
		printf("\n");
	}
}

void makeWater()
{
	for( int i = 0; i < 40; ++i )
	{
		for( int j = 0; j < W; ++j ) printf("0 ");
		printf("\n");
	}

	for( int i = 0; i < 20; ++i )
	{	
		printf("%d ", WL);
		for( int j = 0; j < W - 1; ++j ) printf("0 ");
		printf("\n");
	}

	for( int i = 0; i < 40; ++i )
	{
		for( int j = 0; j < W; ++j ) printf("0 ");
		printf("\n");
	}
}

void makeSpring()
{
	for( int i = 0; i < 40; ++i )
	{
		for( int j = 0; j < W; ++j ) printf("0 ");
		printf("\n");
	}

	for( int i = 0; i < 20; ++i )
	{	
		printf("%d ", 1);
		for( int j = 0; j < W - 1; ++j ) printf("0 ");
		printf("\n");
	}

	for( int i = 0; i < 40; ++i )
	{
		for( int j = 0; j < W; ++j ) printf("0 ");
		printf("\n");
	}
}

int main()
{
	freopen( TEST, "wt", stdout );

	printf("%d %d\n", H, W);
	makeMountain();
	makeWater();
	makeSpring();

	fclose( stdout );

	return 0;
}
