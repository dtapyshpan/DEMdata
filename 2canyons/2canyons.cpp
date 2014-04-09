#include <cstdio>

#define NAME "2canyons.test"

const int H = 100;
const int W = 100;
const int TOP = 8000;
const int delta = 50;
const int WL = 200;
const int MAXHEIGHT = 8848;

void makeGround()
{
	for( int i = 0; i < 30; ++i )
	{
		int x = TOP;
		for( int j = 0; j < 20; ++j ) 
		{
			printf("%d ", x);
			x -= delta;
		}
		for( int j = 0; j < W - 40; ++j ) printf("%d ", MAXHEIGHT);
		x = 4000;
		for( int j = 0; j < 20; ++j ) 
		{
			printf("%d ", x);
			x -= delta;
		}
		printf("\n");
	}

	{
		int x = TOP;
		for( int i = 0; i < W; ++i ) 
		{
			printf("%d ", x);
			x -= delta;
		}
		printf("\n");
	}

	for( int i = 0; i < 30; ++i )
	{
		int x = TOP;
		for( int j = 0; j < 20; ++j ) 
		{
			printf("%d ", x);
			x -= delta;
		}
		for( int j = 0; j < W - 40; ++j ) printf("%d ", MAXHEIGHT);
		x = 4000;
		for( int j = 0; j < 20; ++j ) 
		{
			printf("%d ", x);
			x -= delta;
		}
		printf("\n");
	}

	{
		int x = TOP;
		for( int i = 0; i < W; ++i ) 
		{
			printf("%d ", x);
			x -= delta;
		}
		printf("\n");
	}

	for( int i = 0; i < 38; ++i )
	{
		int x = TOP;
		for( int j = 0; j < 20; ++j ) 
		{
			printf("%d ", x);
			x -= delta;
		}
		for( int j = 0; j < W - 40; ++j ) printf("%d ", MAXHEIGHT);
		x = 4000;
		for( int j = 0; j < 20; ++j ) 
		{
			printf("%d ", x);
			x -= delta;
		}
		printf("\n");
	}
}

void makeWater()
{
	for( int i = 0; i < 30; ++i )
	{
		for( int j = 0; j < W; ++j ) printf("0 ");
		printf("\n");
	}
	for( int i = 0; i < 40; ++i )
	{
		printf("%d ", WL);
		for( int j = 0; j < W - 1; ++j ) printf("0 ");
		printf("\n");
	}
	for( int i = 0; i < 30; ++i )
	{
		for( int j = 0; j < W; ++j ) printf("0 ");
		printf("\n");
	}
}

void makeSpring()
{
	for( int i = 0; i < 30; ++i )
	{
		for( int j = 0; j < W; ++j ) printf("0 ");
		printf("\n");
	}
	for( int i = 0; i < 40; ++i )
	{
		printf("1 ");
		for( int j = 0; j < W - 1; ++j ) printf("0 ");
		printf("\n");
	}
	for( int i = 0; i < 30; ++i )
	{
		for( int j = 0; j < W; ++j ) printf("0 ");
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
