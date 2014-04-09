#include <cstdio>

#define NAME "rivbar.test"

const int H = 100;
const int W = 100;

const int MG = 8848;
const int GL = 8000;
const int d = 50;

const int WL = 200;

void makeGround()
{
	int mp[H][W];

	for( int i = 0; i < H; ++i ) for( int j = 0; j < W; ++j ) mp[i][j] = MG;
	for( int i = 0; i < 20; ++i )
	{
		int x = GL;
		for( int j = 0; j < W; ++j )
		{
			mp[40 + i][j] = x;
			x -= d;
		}
	}
	for( int i = 0; i < 10; ++i )	for( int j = 0; j < 10; ++j )	mp[45 + i][15 + j] = MG;

	for( int i = 0; i < H; ++i ) 
	{
		for( int j = 0; j < W; ++j ) printf("%d ", mp[i][j]);
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
	}

	for( int i = 0; i < 40; ++i ) 
	{
		for( int j = 0; j < W; ++j ) printf("0 ");
		printf("\n");
	}
}

void makeSprings()
{
	for( int i = 0; i < 40; ++i ) 
	{
		for( int j = 0; j < W; ++j ) printf("0 ");
		printf("\n");
	}

	for( int i = 0; i < 20; ++i )
	{
		printf("1 ");
		for( int j = 0; j < W - 1; ++j ) printf("0 ");
	}

	for( int i = 0; i < 40; ++i ) 
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
	makeSprings();

	fclose( stdout );

	return 0;
}
