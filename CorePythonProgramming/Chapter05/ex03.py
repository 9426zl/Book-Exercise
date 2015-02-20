
'Return the evaluation of the input score'

def Judge_Score(sc):
    if isfloat(sc) or isint(sc):
        sc = int(float(sc))
        if sc in range(90, 101):
            print "The score is A Class."
        elif sc in range(80, 90):
            print "The score is B Class."
        elif sc in range(70, 80):
            print "The score is C Class."
        elif sc in range(60, 70):
            print "The score is D Class."
        else:
            print "The score is F Class."
    else:
        print "Invalid Input."

def isfloat(x):
    try:
        a = float(x)
    except ValueError:
        return False
    else:
        return True

def isint(x):
    try:
        a = float(x)
        b = int(a)
    except ValueError:
        return False
    else:
        return a == b

while True:
    sc = raw_input("Enter the score and press x to quit:")
    if sc == 'x':
        break
    else:
        Judge_Score(sc)
