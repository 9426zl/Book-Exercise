"""
Update the code for gendata.py so that the data
are written directly to redata.txtrather than
output to the screen.
"""
from random import randint, choice
from string import lowercase
from sys import maxint
from time import ctime
import os

doms = ('com', 'edu', 'net', 'org', 'gov')

for i in range(randint(5, 10)):
    dtint = randint(0, maxint-1) # pick date
    dtstr = ctime(dtint) # date string

shorter = randint(4, 7) # login shorter
em = ''
for j in range(shorter): # generate login
    em += choice(lowercase)

longer = randint(shorter, 12) # domain longer
dn = ''
for j in range(longer): # create domain
    dn += choice(lowercase)

si = dtstr+ '::' + em + '@' + dn + '.'+ choice(doms) + '::' \
     + str(dtint) + '-'+ str(shorter) + '-'+ str(longer)

print '%s' % si

f = open('redata.txt', 'a')
f.write(si)
f.write('\n')
f.close()
