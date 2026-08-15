# Distinguish yourselfin the AI era.

**Difficulty:** Hard 5
**Topics:** `Interviews are rapidly evolving.` | `Traditional methods are long outdated.` | `Interview standards keep rising.` | `Pattern memorization is long outdated.` | `LeetCode is long outdated.` | `AI is rewriting the interview.` | `NeetCode 150 is long outdated.` | `Grinding A2Z sheets is long outdated.` | `TLE Eliminators is long outdated.` | `Are you prepared for your future?` | `Concurrency` | `Data Structures` | `Billed annually at $167. Save 27%.` | `Auto` | `Done` | `Core Catalog` | `of C++ 17 solutions` | `Runtime` | `Memory` | `Language` | `Tests` | `C++ 17` | `White Room` | `Resume reviewer` | `Algorithm roadmap` | `Domain knowledge` | `Recently sourced` | `Normal+ 4.5` | `Interview Transferability` | `Implementation Problems` | `Real systems, not toy puzzles` | `Skill Rating` | `How you compare to other candidates` | `Tsuki AI Tutor` | `AI Mock Interviews` | `Practice speaking under pressure` | `White Room AI Coach` | `A study plan that adapts to you` | `Interview Intel` | `Real questions from recent interviews` | `Structured Roadmap` | `A clear path to mastery` | `Gamification Stay motivated long-term` | `Gamification` | `Stay motivated long-term` | `Pricing Cost to access` | `Pricing` | `Cost to access` | `QUESTS` | `Resets in 22h 26m` | `120 / 270 XP · 200 / 450 coins` | `0/1` | `NEW` | `White RoomNEW` | `Join our Discord server!  Why WhiteBox` | `Join our Discord server!` | `Why WhiteBox` | `10s` | `256 MB` | `Akuna Capital` | `Most popular`

> **Runtime:** 38 ms &nbsp;|&nbsp; **Memory:** 1.9 MB

---

Statement
Implement the class SPSCQueue, which is a lock-free single-producer single-consumer queue.
Constructor  Signature
SPSCQueue(capacity)
- capacity specifies the maximum amount of elements that may exist in the queue at any time.
- capacity must be a power of 2 and greater than 2. Throw an exception if it is not.
Methods  Signature
push(element)
- Attempts to enqueue element and returns whether the enqueue succeeds.
Signature
pop(out)
- Attempts to dequeue an element and store it in out.
Queue Semantics
- Exactly one producer thread calls push.
- Exactly one consumer thread calls pop.
- push returns false when the queue is full.
- pop returns false when the queue is empty.
- Elements must be observed in FIFO order.
Memory Ordering
Use atomics so producer writes become visible to the consumer before the element is popped.
- The producer may only publish a slot after the value is stored.
- The consumer may only read a slot after it has been published.
- Busy waiting is allowed for this problem, but data races are not.
Capacity Rules
- Capacity is fixed after construction.
- Capacity must be a power of two.
- At most capacity elements may be stored.
- Index wraparound must be handled correctly.
Required Complexity
- push is amortized O(1).
- pop is amortized O(1).
- No heap allocation after construction.

## Source

[View on Whitebox](https://whitebox.ac/)

## Solution

See [`distinguish-yourselfin-the-ai-era.py`](./distinguish-yourselfin-the-ai-era.py) for the SPSCQueue(capacity) implementation.
