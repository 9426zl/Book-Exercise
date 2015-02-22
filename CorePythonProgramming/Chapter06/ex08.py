#! usr/bin/env python
"Enter an integer value and return \
 the equivalent English text"

import string

def integer_to_text(num):
    
    nums = string.digits
    text_out = ""
    lens = len(num)
    text_list = ["zero", "one", "two", "three", "four",
                "five", "six", "seven", "eight", "nine"]
    
    for num_s in num[:]:
        if num_s not in nums:
            print "Invalid Enter"
            return None
    
    for n in range(lens):
        if n == 0:
            text_out = text_out + text_list[int(num[n])]
        else:
            text_out = text_out + "-" + text_list[int(num[n])]
    print "The English text: %s" % text_out
    

while True:

    num_in = raw_input("Please enter an integer value and x to quit:")
    if num_in == 'x':
        break
    else:
        integer_to_text(num_in)


