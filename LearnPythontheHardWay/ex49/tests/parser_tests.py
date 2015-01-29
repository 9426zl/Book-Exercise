from nose.tools import *
from ex49.parser import * 
from ex48.lexicon import *
from copy import deepcopy


# define the test list and the corresponding type list
test_word_list = [ scan("go north"), scan("kill the princess"), scan("the bear"),
					scan("door"), scan("south"), scan("123"), scan("go"), scan("at"),
					scan("the"), scan("IAS")]

test_word_type = ['verb', 'verb', 'stop', 'noun', 'direction', 'number', 'verb',
				'stop', 'stop', 'error']

test_expect_list = [('verb', 'go'), ('verb', 'kill'), ('stop', 'the'), ('noun', 'door'),
					('direction', 'south'),('number', 123), ('verb', 'go'), ('stop', 'at'),
					('stop', 'the'), ('error', 'IAS')]

list_len = len(test_word_list)


# define the peek test
def test_peek():

	test_word_list1 = deepcopy(test_word_list)
	test_peek_result = []

	for word in test_word_list1:
		test_peek_result.append(peek(word))

	assert_equal(test_peek_result, test_word_type)


# define the match test
def test_match():

	
	test_word_list1 = deepcopy(test_word_list)
	test_match_type = deepcopy(test_word_type)
	test_match_result = []
	i = 0

	for word in test_word_list1:
		test_match_result.append(match( word, test_match_type[i]))
		i += 1

	assert_equal(test_match_result, test_expect_list)


# define the skip test
def test_skip():

	test_word_list1 = deepcopy(test_expect_list)
	test_skip_list = [('verb', 'go'), ('verb', 'kill'), [], ('noun', 'door'),
					('direction', 'south'),('number', 123), ('verb', 'go'), [],
					[], ('error', 'IAS')]
	test_skip_result = []

	for word in test_word_list1:
		skip(word, 'stop')
		test_skip_result.append(word)

	assert_equal(test_skip_result, test_skip_list)
# def test_skip():
	# ''' test skip function '''
	# test_lists = deepcopy(test_word_list)
	# expected_lists1 = [scan("go north"), scan("kill the princess"), [],
					# scan("door"), scan("south"), scan("123"), scan("go"), [],
					# [], scan("IAS")]

	# for i in range(list_len):
		# test_list = test_lists[i]
		# expected_list = expected_lists1[i]
		# skip(test_list, 'stop')
		# assert_equal(test_list, expected_list)

	# test_list2 = [('error', 'error123')]
	# expected_list2 = []
	# skip(test_list2, 'error')
	# assert_equal(test_list2, expected_list2)





def test_parse_verb():
	pass


def test_parse_object():
	pass


def test_parse_subject():
	pass


def test_parse_sentence():
	pass

