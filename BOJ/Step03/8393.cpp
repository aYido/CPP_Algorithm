#include <cstdio>

using namespace std;

int main() {
    int N, sum = 0;
    scanf_s("%d", &N);
    for (int i = 1; i <= N; i++)
        sum += i;
    printf("%d", sum);
}