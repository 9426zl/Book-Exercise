
def dec_to_bin(n):
    return int(bin(n)[2:])

def dec_to_oct(n):
    return int(oct(n)[1:])

def dec_to_hex(n):
    return hex(n)[2:]

def dec_to_ascii(n):
    if n in range(32, 48) or \
        n in range(58, 64) or \
        n in range(91, 97) or \
        n in range(122, 128):
        symbol = [chr(n)]
        return symbol[0]
    else:
        return ''

in_bv = int(raw_input("Please entry begin value:"))
in_ev = int(raw_input("Please entry end value:"))
print "DEC     BIN     OCT     HEX     ASCII"
print "_"*40
for i in range(in_bv, in_ev+1):
    print "%-8s%-8s%-8s%-8s%-8s" % \
          (i, dec_to_bin(i),dec_to_oct(i),\
           dec_to_hex(i),dec_to_ascii(i))
