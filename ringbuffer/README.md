# Put a ring on it.

**Difficulty:** Easy 1
**Topics:** `Basics` | `Data Structures` | `Done` | `Auto` | `Mark solved` | `Example 1` | `Input:` | `Output:` | `Accepted` | `Acceptance` | `Similar` | `Python 3.12` | `Executing...` | `QUESTS` | `Resets in 12h 33m` | `30 / 285 XP · 50 / 500 coins` | `0/5` | `10s` | `256 MB` | `Jan 1, 2024` | `Google`

---

Implement RingBuffer, a fixed-capacity ring buffer for events. The buffer stores events in insertion order and automatically drops the oldest event when full.
This problem focuses on stateful component behavior and clear policy enforcement rather than algorithmic tricks.

## Constructor

```
RingBuffer(capacity)
```

- Initializes an empty buffer with a maximum capacity of capacity. - capacity is guaranteed to be a positive integer.

## Methods

```
push(event)
```

- Event is a string type. - Inserts a new event into the buffer. - If the buffer is already full, the oldest event is dropped before inserting the new one. - This operation produces no output. Print null. snapshot() - Returns all events currently stored in the buffer in oldest → newest order. - The returned events should be consecutive and space-separated when output. - Calling snapshot() must not modify the internal state of the buffer. - If the buffer is empty, print nothing (an empty line).

## Notes

- You may assume single-threaded usage.
- The internal storage representation is up to you.

## Source

[View on Whitebox](https://whitebox.ac/problems/ringbuffer)

## Solution

See [`ringbuffer.py`](./ringbuffer.py) for the RingBuffer(capacity) implementation.
