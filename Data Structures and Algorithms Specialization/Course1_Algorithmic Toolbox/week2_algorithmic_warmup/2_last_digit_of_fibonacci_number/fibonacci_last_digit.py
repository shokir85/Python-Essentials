# Uses python3
import sys

def get_fibonacci_last_digit_naive(n):
    if n <= 1:
        return n

    previous = 0
    current  = 1
    
    for __ in range(n-1):
        fib_current = previous + current
        previous = current
        current = fib_current
        #previous, current = current, previous + current
    return current % 10
print(get_fibonacci_last_digit_naive(327305))
# if __name__ == '__main__':
#     input = sys.stdin.read()
#     n = int(input)
#     print(get_fibonacci_last_digit_naive(n))
