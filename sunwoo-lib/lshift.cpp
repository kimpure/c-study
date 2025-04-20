// 어쩌다가 lshift 이야기가 나와서 해보게됀것

#include <iostream>
#include <string>

class lshift {
    public:
        lshift& operator << (const char *str) {
            std::cout << str;
            return *this;
        }
};

int main() {
    lshift ls;
    ls << "qwe\n";
    return 0;
}