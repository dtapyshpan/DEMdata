#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <set>

using namespace std;

#define NAME "kyzyl_google"
const int wdpth = 7;

struct point
{
  int x, y;
  point() {}
  point( int xx, int yy ) : x( xx ), y( yy ) {}

  int operator < ( const point &arg ) const
  {
    return x < arg.x || ( x == arg.x && y < arg.y );
  }
};

int n, m;
set< point > sp;

void gen_water()
{
  for( int i = 0; i < n; ++i )
  {
    for( int j = 0; j < m; ++j ) 
    {
      if( sp.find( point( i, j ) ) == sp.end() ) printf("0 ");
      else printf("%d ", 1 + rand() % wdpth);
    }
    printf("\n");
  }
}

void gen_springs()
{
  for( int i = 0; i < n; ++i )
  {
    for( int j = 0; j < m; ++j )
      printf("0 ");
    printf("\n");
  }
}

int main()
{
  srand( time( NULL ) );

  freopen( NAME".txt", "rt", stdin );
  freopen( NAME".map", "wt", stdout );

  scanf("%d%d", &n, &m);
  printf("%d %d\n", n, m);

  for( int i = 0; i < n; ++i )
  {
    for( int j = 0; j < m; ++j )
    {
      int x;
      scanf("%d", &x);
      if( x < 620 * 10001 ) sp.insert( point( i, j ) );
      printf("%d ", x - wdpth);
    }
    printf("\n");
  }

  gen_water();
  gen_springs();

  fclose( stdin );
  fclose( stdout );

  return 0;
}
