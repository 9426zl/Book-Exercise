#! usr/bin/env python

import string

space = " "
str_in = raw_input("Please enter the string:")
str_len = len(str_in)
i = 0

while i < str_len:
    if str_in[i] == space:
        str_in = str_in[ i+1: ]
        i += 1
    break

i = -1
while i > -str_len:
    if str_in[i] == space:
        str_in = str_in[ :i-1]
        i -= 1
    break

print "The stripped string is:%s" %str_in