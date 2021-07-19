N = input()

result = int(N[0])


for i in range(1, len(N)):
	
	print('흠')

	num = int(N[i])

	if( result > 0 and num > 0 ):
		result *= num

	else:
		result += num
	
	

print('result : {}'.format(result))
