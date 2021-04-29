# Demonstrate the use of variable argument lists


# TODO: define a function that takes variable arguments
def addition(*args):
    result = 0
    for arg in args:
        result += arg
    return result


def main():
    # TODO: pass different arguments
    print(addition(2,3,905,6))
    print(addition(343,454,544))

    # TODO: pass an existing list
    myNums = [2,3,905,6]
    print(addition(*myNums))


if __name__ == "__main__":
    main()
