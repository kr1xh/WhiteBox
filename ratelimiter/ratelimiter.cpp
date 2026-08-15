// Know your limits. (Easy version)
// Difficulty: Unknown
// Category: BasicsData Structures +1 Akuna Capital
// Topics: BasicsData Structures +1 Akuna Capital, Basics, Data Structures, +1, Auto, Done, Explanation, Accepted, Acceptance, Next up, Normal 3, Python 3.12, Whiteboard, QUESTS, Resets in 20h 21m, 120 / 270 XP · 200 / 450 coins, 0/1, 10s, 256 MB, Jan 1, 2024, 22.0ms
// Source: https://whitebox.ac/problems/ratelimiter
// Pushed by Whitebox→GitHub Extension
def add(self, count, timestamp):
            self.total -= cnt

        while self.events and self.events[0][0] <= limit:
            _, cnt = self.events.popleft()

    def _expire(self):
        limit = self.current_time - self.seconds
        self.total = 0
        self.current_time = 0
        self.capacity = capacity
        self.events = deque()
    def __init__(self, seconds, capacity):
        self.seconds = seconds

class RateLimiter: