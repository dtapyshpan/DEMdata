#include <cstdio>

#define NAME "toxicab.test"

const int H = 100;
const int W = 100;

const int TG = 8000;
const int dx = 50;
const int MG = 8848;
const int WL = 200;

void makeGround()
{
	int mp[H][W];
	
	for( int i = 0; i < H; ++i )  
	{
		int x = TG;
		for( int j = 0; j < W; ++j )
		{
			mp[i][j] = x;
			x -= dx;
		}
	}

	for( int i = 0; i < H; i += 4 )
		for( int j = 4; j < W; j += 4 )
			mp[i][j] = mp[i + 1][j] = mp[i][j + 1] = mp[i + 1][j + 1] = MG;

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
		printf("\n");
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
	freopen( NAME, "wt", stdout );

	printf("%d %d\n", H, W);

	makeGround();
	makeWater();
	makeSprings();
	
	fclose( stdout );

	return 0;
}
