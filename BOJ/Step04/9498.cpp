#include <iostream>
using namespace std;

int main() {
    int N;
    scanf_s("%d", &N);

    if (90 <= N && 100 >= N)
        printf("A");
    else if (80 <= N && 89 >= N)
        printf("B");
    else if (70 <= N && 79 >= N)
        printf("C");
    else if (60 <= N && 69 >= N)
        printf("D");
    else
        printf("F");
}