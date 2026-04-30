import sys

class RingBuffer:
    def __init__(self, capacity):
        self.capacity = capacity
        self.buffer = [None] * capacity
        self.start = 0 
        self.size = 0

    def push(self, event):
        if self.size < self.capacity:
            idx = (self.start + self.size) % self.capacity
            self.buffer[idx] = event
            self.size += 1
        else:
            self.buffer[self.start] = event
            self.start = (self.start + 1) % self.capacity
        print("null")

    def snapshot(self):
        result = []
        for i in range(self.size):
            idx = (self.start + i) % self.capacity
            result.append(self.buffer[idx])
        print(" ".join(result))

lines = sys.stdin.read().strip().split('\n')

rb = None

for line in lines:
    parts = line.split()

    if parts[0] == "RingBuffer":
        rb = RingBuffer(int(parts[1]))
    elif parts[0] == "push":
        rb.push(parts[1])
    elif parts[0] == "snapshot":
        rb.snapshot()
