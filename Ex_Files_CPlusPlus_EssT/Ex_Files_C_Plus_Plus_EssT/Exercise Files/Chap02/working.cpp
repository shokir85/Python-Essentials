// working.cpp by Bill Weinman [bw.org]
// updated 2020-06-24
#include <cstdio>

int main()
{
    const int i = 7;
    printf("value is %d\n", i);

    char s[] = "String";
    printf("s is %s\n", s);

    // looking thru string with integer indices;
    for  (int i = 0; s[i] !=0; ++i) {
        printf("char is %c\n", s[i]);
    }

    //looping thru string with character pointer;
    for (char *cp = s; *cp != 0; ++cp){
        printf("char is %c\n", *cp);
    }

    //simple conditional;
    int x = 42;
    int y = 7;
    printf("value is %d\n", x > y);

    if (x < y){
        puts("condition is true");
    } 
    else {
        puts("condition is false");
    }
    return 0;
}
