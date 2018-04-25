# Test code to make sure Go version is working as expected
# This is slow, better solution found on geeks for geeks
import math

def prime_fac(n):
	prime_fac = []
	i = 2
	while i < n:
		while n % i == 0:
			prime_fac.append(i)
			n /= i
		i += 1
	return len(prime_fac)

def main():
	n = 6008
	n = 600851475143
	print(prime_fac(7))
	print(prime_fac(53))
	print(prime_fac(100))

	other_factor = 2
	while other_factor < n//2:
		if n % other_factor == 0 and prime_fac(n//other_factor) == 0:
			print(n//other_factor)
			break
		other_factor += 1
main()
