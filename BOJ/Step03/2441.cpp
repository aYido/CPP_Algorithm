#include <cstdio>

using namespace std;

int main()
{
    int N;
    scanf_s("%d", &N);

    for (int i = 1; i <= N; i++) {
      for (int k = i; k > 1; k--)
          printf(" ");
      for (int j = N; j >= i; j--)
          printf("*");
      printf("\n");
    }
}