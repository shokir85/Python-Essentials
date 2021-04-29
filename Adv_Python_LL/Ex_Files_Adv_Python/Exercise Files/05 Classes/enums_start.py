# define enumerations using the Enum base class
from enum import Enum, unique, auto

@unique
class Fruit(Enum):
    Apple = 1
    Banana = 2
    Orange = 3
    Tomato = 4
    Pear = auto()


def main():
    #pass
    # TODO: enums have human-readable values and types
    print(Fruit.Apple)
    print(type(Fruit.Apple))
    print(repr(Fruit.Apple))

    # TODO: enums have name and value properties
    print(Fruit.Apple.name, Fruit.Apple.value)

    # TODO: print the auto-generated value
    print(Fruit.Pear.value)

    # TODO: enums are hashable - can be used as keys
    myFruit = {}
    myFruit[Fruit.Banana] = 'Come Mr. Shokir Pardaev'
    print(myFruit[Fruit.Banana])



if __name__ == "__main__":
    main()
