def decimalToBinary(testVariable) :
	if testVariable == 1:
		return [1]
	elif testVariable == 0:
		return [0]

	ans = []
	ans = decimalToBinary(testVariable // 2)
	ans.append(testVariable % 2)
	return ans


testVariable = 64
print(decimalToBinary(testVariable))