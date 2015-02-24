
def isperfect(num):
    for n in range(1, num):
        sum_num = 0
        factor_list = find_factor(n)
        sum_num = sum(factor_list)
        if n == sum_num:
            print "%s is perfect." % n
    print "The search is over."


def find_factor(num1):
    fac = []
    for i in range(1, num1):
        if num1 % i == 0:
            fac.append(i)
    return fac

num = int(raw_input("Please entry the upper limit:"))
isperfect(num)