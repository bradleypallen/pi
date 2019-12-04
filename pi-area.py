import math, random

n = 10000000
hits = 0

for i in range(n):
    d = math.pow(random.random(),2.)+math.pow(random.random(),2.)
    if d <= 1.0:
        hits += 1

print(f"pi = {(float(hits)/float(n))*4.}")
