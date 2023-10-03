#!/usr/bin/python3
# 9-print_last_digit.py

def print_last_digit(number):
    """Print and return the last digit of a number."""
    last_d = abs(number) % 10
    print(last_d, end="")
    return last_d
