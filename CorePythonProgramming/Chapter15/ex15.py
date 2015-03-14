"""
Code to recognize a correctly formatted CC number,
but also a valid one.
"""
import re

num = raw_input('Please entry the CC number:')
patt = '\d{4}-\d{6}-\d{5}|\d{4}-\d{4}-\d{4}-\d{4}|\d{15,16}'

m = re.match(patt, num)
if m is None:
    print"The number is invalid"
else:
    print "%s is CC number" % num
