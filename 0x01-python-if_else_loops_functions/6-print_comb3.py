#!/usr/bin/python3

for digit1 in range(10):
    for digit2 in range(digit1 + 1, 10):
        print("{:d}{:d}".format(digit1, digit2), end=", ")

print()
