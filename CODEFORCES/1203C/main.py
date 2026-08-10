import sys
from collections import Counter
from math import *
input = sys.stdin.readline

def find_all_factors(n):
	allFactor = set()
	for i in range(1, isqrt(n) + 1):
		if n % i == 0:
			allFactor.add(i)
			allFactor.add(n // i)

	return allFactor


def solve():
	n = int(input())
	inp = list(map(int, input().split()))

	listCounter = Counter()
	for i in inp:
		for i in find_all_factors(i):
			listCounter[i] += 1

	result = [factor for factor, numb in listCounter.items() if numb == n]
	print(len(result))


if __name__ == "__main__":
	solve()