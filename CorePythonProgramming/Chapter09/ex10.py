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
        self.classChooseLabel = Label(self, text="Choose the Class: ")
        self.classChooseLabel.grid(column=0, row=0, columnspan=2, sticky=W)

        box_value = ["Savings","Checking","Money Market","Certificate of Deposit"]
        var = StringVar()
        var.set(box_value[0])
        self.classChoosebox = OptionMenu(self, var, "Savings","Checking",\
                                         "Money Market","Certificate of Deposit")            # how to use box_value
        self.classChoosebox.grid(column=2, row=0, sticky='WE')

        self.expenLabel = Label(self, text="Expenditure: ")
        self.expenLabel.grid(column=0, row=1, columnspan=2, sticky=W)
        self.expenEntry = Entry(self)
        self.expenEntry.grid(column=2, row=1)

        self.incomeLabel = Label(self, text="Income:")
        self.incomeLabel.grid(column=0, row=2, columnspan=2, sticky=W)
        self.incomeEntry = Entry(self)
        self.incomeEntry.grid(column=2, row=2)

        self.doneButton = Button(self, text="Done")
        self.doneButton.grid(column=0, row=3, sticky='WE')
        self.backButton = Button(self, text="Back")
        self.backButton.grid(column=1, row=3, sticky='WE')
        self.backButton.grid(column=1, row=3, sticky='WE')
        self.showButton = Button(self, text="Show the estate")
        self.showButton.grid(column=2, row=3, sticky='WE')

app = Application()
# Set the title of the GUI
app.master.title('Home Finances Manager')
# Main information Loop
app.mainloop()
