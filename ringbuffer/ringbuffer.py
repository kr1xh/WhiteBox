# Put a ring on it.
# Difficulty: Easy 1
# Category: Basics
# Topics: Basics, Data Structures, Done, Auto, Mark solved, Claim, Example 1, Input:, Output:, Accepted, Acceptance, Next up, Python 3.12, Input, Expected Output, Custom Test Cases:, QUESTS, Resets in 13h 50m, 30 / 240 XP · 50 / 400 coins, 0/1, 10s, 256 MB, Jan 1, 2024, Google
# Source: https://whitebox.ac/problems/ringbuffer
# Pushed by Whitebox→GitHub Extension
self.size += 1
            idx = (self.start + self.size) % self.capacity
            self.buffer[idx] = event
    def push(self, event):
        if self.size < self.capacity:
        self.size = 0

        self.start = 0 
        else:
            self.buffer[self.start] = event
            self.start = (self.start + 1) % self.capacity
        print("null")

    def snapshot(self):
        result = []