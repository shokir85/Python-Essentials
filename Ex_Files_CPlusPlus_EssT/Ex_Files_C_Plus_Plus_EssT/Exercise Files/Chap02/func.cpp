// func.cpp by Bill Weinman [bw.org]
// updated 2020-06-24
#include <cstdio>

void func(int i, const char *s)
{
    puts("this is func()");
    printf("this is func(%i, %s)\n", i, s);
}

int func1(int i, const char *s)
{
    puts("this is func1()");
    printf("this is func1(%i, %s)\n", i, s);
    return i * i;
}

int main()
{
    puts("this is main()");
    func(47, "string");

    int x = func1(47, "string");
    printf("x is %d\n", x);
    return 0;
}

