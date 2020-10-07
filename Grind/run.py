from collections import Counter

def dsRequired(s, t):
	# If Suffix Automaton
	print('called')
	if t in s:
		return "automaton"

	# If array is required
	dict_s = dict(Counter(list(s)))
	dict_t = dict(Counter(list(t)))
	
	if(dict_s == dict_t):
	    return "array"
	
	print(dict_s)
	print(dict_t)
	
	flag = True
	for key, value in dict_t:
	    print(key,value)
	    if dict_s[key] != value:
	        flag = False
	
	if flag:
	    return "both"
	else:
	    return "need tree"


def main():
	s = input()
	t = input()

	print(dsRequired(s, t))


if __name__ == '__main__':
	main()
