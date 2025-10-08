//
// Created by 李锦涛 on 2025/10/7.
//
#include <iostream>
#include "pointer.h"
using namespace std;

void pointer() {
    int *p = nullptr;
    int i = 5;
    p = &i;
    cout << "i = " << i << ",p = " << p << ",&i = " << &i << endl;
}
