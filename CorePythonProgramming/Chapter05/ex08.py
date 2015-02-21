import math
def sqcube():
    s = float(raw_input('enter length of one side: '))
    print 'the area is:', s ** 2., '(units squared)'
    print 'the volume is:', s ** 3., '(cubic units)'
def cirsph():
    r = float(raw_input('enter length of radius: '))
    print 'the area is:', math.pi * (r ** 2.), \
            '(units squared)'
    print 'the volume is:', (4. / 3.) * math.pi * (r ** \
            3.), '(cubic units)'
sqcube()
cirsph()