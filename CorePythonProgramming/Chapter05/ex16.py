"Home Finance"
balance = raw_input("Enter opening balance:")
payment = raw_input("Enter monthly payment:")

ba = float(balance)
pa = float(payment)

print"            Amount      Remaining"
print"Pymt#        Paid        Balance"
print"_____       ______      __________"
pa1 = 0
py = 0
i = 2
while ba >=0 and i >= 1:
    print "%3s         $%5s       $%6s" % (py, pa1, ba)
    py += 1
    if ba >= pa:
        ba = ba - pa
        pa1 = pa
    else:
        pa1 = ba
        ba = 0
        i -= 1 