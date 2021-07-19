N = input('input N: ')
K = input('input K: ')

N = int(N)
K = int(K)

first = 0
second = 0

while N != 1:
	
	if (N // K) > 1:
		first += 1
		N //= K

	else:
		second += 1
		N -= 1

print('first case count : {}'.format(first))
print('second case  count : {}'.format(second))
print('N : {}'.format(N))
