import operator

x = {'a': 2, 'd': 4, 'c':3, 'b':1, 's':0}
sorted_x = sorted(x.items(), key=operator.itemgetter(0))
sorted_x_inv = sorted(x.items(), key=operator.itemgetter(0), reverse=True)

print sorted_x
print sorted_x_inv