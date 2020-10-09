from collections import Counter
 
def dsRequired(s, t):
	# If Suffix Automaton
	temp = 0
	for i in range(len(s)):
		if temp < len(t) and s[i] == t[temp]:
			temp+=1
	if temp == len(t):
		return "automaton"
 
	# If array is required
	dict_s = dict(Counter(list(s)))
	dict_t = dict(Counter(list(t)))
	
	if(dict_s == dict_t):
	    return "array"
	
	flag = True
	for ch, freq in dict_t.items():
	    if ch in dict_s.keys() and dict_s[ch] < freq:
	        flag = False
	    if ch not in dict_s.keys():
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