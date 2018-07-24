#include <cstdio>

using namespace std;

int main() {
    int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    char day[7][4] = {
    "SUN",
    "MON",
    "TUE",
    "WED",
    "THU",
    "FRI",
    "SAT" };
    
    int x, y;
    scanf_s("%d %d", &x, &y);
    int res = 0;
    for (int i = 0; i < x - 1; ++i)
        res += month[i];
    res += y;
    printf("%s", day[res % 7]);

}