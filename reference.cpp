//
// Created by 李锦涛 on 2025/10/8.
//
#include <iostream>
#include "reference.h"
using namespace std;


void test_reference() {
    float ch = 'a';
    float &p = ch;
    cout << sizeof(p) << endl;
}

void test_reference2(Teacher &t) {
    cout << t.age << endl;
    t.age = 32;
}

void test_reference3(Teacher *const teacher) {
    cout << teacher->age << endl;
    teacher->age = 33;
}
