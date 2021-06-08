# python3
import random 
def max_pairwise_product(numbers):
    n = len(numbers)
    max_product = 0
    for first in range(n):
        for second in range(first + 1, n):
            max_product = max(max_product,
                numbers[first] * numbers[second])
    return max_product

# fast algorithm to calculate the max pairwise prods in list
def max_pairwise_prod_fast(numbers):
    size = len(numbers)
    max1 = numbers[0]
    index1 = 0
    for i in range(size):
        if numbers[i] > max1:
            max1 = numbers[i]
            index1 = i
    print(max1)

    max2 = min(numbers)
    for j in range(size):
        if numbers[j] >= max2 and numbers[j] is not max1:
            max2 = numbers[j]
        elif j != index1 and numbers[j] == max1:
            max2 = max1
    print(max2)
    return max1 * max2


# function to generate a list of random numbers
def randlist(lim):
    numlst = []
    for i in range(lim):
        numlst.append(random.randrange(10000000))
    return numlst

#stress test:
while True:
    numberlist = randlist(1000)
    print(numberlist)
    res1 = max_pairwise_product(numberlist)
    res2 = max_pairwise_prod_fast(numberlist)
    if res1 != res2:
        print("wrong answer", res1, " ", res2)
        print(numberlist)
        break
    else:
        print("OK")

















#if __name__ == '__main__':
 #   input_n = int(input())
  #  input_numbers = [int(x) for x in input().split()]
   # print(max_pairwise_product(input_numbers))
