def scan(input_lines):
	
	words = input_lines.split()
	r = []
	
	for word in words:
		r.append(get_tuple(word))
	return r

directions = ('north', 'south', 'east', 'west', 
			'down', 'up', 'left', 'right', 'back')
verbs = ('go', 'stop', 'kill', 'eat', 'open')
stop_words = ('the', 'in', 'of', 'from', 'at', 'it', 'to')
nouns = ('door', 'bear', 'princess', 'cabinet')

def get_tuple(word):
	test_word = word.lower()
	
	if test_word in directions:
		return ('direction', word)
	elif test_word in verbs:
		return ('verb', word)
	elif test_word in stop_words:
		return ('stop', word)
	elif test_word in nouns:
		return ('noun', word)
	elif test_word.isdigit():
		return ('number', int(word))
	else:
		return('error', word)



