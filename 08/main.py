from functools import reduce

# O(n) solution in Python3 for finding 
# maximum sum of a subarray of size k
 
# Returns maximum sum in
# a subarray of size k.
def maxSum(arr, k):
	# k must be greater
	if (len(arr) < k):
		print("Invalid")
		return -1
	 
	# Compute sum of first
	# window of size k
	res = 0
	for i in range(k):
		res += arr[i]
	# indices of current best subarray
	start = 0
	end = k-1

	# Compute sums of remaining windows by
	# removing first element of previous
	# window and adding last element of 
	# current window.
	curr_sum = res
	for i in range(k, len(arr)):
	 
		curr_sum += arr[i] - arr[i-k]
		if curr_sum > res:
			end = i
			start = i-k+1

		res = max(res, curr_sum)
	maxSum = res
	maxProduct = reduce(lambda x, y : x*y, arr[start : end+1])
	return maxSum, maxProduct

def main():
	numbers = []
	with open("input.txt", 'r') as infile:
		for line in infile:
			numbers += [int(char) for char in line.strip()]

	print(maxSum(numbers, 13))
main()
