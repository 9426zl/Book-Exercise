"""Extract module attribute information"""

def extr_module_info(mn):

    print dir(mn)


def main():
    module_name = raw_input("Entry the module name:")
    extr_module_info(module_name)

if __name__ == "__main__":
    main()
