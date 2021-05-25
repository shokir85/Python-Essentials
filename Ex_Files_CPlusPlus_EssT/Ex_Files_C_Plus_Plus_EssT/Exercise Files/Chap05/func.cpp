// func.cpp by Bill Weinman <http://bw.org/>
// updated 2020-06-24
#include <cstdio>
#include <string>

int func(int  i)
{   
   
   puts("this is func()");
   return i * 2;
}

int main()
{   
    puts("this is main()");
    int x = func(4);
    printf("x is %d\n", x);
    return 0;
}

