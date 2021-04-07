def findMax(*args):
    largest = None
    for val in args:
        largest = val if (largest is None or val > largest) else largest

    return largest

m = findMax (702, 422, 631, 10, 892, 104, 772)
print("The largest value is: ", m)
