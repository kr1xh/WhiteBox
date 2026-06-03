# Put a ring on it.
# Difficulty: Easy 1
# Category: Basics
# Topics: Basics, Data Structures, Auto, Claim, Example 1, Input:, Output:, Accepted, Acceptance, Next up, Python 3.12, Input, Expected Output, QUESTS, Resets in 1h 44m, 0 / 330 XP · 0 / 550 coins, 0/1, 10s, 256 MB, Jan 1, 2024, Google
# Source: https://whitebox.ac/problems/ringbuffer
# Pushed by Whitebox→GitHub Extension
import sys

class RingBuffer:
    def __init__(self, capacity):
        self.capacity = capacity
        self.buffer = [None] * capacity
        self.start = 0 
        self.size = 0

    def push(self, event):
        if self.size < self.capacity:
            idx = (self.start + self.size) % self.capacity
            self.buffer[idx] = event
            self.size += 1
        else:
            self.buffer[self.start] = event