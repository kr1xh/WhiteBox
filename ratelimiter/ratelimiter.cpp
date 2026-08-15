// Know your limits. (Easy version)
// Difficulty: Unknown
// Category: BasicsData Structures +1 Akuna Capital
// Topics: BasicsData Structures +1 Akuna Capital, Basics, Data Structures, +1, Auto, Done, Explanation, Accepted, Acceptance, Next up, Normal 3, Python 3.12, Whiteboard, QUESTS, Resets in 20h 18m, 120 / 270 XP · 200 / 450 coins, 0/1, 10s, 256 MB, Jan 1, 2024, 28.0ms
// Source: https://whitebox.ac/problems/ratelimiter
// Pushed by Whitebox→GitHub Extension
_, cnt = self.events.popleft()
            self.total -= cnt
    def _expire(self):
        limit = self.current_time - self.seconds
        while self.events and self.events[0][0] <= limit:
        self.current_time = 0

        self.events = deque()
        self.total = 0
    def __init__(self, seconds: int, capacity: int):
        self.seconds = seconds
        self.capacity = capacity

class RateLimiter:
from collections import deque