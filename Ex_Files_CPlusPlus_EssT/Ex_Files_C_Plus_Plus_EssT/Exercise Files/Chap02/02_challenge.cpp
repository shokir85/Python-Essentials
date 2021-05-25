// 02_challenge.cpp by Bill Weinman [bw.org]
// updated 2020-07-12
#include <cstdio>

const char string[] = "This is a null-terminated string.";

int main()
{   
    //using for range loop
    int count = 0;
    for(char c: string) {
        if (c ==0) break;
        ++count;
    }
    printf("The number of characters is: %d\n", count);

    //using while loop
    count = 0;
    while (string[count]) {
        ++count;
    }
    printf("The number of characters is: %d\n", count);
    
    //using for loop
    for(count = 0; string[count]; ++count)
        ;
    printf("The number of characters is: %d\n", count);
    
    return 0;
}
