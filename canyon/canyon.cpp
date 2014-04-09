#include <cstdio>
#include <cstring>

#define TEST "canyon.test"

const int h = 50;
const int w = 100;

const int d = 5;
int TL = 5000;

void make_ground()
{
	int map[h][w];
	int mdl = 75;
	int direction = 1;
	
	for( int i = 0; i < h; ++i )
		for( int j = 0; j < w; ++j )
			map[i][j] = 8000;

	for( int i = 0; i < h; ++i )
	{
		if( i && !( i % 5 ) ) direction = -1 * direction;
		mdl = mdl - 1 * direction * d;
		for( int j = mdl - d; j < mdl + d; ++j  ) map[i][j] = TL;
		TL -= 100;
		if( TL < 0 ) TL = 50;
	}

	for( int i = 0; i < h; ++i )
	{
		for( int j = 0; j < w; ++j ) printf("%d ", map[i][j]);
		printf("\n");
	} 
}

void make_water()
{
	int water[h][w];
	memset( water, 0, sizeof( water ) );
	for( int i = 65; i < 75; ++i ) water[0][i] = 200;

	for( int i = 0; i < h; ++i )
	{
		for( int j = 0; j < w; ++j ) printf("%d ", water[i][j]);
		printf("\n");
	}
}

void make_springs()
{
	int spr[h][w];
	memset( spr, 0, sizeof( spr ) );
	for( int i = 65; i < 75; ++i ) spr[0][i] = 1;

	for( int i = 0; i < h; ++i )
	{
		for( int j = 0; j < w; ++j ) printf("%d ", spr[i][j]);
		printf("\n");
	}
}

int main()
{
	freopen(TEST, "wt", stdout);

	printf("%d %d\n", h, w);
	make_ground();
	make_water();
	make_springs();

	fclose( stdout );

	return 0;
}
