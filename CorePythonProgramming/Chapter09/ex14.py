import operator
import sys
"""convert Ch05 ex06 to take input
from command line"""

ops = {"+": operator.add,
    "-": operator.sub,
    "*": operator.mul,
    "/": operator.truediv,
    "%": operator.mod,
    "//": operator.floordiv,
    "**": operator.pow}

his = []
N1 = int(sys.argv[1])
N2 = int(sys.argv[3])
opt = sys.argv[2]

if N1 != 'print':
    res = ops[opt](N1, N2)
    print res





