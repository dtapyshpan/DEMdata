#include <cstdio>
#include <cstdlib>
#include <cassert>
#include <map>

using namespace std;

int main()
{
  freopen("matrix.out", "rt", stdin);
  freopen("ret.out", "wt", stdout);

  int n, m;
  map< int, int > mli;

  scanf("%d%d", &n, &m);

  printf("%d %d\n", n, m);

  for( int i = 0; i < n; ++i )
  {
    for( int j = 0; j < m; ++j )
    {
      double x;
      scanf("%lf", &x);
      
      int tmp = x * 10000;
      assert( tmp / 1000000 == 6 );
      tmp %= 1000000;
      ++mli[ tmp ];

      printf("%d ", tmp);
    }
    printf("\n");
  }

  /*
  map< int, int > :: iterator it;
  
  for( it = mli.begin(); it != mli.end(); ++it )
  {
    printf("%d %d\n", it->first, it->second);
  }
  */

  fclose( stdin );
  fclose( stdout );

  return 0;
}
