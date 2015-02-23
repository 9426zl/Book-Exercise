

def sort_list(keys, stolist):
    dict_key = {"S": 0, "A": 1, "P": 2, "C": 3}
    n = dict_key(keys)
    key_s = []
    value_s = []
    for elist in stolist:
        key_s.append(elist[n])
        del elist[n]
        value_s.append(elist)
    stolist_s = zip(key_s, value_s)
    sorted_list = sorted(stolist_s.items(), key=operator.itemgetter(0))
    print sorted_list


total_list = []

while True:
    cur_list = raw_input("Entry the info and entry X to stop entry:")
    if cur_list != 'x':
        total_list.append(cur_list.split())
    else:
        break

print "Your Entry is: "
print "StockSerial  Amount  PurchPrice  CurPrice"
for eachlist in total_list:
    print "%11s  %6s  %10s  %8s" %\
          (eachlist[0],eachlist[1],eachlist[2],eachlist[3])

key_word = raw_input("Please entry the key word:")
sort_list(key_word, total_list)