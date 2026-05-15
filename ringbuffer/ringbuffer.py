# Put a ring on it.
# Difficulty: Easy
# Category: Basics
# Topics: Basics, Data Structures, Done, Auto, Mark solved, Easy 1, Example 1, Input:, Output:, Accepted, Acceptance, Similar, Easy 1.5, Easy+ 2, Easy+ 2.5, Python 3.12, NORMAL, Execute, Submit, INPUT:, EXPECTED:, OUTPUT:, QUESTS, Resets in 12h 42m, 30 / 285 XP · 50 / 500 coins, 0/5
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