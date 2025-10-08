//
// Created by 李锦涛 on 2025/10/8.
//

#ifndef UNTITLED_REFERENCE_H
#define UNTITLED_REFERENCE_H

typedef struct Teacher {
    char name[32];
    int age;
} Teacher;

void test_reference();

void test_reference2(Teacher &t);

void test_reference3(Teacher *teacher);
#endif //UNTITLED_REFERENCE_H
