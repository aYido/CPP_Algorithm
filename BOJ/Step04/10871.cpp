#include <iostream>
using namespace std;

#define MAX 10001
int main() {
    int d[MAX], N, X;

    scanf_s("%d %d", &N, &X);
    
    for (int i = 0; i < N; ++i)
        scanf_s("%d", &d[i]);

    for (int i = 0; i < N; ++i)
        if (d[i] < X)
            printf("%d ", d[i]);
}