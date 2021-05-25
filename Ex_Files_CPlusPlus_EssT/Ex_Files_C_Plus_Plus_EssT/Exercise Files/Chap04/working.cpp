// working.cpp by Bill Weinman <http://bw.org/>
// updated 2020-06-24
#include <cstdio>

int main()
{   
    int x = 5;
    size_t y = sizeof x;
    printf("size of x is %zd\n", y * 8);
   
    return 0;
}
