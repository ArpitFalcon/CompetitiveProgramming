def decimalToBinary(testVariable) :
	if testVariable <= 1:
		return str(testVariable)

	return decimalToBinary(testVariable // 2) + decimalToBinary(testVariable % 2)


testVariable = 10
print(decimalToBinary(testVariable))