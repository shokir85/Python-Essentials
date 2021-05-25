// pointer-incr.cpp by Bill Weinman <http://bw.org/>
// updated 2020-06-24
#include <cstdio>
#include <cstdint>

void printp(uint16_t *p) {
    printf("pointer is %p, value is %d\n", p, *p);
}

int main()
{
    uint16_t arr[5] = { 1, 2, 3, 4, 5 };
    uint16_t *p = arr;
    printp(++p);
    printp(++p);
    printp(++p);

    return 0;
}
