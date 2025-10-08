#include <iostream>
#include "test.h"
#include "pointer.h"
#include "reference.h"
using namespace std; // 使用std命名空间
namespace nameA {
    int x;

    void func() {
        cout << "nameA" << endl;
    }
}

namespace nameB {
    int x;

    void func() {
        cout << "nameB" << endl;
    }
}

namespace A {
    int x = 1;

    namespace B {
        int x = 100;

        namespace C {
            int x = 1000;
        }
    }
}

int main() {
    // 访问空间中的变量
    // nameA::x = 100;
    // nameB::x = 1000;
    // cout << nameA::x << endl;
    // cout << nameB::x << endl;
    // 访问空间中的函数
    // nameA::func();
    // nameB::func();

    // cout << A::x << endl;
    // cout << A::B::x << endl;
    // cout << A::B::C::x << endl;
    // MySpace::func1();
    // MySpace::func2(100);

    // pointer();
    test_reference();

    Teacher teacher;
    teacher.age = 30;
    test_reference2(teacher);
    test_reference3(&teacher);
    cout << teacher.age << endl;
    return 0;
}
