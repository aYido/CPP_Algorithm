#include <cstdio>
#include <algorithm>

using namespace std;

int dp[5001];
const int MAX = 99999;

int main() {
    int N;
    scanf("%d", &N);
    dp[1] = dp[2] = MAX;

    for (int i = 3; i <= N; i++) {
        dp[i] = MAX;
        if (dp[i - 3] != -1)
            dp[i] = min(dp[i], dp[i - 3] + 1);
        if (i >= 5 && dp[i - 5] != -1)
            dp[i] = min(dp[i], dp[i - 5] + 1);
    }
    if (dp[N] == MAX)
        dp[N] = -1;
    printf("%d", dp[N]);
}