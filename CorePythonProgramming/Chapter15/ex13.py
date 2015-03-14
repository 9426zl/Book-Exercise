"""
An RE that would extract out the
actual type name from the string
"""

import re
import string

fig = input('Entry:')
data = str(type(fig))

patt = '<type \'(\w+)\'>'
m = re.match(patt, data)
print m.group(1)
