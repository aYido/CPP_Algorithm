#include <cstdio>
using namespace std;

int main()
{
    // 모든 경우 다 하기 2
    int N, K5;
    scanf_s("%d", &N);

    int res = -1;
    for (K5 = 0; K5 * 5 <= N; K5++)
            if ((N - K5 * 5) % 3 == 0)
                res = K5 + ((N - K5 * 5) / 3);
    printf("%d", res);
}