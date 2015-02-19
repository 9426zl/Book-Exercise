state = False
while not state:
    in_num = int(raw_input("Enter a number in 0 to 100:"))
    if in_num in range(0, 101):
        print "Done"
        state = True
    else:
        print "Error"