"""Prompt for a number N and file F,
 and display the first N lines of F."""

def read_line(num, infiles):
    """Read lines according to the
    entry."""
    for i in range(0, num):
        print infiles[i][:]


def main():
    n = int(raw_input("Please the line number:"))
    fpath = raw_input("Please entry the file path:")

    files = open(fpath)
    in_files = files.readlines()
    files.close()
    read_line(n, in_files)

if __name__ == "__main__":
    main()