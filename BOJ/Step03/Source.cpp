#include <iostream>
#include <string>

using namespace std;

int main() {
    string N;
    int a, sum = 0;
    
    scanf_s("%d", &a);
    cin >> N;

    for (int i = 0; i < a; i++) {
        sum += (N[i] - '0');
    }
    printf("%d", sum);
}