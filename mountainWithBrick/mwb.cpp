#include <cstdio>

#define NAME "mwb.test"

const int H = 100;
const int W = 100;

const int dH = 5000;
const int dHdx = 50;
const int dHdx2 = 100;

const int wD = 200;

void makeGround()
{
	int h = dH;
	for( int i = 0; i < 80; ++i )
	{
		for( int j = 0; j < W; ++j ) printf("%d ", h);
		printf("\n");
		h -= dHdx;
	}
	for( int i = 0; i < 10; ++i )
	{
		for( int j = 0; j < W; ++j ) printf("%d ", h);
		printf("\n");
		h += dHdx2;
	}
	for( int i = 0; i < 10; ++i )
	{
		for( int j = 0; j < W; ++j ) printf("%d ", h);
		printf("\n");
		h -= dHdx2;
	}
}

void makeWater()
{
	for( int i = 0; i < W; ++i )
	{
		if( i >= 40 && i <= 60 ) printf("%d ", wD);
		else printf("0 ");
	}
	printf("\n");
	for( int i = 0; i < H - 1; ++i )
	{
		for( int j = 0; j < W; ++j ) printf("0 ");
		printf("\n");
	}
}

void makeSprings()
{
	for( int i = 0; i < W; ++i )
	{
		if( i >= 40 && i <= 60 ) printf("1 ");
		else printf("0 ");
	}
	printf("\n");
	for( int i = 0; i < H - 1; ++i )
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
