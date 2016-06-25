#!/usr/bin/python

leap_years_month_duration = [31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
non_leap_years_month_duration = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]

if __name__ == '__main__':
	
	is_leap_year = lambda y: (y%4 == 0) and ((y % 100 != 0) or (y % 400 == 0))
	
	n_sun = 0
	days = 0

	for y in range(1900, 2001):

		if is_leap_year(y):
			month_d = leap_years_month_duration
		else:
			month_d = non_leap_years_month_duration

		for d in month_d:
			if y >= 1901 and days % 7 == 6:
				n_sun += 1
			days += d

	print n_sun