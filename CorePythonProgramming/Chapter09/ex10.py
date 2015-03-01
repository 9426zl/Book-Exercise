import os, random, struct, string
from Tkinter import *
import tkMessageBox

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
        classChooseLabel = Label(self, text="Choose the Class: ")
        classChooseLabel.grid(column=0, row=0, columnspan=2, sticky=W)

        box_value = ["Savings", "Checking", "Money Market", "Certificate of Deposit"]
        self.var = StringVar()
        self.var.set(box_value[0])
        self.classChoosebox = OptionMenu(self, self.var, "Savings","Checking",\
                                         "Money Market","Certificate of Deposit")            # how to use box_value
        self.classChoosebox.grid(column=2, row=0, sticky='WE')

        expenLabel = Label(self, text="Expenditure: ")
        expenLabel.grid(column=0, row=1, columnspan=2, sticky=W)
        self.expenEntry = Entry(self)
        self.expenEntry.insert(1, 0)
        self.expenEntry.grid(column=2, row=1)

        incomeLabel = Label(self, text="Income:")
        incomeLabel.grid(column=0, row=2, columnspan=2, sticky=W)
        self.incomeEntry = Entry(self)
        self.incomeEntry.insert(1, 0)
        self.incomeEntry.grid(column=2, row=2)

        doneButton = Button(self, text="Done", command=self.savedetail)
        doneButton.grid(column=0, row=3, sticky='WE')

        backButton = Button(self, text="Back", command=self.withdrawact)
        backButton.grid(column=1, row=3, sticky='WE')
        backButton.grid(column=1, row=3, sticky='WE')

        showButton = Button(self, text="Show the estate", command=self.showitem)
        showButton.grid(column=2, row=3, sticky='WE')

    def savedetail(self):
        "define the function which saves the item of the account"
        self.msum = {"Savings": 0, "Checking": 0, "Money Market": 0,
                    "Certificate of Deposit": 0}
        kind = self.var.get()
        exp = float(self.expenEntry.get())
        inc = float(self.incomeEntry.get())
        self.msum[kind] = self.msum[kind] + inc - exp
        tkMessageBox.showinfo("Message", "The change has been changed into %s\nex:%5.2f in:%5.2f \
and the sum is:%6.2f" % (kind, exp, inc, self.msum[kind]))

    def withdrawact(self):
        "define the function which withdraws the action"
        kind = self.var.get()
        exp = float(self.expenEntry.get())
        inc = float(self.incomeEntry.get())
        self.msum[kind] = self.msum[kind] - inc + exp
        tkMessageBox.showinfo("Message", "The change has been withdraw %s\nex:%5.2f in:%5.2f \
and the sum is:%6.2f" % (kind, exp, inc, self.msum[kind]))

    def showitem(self):
        "define the funtion shows the whole account"
        pass



app = Application()
# Set the title of the GUI
app.master.title('Home Finances Manager')
# Main information Loop
app.mainloop()
