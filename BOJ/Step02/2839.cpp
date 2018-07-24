#include <cstdio>
using namespace std;

int main()
{
    // 모든 경우 다 하기
    int N, K5, K3;
    scanf_s("%d", &N);

    int res = -1;
    for (K5 = 0; K5 * 5 <= N; K5++)
        for (K3 = 0; K5 * 5 + K3 * 3 <= N; K3++)
            if (K5 * 5 + K3 * 3 == N)
                res = K5 + K3;
    printf("%d", res);
}