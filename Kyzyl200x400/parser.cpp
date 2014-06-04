#include <cstdio>
#include <cassert>

#define NAME "ret"

int main()
{
  freopen( NAME, "rt", stdin );
  freopen( NAME".out", "wt", stdout );

  char ch;
  int n = 200, m = 400;
  double x;
  printf("%d %d\n", n, m);
  for( int i = 0; i < n; ++i )
  {
    assert( scanf("%c", &ch) == 1 );
    for( int j = 0; j < m; ++j )
    {
      assert( scanf("%lf%c", &x, &ch) == 2 );
      printf("%.14lf ", x);
    }
    assert( scanf("%c", &ch) == 1 );
    printf("\n");
  }
  
  fclose(stdin);
  fclose(stdout);

  return 0;
}
