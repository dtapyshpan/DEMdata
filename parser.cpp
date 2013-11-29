#include <cstdio>
#include <cstdlib>
#include <cassert>
#include <map>

using namespace std;

#define EPS 1e-8

struct point
{
  int x, y;

  point() {}
  point( int xx, int yy ) : x( xx ), y( yy ) {}
};

int main()
{
  freopen("matrix.out", "rt", stdin);
  freopen("ret.out", "wt", stdout);

  int n, m;
  map< int, int > mli;
  set< point > sm;

  scanf("%d%d", &n, &m);

  printf("%d %d\n", n, m);

  for( int i = 0; i < n; ++i )
  {
    for( int j = 0; j < m; ++j )
    {
      double x;
      scanf("%lf", &x);
      int tmp = x * 10000;
      printf("%d ", tmp);
    }
    printf("\n");
  }

  fclose( stdin );
  fclose( stdout );

  return 0;
}
