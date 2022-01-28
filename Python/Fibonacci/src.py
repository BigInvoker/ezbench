import time

def recFib(num):
    if (num <= 2):
        return 1
    return recFib(num - 1) + recFib(num - 2)

step = 50

start_time = time.time()

recFib(step)

print("Execution time: %s" % (time.time() - start_time))

