

import time
start_time = time.time()

ti = 5000
tj = 20
p = ti * tj
s = 0

for i in range(0,ti):
    for j in range(0, tj):
        r = s * 100 / p
        print(r)
    s = s + tj

print("Execution time: %s" % (time.time() - start_time))