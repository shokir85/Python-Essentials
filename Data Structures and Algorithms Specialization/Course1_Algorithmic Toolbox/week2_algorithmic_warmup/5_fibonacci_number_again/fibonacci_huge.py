# Uses python3
import sys

def get_fibonacci_huge_naive(n, m):
    if n <= 1:
        return n

    previous = 0
    current  = 1
    sum_fib = current

    for _ in range(n - 1):
        previous, current = current, previous + current
        sum_fib += current

    return current % m, sum_fib
print(get_fibonacci_huge_naive(100, 10))
# if __name__ == '__main__':
#     input = sys.stdin.read();
#     n, m = map(int, input.split())
#     print(get_fibonacci_huge_naive(n, m))
