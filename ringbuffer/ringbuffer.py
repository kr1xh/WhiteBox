# Put a ring on it.
# Difficulty: Easy 1
# Category: Basics
# Topics: Basics, Data Structures, Done, Auto, Mark solved, Claim, Example 1, Input:, Output:, Accepted, Acceptance, Next up, Python 3.12, Input, Expected Output, Custom Test Cases:, QUESTS, Resets in 13h 49m, 30 / 240 XP · 50 / 400 coins, 0/1, 10s, 256 MB, Jan 1, 2024, Google
# Source: https://whitebox.ac/problems/ringbuffer
# Pushed by Whitebox→GitHub Extension
self.buffer[idx] = event
            self.size += 1
        if self.size < self.capacity:
            idx = (self.start + self.size) % self.capacity

    def push(self, event):
        self.start = 0 
        self.size = 0
    def __init__(self, capacity):
        self.capacity = capacity
        self.buffer = [None] * capacity

class RingBuffer:
import sys