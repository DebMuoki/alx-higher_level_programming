#!/usr/bin/python3
# 100-print_tebahpla.py

""""Print the alphabet in reverse order alternating upper- and lower-case."""
index = 0
for char in range(ord('z'), ord('a') - 1, -1):
    print("{}".format(chr(char - index)), end="")
    index = 32 if index == 0 else 0

