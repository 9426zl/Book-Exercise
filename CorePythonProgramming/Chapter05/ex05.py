"Count the amount of coin"

mone = raw_input("Enter the number:")
mone1 = int(float(mone) * 100)
num_quarter = mone1 / 25
num_dime = (mone1 % 25) / 10
num_nickel = ((mone1 % 25) % 10) / 5
num_penny = ((mone1 % 25) % 10) % 5

if num_quarter != 0:
    if (num_dime == 0) and (num_nickel == 0) and (num_penny == 0):
        print "%s quarter(s)" % num_quarter,
    else:
        print "%s quarter(s)," % num_quarter,
        if num_dime != 0:
            if (num_nickel == 0) and (num_penny == 0):
                print "and %s dime(s)" % num_dime,
            else:
                print "%s dime(s)," % num_dime,
                if num_nickel != 0:
                    if num_penny == 0:
                        print "and %s nickel(s)" % num_nickel,
                    else:
                        print "% nickel(s)," % num_nickel,
                        print " and %s penny(s)" % num_penny,
                else:
                    if num_penny != 0:
                        print " and %s penny(s)" % num_penny,
        else:
            if num_nickel != 0:
                if num_penny == 0:
                    print "and %s nickel(s)" % num_nickel,
                else:
                    print "% nickel(s)," % num_nickel,
                    print " and %s penny(s)" % num_penny,
            else:
                if num_penny != 0:
                    print " and %s penny(s)" % num_penny,
else:
    if num_dime != 0:
        if (num_nickel == 0) and (num_penny == 0):
            print "%s dime(s)" % num_dime,
        else:
            print "%s dime(s)," % num_dime,
            if num_nickel != 0:
                if num_penny == 0:
                    print "and %s nickel(s)" % num_nickel,
                else:
                    print "% nickel(s)," % num_nickel,
                    print " and %s penny(s)" % num_penny,
            else:
                if num_penny != 0:
                    print " and %s penny(s)" % num_penny,
    else:
        if num_nickel != 0:
            if num_penny == 0:
                print "%s nickel(s)" % num_nickel,
            else:
                print "% nickel(s)," % num_nickel,
                print " and %s penny(s)" % num_penny,
        else:
            if num_penny != 0:
                print "%s penny(s)" % num_penny,