# Uses python3
import sys

def get_change(m):
    coins = [30,24,12,6,3,1]
    count = 0
    for coin in coins:
        count += m // coin
        m = m % coin
    return count

print(get_change(48))
# if __name__ == '__main__':
#     m = int(sys.stdin.read())
#     print(get_change(m))
