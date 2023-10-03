#!/usr/bin/python3
# 8-uppercase.py

def uppercase(input_str):
    """Convert and display a string in uppercase."""
    for new_char in input_str:
        if ord(new_char) >= 97 and ord(new_char) <= 122:
            new_char = chr(ord(new_char) - 32)
        print("{}".format(new_char), end="")
    print("")
