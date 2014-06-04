#define LOCAL

#include <cstdio>

#define NAME "resKyzyl2M"

typedef long long ll;

void getMatrix( const int n, const int m )
{
  double x;
  for( int i = 0; i < n; ++i )
  {
    for( int j = 0; j < m; ++j )
    {
      scanf("%lf", &x);
      printf("%.20lf ", x);
    }
    printf("\n");
  }
}

void writeEmptySnow( const int n, const int m )
{
  for( int i = 0; i < n; ++i )
  {
    for( int j = 0; j < m; ++j ) printf("0.0 ");
    printf("\n");
  }
}

int main()
{
  #ifdef LOCAL
  freopen(NAME".in", "rt", stdin);
  freopen(NAME".out", "wt", stdout);
  #endif

  int n, m;
  scanf("%d%d", &n, &m);
  printf("%d %d\n", n, m);
  getMatrix( n, m );
  getMatrix( n, m );
  getMatrix( n, m );
  writeEmptySnow( n, m );

  #ifdef LOCAL
  fclose(stdin);
  fclose(stdout);
  #endif

  return 0;
}
