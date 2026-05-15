# Put a ring on it.
# Difficulty: Easy 1
# Category: Basics
# Topics: Basics, Data Structures, Done, Auto, Mark solved, Example 1, Input:, Output:, Accepted, Acceptance, Similar, Python 3.12, INPUT:, EXPECTED:, OUTPUT:, QUESTS, Resets in 12h 32m, 30 / 285 XP · 50 / 500 coins, 0/5, 10s, 256 MB, Jan 1, 2024, Google, 950.0ms, 51.2 MB
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