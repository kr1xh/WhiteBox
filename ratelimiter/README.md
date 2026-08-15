# Know your limits. (Easy version)

**Difficulty:** Unknown
**Topics:** `BasicsData Structures +1 Akuna Capital` | `Basics` | `Data Structures` | `+1` | `Auto` | `Done` | `Explanation` | `Accepted` | `Acceptance` | `Next up` | `Normal 3` | `Python 3.12` | `Whiteboard` | `QUESTS` | `Resets in 20h 21m` | `120 / 270 XP · 200 / 450 coins` | `0/1` | `10s` | `256 MB` | `Jan 1, 2024` | `22.0ms`

---

Statement
This is the easy version of RateLimiter. The only difference between this and the hard version are the constraints. Solving one problem does not guarantee solving the other.
Implement RateLimiter, which tracks a bounded number of events in a rolling time window.
Constructor  Signature
RateLimiter(seconds, capacity)
- seconds defines the length of the rolling time window.
- capacity is the maximum number of events that may exist within the window at any moment.
- At all times, the RateLimiter should only account for events whose timestamps fall within the most recent seconds
Methods  Signature
add(count, timestamp)
- Adds count new events occurring at time timestamp.
- If adding all count events would cause the total number of active events in the window to exceed capacity, only add as many as possible and discard the remainder.
- All events added by a single call to add are considered to occur at the same instant.
- You may assume calls to add are made with non-decreasing timestamps.
- Calls to add should not return anything.
Signature
check()
- Returns the number of events currently within the active time window.

## Notes

- Events expire automatically once they fall outside the time window.
- The implementation should correctly handle multiple additions at the same timestamp.
- No assumptions are made about how events are stored internally.

## Constraints

- - 1
- ≤
- 1≤ count
- ≤
- 100
- ≤100
- - 1
- ≤
- 1≤ seconds, capacity, timestamp
- ≤
- 1000
- ≤1000
- - At most
- 1000
- 1000 calls will be made to RateLimiter.
- - timestamp for each event called sequentially will be in non-decreasing order.  Examples  Example 1 Input
- RateLimiter 3 4
- add 6 7
- check

## Output

```
null
null
4
Explanation
add() only adds 4 elements out of the 6 because the RateLimiter has a capacity of 4.
Example 2 Input
RateLimiter 3 4
add 1 1
add 1 6
check
```

## Output

```
null
null
null
1
Explanation
The first call to add() adds an element at timestamp 1, and the second call to add() adds an element at timestamp 6. Because the first event now falls outside the time window, it is discarded.
```

## Source

[View on Whitebox](https://whitebox.ac/problems/ratelimiter)

## Solution

See [`ratelimiter.cpp`](./ratelimiter.cpp) for the Python implementation.
