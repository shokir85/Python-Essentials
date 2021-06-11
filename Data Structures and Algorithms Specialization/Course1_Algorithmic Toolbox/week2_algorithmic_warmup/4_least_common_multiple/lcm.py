# Uses python3
import sys

def lcm_naive(a, b):
    l = 1
    while l <= a * b:
        l += 1
        if l % a == 0 and l % b == 0:
            break
    # for l in range(1, a*b + 1):
    #     if l % a == 0 and l % b == 0:
    #         return l

    return l
print(lcm_naive(102,521))
# if __name__ == '__main__':
#     input = sys.stdin.read()
#     a, b = map(int, input.split())
#     print(lcm_naive(a, b))

