#include <cstdio>

using namespace std;

int main()
{
    int N;
    scanf_s("%d", &N);

    for (int i = 1; i <= 9; i++)
        printf("%d * %d = %d\n", N, i, N*i);
}