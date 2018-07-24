#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N[3];

    scanf_s("%d %d %d", &N[0], &N[1], &N[2]);
    sort(N, N + 3);
    printf("%d", N[1]);
}