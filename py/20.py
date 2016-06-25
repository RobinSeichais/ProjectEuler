#!/usr/bin/python

if __name__ == '__main__':
	print sum([int(x) for x in str(reduce(lambda x, y: x*y, range(2, 101)))])