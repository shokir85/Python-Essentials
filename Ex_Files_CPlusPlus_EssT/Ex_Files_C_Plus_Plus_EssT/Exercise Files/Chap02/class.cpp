// class.cpp by Bill Weinman [bw.org]
// updated 2020-06-24
#include <cstdio>

class C {
    int i = 0;
public:
    void setvalue( int value ) { i = value; }
    int getvalue() { return i; }
};

int main() {
    int i = 47;
    C o1;
    C o2;
    C o3; 

    o1.setvalue(i);
    o2.setvalue(i*i);
    o3.setvalue(i*i*i);
    printf("value is %d\n", o1.getvalue());
    printf("value is %d\n", o2.getvalue());
    printf("value is %d\n", o3.getvalue());
    return 0;
}
