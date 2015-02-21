
def Fah_to_Cel(fa):
    fa = float(fa)
    ce = (fa - 32) * (5.0 / 9.0)
    print "The Celsius Temperature is %s." % ce

def Cel_to_Fah(ce):
    ce = float(ce)
    fa = ce * (9.0 / 5.0) + 32
    print "The Fahrenheit Temperature is %s." % fa

Tep = raw_input("Enter the number to choose what you want\n \
1: Fahrenheit Temperature to Celsius Temperature;\n \
2: Celsius Temperature to Fahrenheit Temperature.")
if Tep == 1:
    fa = raw_input("Please enter the Fahrenheit Temperature:")
    Fah_to_Cel(fa)
else:
    ce = raw_input("Please enter the Celsius Temperature:")
    Cel_to_Fah(ce)