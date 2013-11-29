#include <cstdio>
#include <cstdlib>
#include <ctime>

#define NAME "data"

const int n = 300, m = 300;

void gen_empty()
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

  freopen( NAME".in", "wt", stdout );

  printf("%d %d\n", n, m);
  for( int i = 0; i < n; ++i )
  {
    for( int j = 0; j < m; ++j ) 
      printf("%d ", ( rand() ) % 100);
    printf("\n");
  }

  gen_empty();
  gen_empty();

  fclose( stdout );

  return 0;
}
