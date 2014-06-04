#include <cstdio>
#include <cassert>

#define IN "ret.out"
#define OUT "KyzylMap.in"

void readMap( int n, int m )
{
  double x;
  for( int i = 0; i < n; ++i )
  {
    for( int j = 0; j < m; ++j ) 
    {
      assert( scanf("%lf", &x) == 1 );
      printf("%.14lf ", x);
    }
    printf("\n");
  }
}

void makeWater( int n, int m )
{
  for( int i = 0; i < n; ++i )
  {
    for( int j = 0; j < m; ++j )
      printf("0 ");
    printf("\n");
  }
}

void makeSpring( int n, int m )
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
  int n, m;
  
  freopen(IN, "rt", stdin);
  freopen(OUT, "wt", stdout);

  assert( scanf("%d%d", &n, &m) == 2 );
  printf("%d %d\n", n, m);

  readMap( n, m );
  makeWater( n, m );
  makeSpring( n, m );
  
  fclose(stdin);
  fclose(stdout);
  
  return 0;
}
