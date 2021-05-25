
#include <cstdio>

int main()
{
    bool prime_flag = false; 
    for(unsigned int num = 2; num < 1000000; ++num) {

        prime_flag = true;
        for ( unsigned int factor = 2; factor < num; ++factor) {
            if(num % factor == 0) {
                prime_flag = false;
                break;
            }
        }
        if(prime_flag == true) printf("%d ", num);
    }
    puts("");
    return 0;
}
