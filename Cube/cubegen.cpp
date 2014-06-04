/*******
 generate empty cube
spring at the side of the cube
0 -- left
1 -- up
2 -- right
3 -- low
 ******/

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

#define NAME "cube"

const int mxn = 500;

int w[mxn][mxn], s[mxn][mxn];

int calcGround( int side, int maxH, int d, int maxcell, int row, int col )
{
  int ret = 0;
  if( side == 0 ) ret = maxH - d * col; //left
  else if( side == 1 ) ret = maxH - d * row; //up
  else if( side == 2 ) ret = ( maxH - d * maxcell ) + d * col; //right
  else ret = ( maxH - d * maxcell ) + d * row; //low

  return ret;
}

void printfGround( int side, int n )
{
  int maxH = 10000;
  int d = 50;
  for( int i = 0; i < n; ++i )
  {
    for( int j = 0; j < n; ++j )
      printf("%d ", calcGround( side, maxH, d, n, i, j ));
    printf("\n");
  }
}

void printfWater( int side, int n, int cnt )
{
  memset( w, 0, sizeof( w ) );
  if( side == 0 )
  {
    //left
    for( int i = n / 2 - cnt / 2; i < n / 2 + cnt / 2; ++i )
      w[i][0] = rand()%10;
  }
  else if( side == 1 )
  { 
    //up
    for( int i = n / 2 - cnt / 2; i < n / 2 + cnt / 2; ++i )
      w[0][i] = rand()%10;
  }
  else if( side == 2 )
  {
    //right
    for( int i = n / 2 - cnt / 2; i < n / 2 + cnt / 2; ++i )
      w[i][n - 1] = rand()%10;
  }
  else if( side == 3 )
  {
    //low
    for( int i = n / 2 - cnt / 2; i < n / 2 + cnt / 2; ++i )
      w[n - 1][i] = rand()%10;
  }

  for( int i = 0; i < n; ++i )
  {
    for( int j = 0; j < n; ++j ) printf("%d ", w[i][j]);
    printf("\n");
  }
}

void printfSpring( int side, int n, int cnt )
{
  memset( s, 0, sizeof( s ) );
  if( side == 0 )
  {
    //left
    for( int i = n / 2 - cnt / 2; i < n / 2 + cnt / 2; ++i )
      s[i][0] = w[i][0];
  }
  else if( side == 1 )
  { 
    //up
    for( int i = n / 2 - cnt / 2; i < n / 2 + cnt / 2; ++i )
      s[0][i] = w[0][i];
  }
  else if( side == 2 )
  {
    //right
    for( int i = n / 2 - cnt / 2; i < n / 2 + cnt / 2; ++i )
      s[i][n - 1] = w[i][n - 1];
  }
  else if( side == 3 )
  {
    //low
    for( int i = n / 2 - cnt / 2; i < n / 2 + cnt / 2; ++i )
      s[n - 1][i] = w[n - 1][i];
  }

  for( int i = 0; i < n; ++i )
  {
    for( int j = 0; j < n; ++j ) printf("%d ", s[i][j]);
    printf("\n");
  }
}

int main()
{
  freopen( NAME".in", "wt", stdout );

  srand( time( NULL ) );

  int n = 100, side = 3, cnt = 5;
  printf("%d %d\n", n, n);
  printfGround( side, n );
  printfWater( side, n, cnt );
  printfSpring( side, n, cnt );

  fclose( stdout );

  return 0;
}
