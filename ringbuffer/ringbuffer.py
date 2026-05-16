# Put a ring on it.
# Difficulty: Easy 1
# Category: Basics
# Topics: Basics, Data Structures, Hint, Review, Explain, Done, Auto, Mark solved, Claim, Example 1, Input:, Output:, Accepted, Acceptance, Next up, Python 3.12, QUESTS, Resets in 13h 50m, 30 / 240 XP · 50 / 400 coins, 0/1, 10s, 256 MB, Jan 1, 2024, Google
# Source: https://whitebox.ac/problems/ringbuffer
# Pushed by Whitebox→GitHub Extension
print(" ".join(result))

lines = sys.stdin.read().strip().split('\n')

rb = None

for line in lines:
    parts = line.split()

    if parts[0] == "RingBuffer":
        rb = RingBuffer(int(parts[1]))
    elif parts[0] == "push":
        rb.push(parts[1])
    elif parts[0] == "snapshot":
        rb.snapshot()