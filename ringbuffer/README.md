# Put a ring on it.

**Difficulty:** Easy 1
**Topics:** `Basics` | `Data Structures`

---

Description Solutions Submissions Solvers 96
Put a ring on it.
10s  256 MB      Easy 1   Jan 1, 2024   BasicsData Structures Google 💬 Interviewed at Google? Share your experience, earn coins. →
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

## EXAMPLES

```
Example 1 Input:
RingBuffer 2
push a
push b
push c
snapshot
```

## Output

```
null
null
null
b c
Accepted 98/178   Acceptance 55% Next up Know your limits. (Easy version) Similar problem      Easy 1.5Know your limits. (Hard version) Similar problem      Easy+ 2Pixel Budget Similar problem      Easy+ 2.5
```

## Source

[View on Whitebox](https://whitebox.ac/problems/ringbuffer)

## Solutions

- [C++](./ringbuffer.cpp)
- [JavaScript](./ringbuffer.js)
- [Python](./ringbuffer.py)
