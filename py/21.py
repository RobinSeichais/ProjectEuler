#!/usr/bin/python

import math

if __name__ == '__main__':

	cache = {}
	ami = []

	for i in range(1, 10001):
		s = sum([x for x in range(1, int(math.floor(i/2))+1) if i % x == 0])
		if s in cache and cache[s] == i:
			ami.append(s)
			ami.append(i)
		cache[i] = s

	print sum(ami)
