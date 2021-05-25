// nullptr.cpp by Bill Weinman <http://bw.org/>
// updated 2020-06-24
#include <cstdio>

#ifndef NULL
#define NULL (0) /* common C++ definition */
#endif

void f( int i ) {
    printf("the int is %d\n", i);
}

void f( const char * s ) {
    printf("the pointer is %p\n", s);
}

int main() {
    f(nullptr);
    return 0;
}
