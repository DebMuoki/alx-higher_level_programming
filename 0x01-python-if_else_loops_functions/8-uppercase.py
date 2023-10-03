#!/usr/bin/python3
# 8-uppercase.py

def uppercase(input_str):
    for char in input_str:
        if ord('a') <= ord(char) <= ord('z'):
            uppercase_char = chr(ord(char) - ord('a') + ord('A'))
            print(uppercase_char, end='')
        else:
            print(char, end='')
    print()
