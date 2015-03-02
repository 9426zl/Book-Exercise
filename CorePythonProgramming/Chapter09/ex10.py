import os, random, struct, string

from Tkinter import *
import tkMessageBox
import xlrd
import xlwt
from xlutils.copy import copy


"""Home Finances Application to manage savings, checking,
money market, certificate of deposit(CD), and similar
accounts."""

class Application(Frame):

    def __init__(self, master=None):
        Frame.__init__(self, master)
        self.grid()
        self.createwidgets()


    def createwidgets(self):
        "define the grid"
        self.classChooseLabel = Label(self, text="Choose the Class: ")
        self.classChooseLabel.grid(column=0, row=0, columnspan=2, sticky=W)

        self.box_value = ["Savings", "Checking", "Money Market", "Certificate of Deposit"]
        self.var = StringVar()
        self.var.set(self.box_value[0])
        self.classChoosebox = OptionMenu(self, self.var, "Savings", "Checking",\
                                         "Money Market", "Certificate of Deposit")            # how to use box_value
        self.classChoosebox.grid(column=2, row=0, sticky='WE')

        self.expenLabel = Label(self, text="Expenditure: ")
        self.expenLabel.grid(column=0, row=1, columnspan=2, sticky=W)
        self.expenEntry = Entry(self)
        self.expenEntry.grid(column=2, row=1)

        self.incomeLabel = Label(self, text="Income:")
        self.incomeLabel.grid(column=0, row=2, columnspan=2, sticky=W)
        self.incomeEntry = Entry(self)
        self.incomeEntry.grid(column=2, row=2)

        self.doneButton = Button(self, text="Done", command=self.savedetail)
        self.doneButton.grid(column=0, row=3, sticky='WE')

        self.backButton = Button(self, text="Back", command=self.withdrawact)
        self.backButton.grid(column=1, row=3, sticky='WE')
        self.backButton.grid(column=1, row=3, sticky='WE')

        self.showButton = Button(self, text="Show the estate", command=self.showitem)
        self.showButton.grid(column=2, row=3, sticky='WE')

        self.msum = {"Savings": 0, "Checking": 0, "Money Market": 0,
                     "Certificate of Deposit": 0}


    def savedetail(self):
        "define the function which saves the item of the account"
        kind = self.var.get()
        ind = int(self.box_value.index(kind))
        exp = self.expenEntry.get()
        inc = self.incomeEntry.get()

        if exp.isdigit():
            exp = float(exp)
        else:
            exp = 0
        if inc.isdigit():
            inc = float(inc)
        else:
            inc = 0

        self.msum[kind] = inc - exp
        tkMessageBox.showinfo("Message", "The change has been changed into %s\nex:%5.2f in:%5.2f \
and the sum is:%6.2f" % (kind, exp, inc, self.msum[kind]))
        self.expenEntry.delete(0, END)
        self.incomeEntry.delete(0, END)

        'Save to the xls'
        stfile = xlrd.open_workbook('HomeFinance.xls', formatting_info=True)
        r_sheet = stfile.sheet_by_index(0)
        r = r_sheet.nrows
        lin = 2*ind
        wb = copy(stfile)
        sheet = wb.get_sheet(0)
        if r == 3:
            totalval = float(self.msum[kind])
        else:
            totalval = r_sheet.cell(r-1, 9).value
        print totalval
        totalval += float(self.msum[kind])
        sheet.write(r, lin, inc)
        sheet.write(r, lin+1, exp)
        sheet.write(r, 8, float(self.msum[kind]))
        sheet.write(r, 9, totalval)
        wb.save('HomeFinance.xls')


    def withdrawact(self):
        "define the function which withdraws the action"
        kind = self.var.get()
        exp = float(self.expenEntry.get())
        inc = float(self.incomeEntry.get())
        self.msum[kind] = self.msum[kind] - inc + exp
        tkMessageBox.showinfo("Message", "The change has been withdraw %s\nex:%5.2f in:%5.2f \
and the sum is:%6.2f" % (kind, exp, inc, self.msum[kind]))
        self.expenEntry.delete(0, END)
        self.incomeEntry.delete(0, END)


    def showitem(self):
        "define the function shows the whole account"
        s = self.msum
        tkMessageBox.showinfo("Message", "Savings: %.2f\n Checking: %.2f\n \
Money Market: %.2f\n Certificate of Deposit: %.2f" % (s["Savings"], s["Checking"], s["Money Market"],
s["Certificate of Deposit"]))
        self.expenEntry.delete(0, END)
        self.incomeEntry.delete(0, END)


app = Application()
# Set the title of the GUI
app.master.title('Home Finances Manager')
# Main information Loop
app.mainloop()