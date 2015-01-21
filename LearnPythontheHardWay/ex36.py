def small_town():
	print("You've got to a small town.")
	dead("You're ambushed by the enemy and you died.")

def Tiger_encount():
	print "You've encountered with Tiger tank."
	print "What will you do."
	
	next = raw_input("> ")
	
	if next == "fight with them":
		dead("You are a real warrior,You died for your country.")
	elif next == "flee":
			small_town()
	else:
		print("I don't known what you say.")
		Tiger_encount()
	

def Allay_encount():
	print "You find the your allay army."
	print "Do you want march with them? Yes or No?"
	
	next = raw_input("> ")
	
	if next == "Yes":
		small_town()
	elif next == "No":
		accomplish()
	else:
		print "Please answer Yes or No."
		Allay_encount()

def accomplish():
	print "You're a real warrior."
	print "You've fought your way out."
	
	exit(0)

def dead(order):
	print order

def start():
	print "Welcome to the Fury game!"
	print "You're a tanker of US Army."
	print "You're in the Normandy area."
	print "Let's start the game."
	print "There is a way to your right and left."
	print "Which one do you take?"
	
	next = raw_input("> ")
	
	if next == "right":
		Tiger_encount()
	elif next == "left":
		Allay_encount()
	else:
		dead("You should pick a way to find the German.")
	
	
start()
	