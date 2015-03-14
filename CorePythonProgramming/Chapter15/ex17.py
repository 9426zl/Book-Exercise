"""
Determine how many times each day of the week
shows up for any incarnation of redata.txt.
"""
import re
import os

f = open('redata.txt')
cont = f.read()

patt1 = 'Sun'
patt2 = 'Mon'
patt3 = 'Tue'
patt4 = 'Wed'
patt5 = 'Thu'
patt6 = 'Fri'
patt7 = 'Sat'

m1 = re.findall(patt1, cont)
m2 = re.findall(patt2, cont)
m3 = re.findall(patt3, cont)
m4 = re.findall(patt4, cont)
m5 = re.findall(patt5, cont)
m6 = re.findall(patt6, cont)
m7 = re.findall(patt7, cont)

print " Sun %2d\n Mon %2d\n Tue %2d\n Wed %2d\n Thu %2d\n Fri %2d\n Sat %2d \n" % \
      (len(m1), len(m2), len(m3), len(m4), len(m5), len(m6), len(m7))


