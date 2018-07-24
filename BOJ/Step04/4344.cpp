#include <iostream>
using namespace std;

int main() {
    int T, N, d[1001], sum = 0, cnt = 0;
    double avg;

    scanf_s("%d", &T);
    while (T--) {
        scanf_s("%d", &N);
        for (int i = 0; i < N; ++i) {
            scanf_s("%d", &d[i]);
        }
        for (int i = 0; i < N; ++i) {
            sum += d[i];
        }
        avg = (double)sum / N;
        for (int i = 0; i < N; ++i) {
            if (avg < d[i])
                cnt++;
        }
        printf("%.3f%%\n", (double)cnt / N * 100);
        cnt = 0;
        sum = 0;
    }
}