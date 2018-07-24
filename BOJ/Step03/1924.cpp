#include <cstdio>

using namespace std;

int main()
{
    int x, y, i, sum = 0;
    scanf_s("%d %d", &x, &y);
    
    // 2 : 31
    // 3 : 28
    // 4 : 31
    // 5 : 30
    // 6 : 31
    // 7 : 30
    // 8 : 31
    // 9 : 31
    // 10 : 30
    // 11 : 31
    // 12 : 30

    i = x;

    while (i != 1) {
        if (i == 3)
            sum += 28;
        else if (i == 5 || i == 7 || i == 10 || i == 12)
            sum += 30;
        else
            sum += 31;
        i--;
    }

    if ((sum + y) % 7 == 1)
        printf("MON");
    else if ((sum + y) % 7 == 2)
        printf("TUE");
    else if ((sum + y) % 7 == 3)
        printf("WED");
    else if ((sum + y) % 7 == 4)
        printf("THU");
    else if ((sum + y) % 7 == 5)
        printf("FRI");
    else if ((sum + y) % 7 == 6)
        printf("SAT");
    else
        printf("SUN");
}