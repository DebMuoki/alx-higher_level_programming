#!/usr/bin/python3
# 7-islower.py

def islower(c):
    """Determine whether a character is in lowercase"""
    if ord(c) >= 97 and ord(c) <= 122:
        return True
    else:
        return False

