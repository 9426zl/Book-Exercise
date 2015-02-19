in_sum = 0
# for
for i in range(5):
    in_sum += int(raw_input('enter a number: '))


# while 
i = 0
while i < 5:
    in_sum += int(raw_input('enter a number: '))
    i = i + 1

ave_sum = in_sum / 5.0
print ave_sum