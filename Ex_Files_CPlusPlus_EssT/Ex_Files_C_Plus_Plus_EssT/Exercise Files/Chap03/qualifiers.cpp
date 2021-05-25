// qualifiers.cpp by Bill Weinman <http://bw.org/>
// updated 2020-06-24
#include <cstdio>

class S {
public:
    int static_value() {
        static int x = 7;
        return ++x;
    }
};

int func() {
    static int x = 7;
    return ++x;
}

int main() {
    
    // Using static variable in function func;
    int i = func();
    i = func();
    i = func();
    printf("the integer is %d\n", i);
    
    //Using static values defined in Class S;
    S s1;
    S s2;
    S s3;
    printf("The integer is %d\n", s1.static_value());
    printf("The integer is %d\n", s2.static_value());
    printf("The integer is %d\n", s3.static_value());
    return 0;
}

