from build.SumFunction import *
import time

start = time.time()
for i in range(1000):
    print(sum(2.3,5.2))
end = time.time()

print(end - start)