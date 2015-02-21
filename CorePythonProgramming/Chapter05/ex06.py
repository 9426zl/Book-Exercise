import operator

ops = {"+": operator.add,
       "-": operator.sub,
       "*": operator.mul,
       "/": operator.truediv,
       "%": operator.mod,
       "//": operator.floordiv,
       "**": operator.pow}
    
li = raw_input("Enter the line:")
sqli = li.split()
N1 = float(sqli[0])
N2 = float(sqli[2])
res = ops[sqli[1]](N1, N2)
print "The result is : %s" % res