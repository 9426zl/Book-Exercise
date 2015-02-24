
f = open('a.txt', 'r')
i = 0
allLines = f.readlines()
f.close()

for eachLine in allLines:
    if eachLine[0] != '#':
        print eachLine
        i += 1
print "The file is %d lines." % i



