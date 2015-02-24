
import string

rnum = int(raw_input("Please entry the rotated number:"))
sein = raw_input("Please entry the serial:")

rcase = []
resu = ""
lcase = string.lowercase[rnum:25]+string.lowercase[0:rnum-1]
ucase = string.uppercase[rnum:25]+string.uppercase[0:rnum-1]
tcase = list(lcase + ucase)
utcase = list(string.lowercase + string.uppercase)
refcase = dict(zip(utcase, tcase))

for item in sein:
    if item.isalpha():
        resu += refcase[item]
    else:
        resu += item

print "The rotated result is:%s" % resu