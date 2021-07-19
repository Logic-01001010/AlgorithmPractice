#-*- encoding: utf-8 -*-


n = 1260
count = 0

array = [500, 100, 50, 10]

for coin in array:

	count += n // coin
	n %= coin

print('총 거스름 돈의 개수 : {}'.format(count) )
