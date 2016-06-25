#!/usr/bin/python

ints = {
	0: 'zero',
	1: 'one',
	2: 'two',
	3: 'three',
	4: 'four',
	5: 'five',
	6: 'six',
	7: 'seven',
	8: 'eight',
	9: 'nine'
}
teens = {
	10: 'ten',
	11: 'eleven',
	12: 'twelve',
	13: 'thirteen',
	14: 'fourteen',
	15: 'fifteen',
	16: 'sixteen',
	17: 'seventeen',
	18: 'eighteen',
	19: 'nineteen'
}
dozens = {
	20: 'twenty',
	30: 'thirty',
	40: 'fourty',
	50: 'fifty',
	60: 'sixty',
	70: 'seventy',
	80: 'eighty',
	90: 'ninty'
}

def int2letter(i):
	res = ''
	u = i
	if i >= 1000:
		n = i / 1000
		res += (ints[n] + 'thousand')
		i -= n * 1000
	if i >= 100:
		n = i / 100
		res += (ints[n] + 'hundred')
		i -= n * 100
	if i > 0:
		if len(res) > 0:
			res += 'and'
		if i >= 20:
			n = i%10
			i -= n
			res += dozens[i]
			if n > 0:
				res += ints[n]
		elif i in teens:
			res += teens[i]
		elif i in ints:
			res += ints[i]
	print res
	return len(res)

if __name__ == '__main__':
	r = 0
	for i in range(1, 1001):
		r += int2letter(i)
	print r
