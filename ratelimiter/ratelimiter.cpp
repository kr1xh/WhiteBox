// Know your limits. (Easy version)
// Difficulty: Unknown
// Category: BasicsData Structures +1 Akuna Capital
// Topics: BasicsData Structures +1 Akuna Capital, Basics, Data Structures, +1, Auto, Done, Explanation, Accepted, Acceptance, Next up, Normal 3, Python 3.12, Whiteboard, Executing..., QUESTS, Resets in 22h 22m, 120 / 270 XP · 200 / 450 coins, 0/1, 10s, 256 MB, Jan 1, 2024
// Source: https://whitebox.ac/problems/ratelimiter
// Pushed by Whitebox→GitHub Extension
while self.events and self.events[0][0] <= limit:
            _, cnt = self.events.popleft()
            self.total -= cnt
    def _expire(self):
        limit = self.current_time - self.seconds
        self.current_time = 0

        self.capacity = capacity
        self.events = deque()
        self.total = 0
    def __init__(self, seconds, capacity):
        self.seconds = seconds
class RateLimiter:

from collections import deque