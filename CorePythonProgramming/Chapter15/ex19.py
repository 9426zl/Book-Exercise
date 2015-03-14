"""
Extract the complete timestamps from each line.
"""

import re
import os

f = open('redata.txt')
cont = f.readlines()
f.close()

patt = '[A-Z][a-z][a-z] [A-Z][a-z][a-z] [0-9]{2} [0-2][0-9]:[0-5][0-9]:[0-5][0-9] [0-9]{4}'
for item in cont:
    m = re.match(patt, item)
    print m.group()