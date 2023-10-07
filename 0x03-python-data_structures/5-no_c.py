#!/usr/bin/python3
# 4-new_in_list.py

def no_c(my_string):

    result = ""
    for char in my_string:
        if char != 'c' and char != 'C':
            result += char

    return result
