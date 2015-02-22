#! usr/bin/env python
'''function atoc, take string and 
   transform it into complex'''
   
#import 

def atoc(str_in):
    lens = len(str_in)

    for i,ch in enumerate(str_in[1:]):
        if ch in "+-":
            num_out = complex(float(str_in[:i+1]), float(str_in[i+1:-1]))

    print num_out


str_in = raw_input("Enter the string:")
atoc(str_in)
