//
// Created by eetrust on 2025/10/26.
//
#include <iostream>
using namespace std;

int main() {
    // cout << "break 语句的使用" << endl;
    // for (int i = 1; i < 100; i++) {
    //     if (i % 2 == 0) {
    //         cout << i << endl;
    //         break;
    //     }
    //     cout << i << endl;
    // }
    //
    // cout << "continue 语句的使用" << endl;
    // for (int i = 0; i < 100; i++) {
    //     if (i % 2 == 0) {
    //         continue;
    //     }
    //     cout << i << endl;
    // }

    int x = 0;
    while (x < 100) {
        x++;
        if (x % 2 == 0) {
            goto d;
        }
        cout << x << endl;
    }

d:
    cout << x << endl;
    return 0;
}
