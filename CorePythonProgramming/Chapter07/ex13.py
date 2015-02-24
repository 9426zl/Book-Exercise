from random import randint

set_A = set([randint(0, 9) for n in range(0, 9)])
set_B = set([randint(0, 9) for n in range(0, 9)])
print "set A is %s" % set_A
print "set B is %s" % set_B

Union_re = set_A.union(set_B)
Differ_re = set_A.difference(set_B)
print "Set union is %s" % Union_re
print "Set difference is %s" % Differ_re
