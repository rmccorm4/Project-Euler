n = int(input("Enter dimension of matrix: "))

numerator = 1
# n is even
if n % 2 == 0:
	for k in range(1, n, 2):
		numerator *= (2*n - k)
# n is odd
else:
	for k in range(1, n-1, 2):
		numerator *= (2*n - k)

numerator *= 2**((n+1)//2)

denominator = 1
for k in range(1, (n//2)+1):
		denominator *= k

print(int(numerator/denominator))
