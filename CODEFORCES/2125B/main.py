import sys
from math import *
from collections import Counter

input = sys.stdin.readline

def solve():
	a, b, k = map(int, input().split())

	g = gcd(a, b)

	print(f"{ 1 if a // g <= k and b // g <= k else 2 }")

if __name__ == "__main__":
	for _ in range(int(input())):
		solve()

