#include <cstdio>
#include <cstdlib>
#include <cstring>

#define NAME "KyzylNew"

int n, m;
double **mpH = NULL, **mpW = NULL, **mpS = NULL;

void printGround( double **mpH )
{
  for( int i = 0; i < n; ++i )
  {
    for( int j = 0; j < m; ++j )
      printf("%lf ", mpH[i][j]);
    printf("\n");
  }
}

void printWater()
{
  mpW = new double*[n];
  for( int i = 0; i < n; ++i )
  {
    mpW[i] = new double[m];
    for( int j = 0; j < m; ++j )
      mpW[i][j] = 0.0;
  }

  for( int i = 0; i < n; ++i )
  {
    for( int j = 0; j < m; ++j )
      printf("%lf ", mpW[i][j]);
    printf("\n");
  }
}

void printSpring()
{
  mpS = new double*[n];
  for( int i = 0; i < n; ++i )
  {
    mpS[i] = new double[m];
    for( int j = 0; j < m; ++j )
      mpW[i][j] = 0.0;
  }

  for( int i = 0; i < n; ++i )
  {
    for( int j = 0; j < m; ++j )
      printf("%lf ", mpS[i][j]);
    printf("\n");
  }
}

void deleteAr()
{
  for( int i = 0; i < n; ++i )
  {
    delete[] mpH[i];
    delete[] mpW[i];
    delete[] mpS[i];
  }
  delete[] mpH;
  delete[] mpW;
  delete[] mpS;
}

int main()
{
  freopen(NAME".test", "rt", stdin);
  freopen(NAME".out", "wt", stdout);

  scanf("%d%d", &n, &m);
  mpH = new double*[n];
  for( int i = 0; i < n; ++i )
  {
    mpH[i] = new double[m];
    for( int j = 0; j < m; ++j )
      scanf("%lf", &mpH[i][j]);
  }

  printf("%d %d\n", n, m);
  printGround( mpH );
  printWater();
  printSpring();
  deleteAr();

  fclose(stdin);
  fclose(stdout);

  return 0;
}
