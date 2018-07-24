#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, max, d[1001];
    double dd[1001], sum = 0;
    scanf_s("%d", &N);

    for (int i = 0; i < N; ++i)
        scanf_s("%d", &d[i]);

    sort(d, d + N);
    max = d[N - 1];
    
    for (int i = 0; i < N; ++i) {
        dd[i] = (double)d[i] / max * 100;
        sum += dd[i];
    }
    printf("%.2f", (float)sum / N); 
}