#include <iostream>


namespace {
    template<typename T>
    class TypeDisplayer;  //declaration

    template<typename T>
    void func(T  param) {
        //TypeDisplayer<decltype(param)> type_displayer;
        std::cout << sizeof(param) << std::endl;
    }
}



int main() {
    const char hello[13] = "hello";  //const char*  数组 ---> 指针 Array Deca
    func(hello);
    return 0;
}
