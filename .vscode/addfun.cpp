#include <iostream>
using namespace std;

void printPattern(int N) {
    int currentNum = 1;
    int maxNum = 1;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N - i; j++) {
            cout << "   ";
        }

        for (int j = 1; j <= i; j++) {
            cout << currentNum << " ";
            currentNum--;
        }

        int temp = currentNum + 2;

        for (int j = 1; j < i; j++) {
            cout << temp << " ";
            temp++;
        }

        maxNum += 2;
        currentNum = maxNum;
        cout << endl;
    }
}

int main() {
    int N;
    cout << "Enter the number of rows: ";
    cin >> N;

    printPattern(N);

    return 0;
}
