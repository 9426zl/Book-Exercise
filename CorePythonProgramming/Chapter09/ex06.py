"""Compare two text files, if they are different,
give the line and column numbers in the files where
the difference occurs."""

def findDiff(file1, file2):
    """find the position of the
    first place of two files."""
    f_len1 = len(file1)
    f_len2 = len(file2)
    f_len = min(f_len1, f_len2)
    if f_len1 != f_len2:
        s1 = 1
    else:
        s1 = 0

    for fn in range(0, f_len):
        l_len1 = len(file1[fn])
        l_len2 = len(file2[fn])
        l_len = min(l_len1, l_len2)
        if l_len1 != l_len2:
            s2 = 1
        else:
            s2 = 0
        for ln in range(0, l_len):
            if cmp(file1[fn][ln], file2[fn][ln]):
                print "The first different position is %d line %d word" %\
                      (fn+1, ln+1)
                return None
        if s2 == 1:
            print "The first different position is %d line %d word" %\
                    (fn+1, l_len+1)
            return None
    if s1 == 1:
        print "The first different position is %d line 1st word" %\
                fn+1
    else:
        print "The files input is exact the same."



def main():

    p1 = raw_input("Entry the path of first file:")
    p2 = raw_input("Entry the path of first file:")
    f1 = open("a.txt")
    f2 = open("b.txt")
    fe1 = f1.readlines()
    fe2 = f2.readlines()
    f1.close()
    f2.close()

    findDiff(fe1, fe2)


if __name__ == "__main__":
    main()