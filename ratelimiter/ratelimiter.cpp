// Know your limits. (Easy version)
// Difficulty: Unknown
// Category: BasicsData Structures +1 Akuna Capital
// Topics: BasicsData Structures +1 Akuna Capital, Basics, Data Structures, +1, Auto, Done, Explanation, Accepted, Acceptance, Next up, Normal 3, Python 3.12, Whiteboard, QUESTS, Resets in 20h 20m, 120 / 270 XP · 200 / 450 coins, 0/1, 10s, 256 MB, Jan 1, 2024, 22.0ms
// Source: https://whitebox.ac/problems/ratelimiter
// Pushed by Whitebox→GitHub Extension
def add(self, count, timestamp):
        self.current_time = timestamp
        self._expire()

        available = self.capacity - self.total
        add_count = min(count, available)

        if add_count == 0:
            return

        if self.events and self.events[-1][0] == timestamp:
            t, c = self.events.pop()
            self.events.append((t, c + add_count))
        else:
            self.events.append((timestamp, add_count))

        self.total += add_count