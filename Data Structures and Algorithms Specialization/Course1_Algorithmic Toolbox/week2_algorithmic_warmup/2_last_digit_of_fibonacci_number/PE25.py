def Index_Fibonacci(target):
    fib1 = 0
    fib2 = 1
    digits = []
    counter = 1
    while len(digits) < target:
            fib_current = fib1 + fib2
            digits = [i for i in str(fib_current)]
            fib1 = fib2
            fib2 = fib_current
            counter +=1
    return counter, fib2
print(Index_Fibonacci(200))