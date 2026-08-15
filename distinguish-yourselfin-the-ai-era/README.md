# Distinguish yourselfin the AI era.

**Difficulty:** Hard 5
**Topics:** `Interviews are rapidly evolving.` | `Traditional methods are long outdated.` | `Interview standards keep rising.` | `Pattern memorization is long outdated.` | `LeetCode is long outdated.` | `AI is rewriting the interview.` | `NeetCode 150 is long outdated.` | `Grinding A2Z sheets is long outdated.` | `TLE Eliminators is long outdated.` | `Are you prepared for your future?` | `Basics` | `Data Structures` | `Billed annually at $167. Save 27%.` | `Auto` | `Done` | `Core Catalog` | `Accepted` | `Acceptance` | `C++ 17` | `White Room` | `Resume reviewer` | `Algorithm roadmap` | `Domain knowledge` | `Recently sourced` | `Normal+ 4.5` | `Interview Transferability` | `Implementation Problems` | `Real systems, not toy puzzles` | `Skill Rating` | `How you compare to other candidates` | `Tsuki AI Tutor` | `AI Mock Interviews` | `Practice speaking under pressure` | `White Room AI Coach` | `A study plan that adapts to you` | `Interview Intel` | `Real questions from recent interviews` | `Structured Roadmap` | `A clear path to mastery` | `Gamification Stay motivated long-term` | `Gamification` | `Stay motivated long-term` | `Pricing Cost to access` | `Pricing` | `Cost to access` | `QUESTS` | `Resets in 22h 26m` | `120 / 270 XP · 200 / 450 coins` | `0/1` | `NEW` | `White RoomNEW` | `Join our Discord server!  Why WhiteBox` | `Join our Discord server!` | `Why WhiteBox` | `10s` | `256 MB` | `Exclusive` | `Feb 6, 2026` | `Anthropic` | `Most popular` | `+100` | `+1,911`

---

Statement
You may already be familiar with the lock-free MPSC (multi-producer, single-consumer) queue shown on our homepage. This problem tests whether you understand how to generalize those ideas to SPSC concurrency.
Implement the class SPSCQueue, which is a lock-free single-producer single-consumer queue.
Constructor  Signature
SPSCQueue(capacity)
- capacity specifies the maximum amount of elements that may exist in the queue at any time.
- capacity must be a power of 2 and greater than 2. Throw an exception if it isn't.
Methods  Signature
push(element)
- Attempts to enqueue element.
- Returns true if the enqueue succeeds.
- Returns false if the queue is full at the operation's linearization point (no spurious failures).
Signature
pop(out)
- Attempts to dequeue an element and store it in out.
- Returns true if the dequeue succeeds.
- Returns false if the queue is empty at the operation’s linearization point (no spurious failures).

## Notes

- Exactly one producer thread and exactly one consumer thread may call push/pop concurrently.
The implementation must be lock-free (no std::mutex, no condition variables, etc.). Using a lock may result in a compilation error.
The grader uses stress tests to detect corruption (duplicates/missing) and deadlocks, but does not formally verify linearizability.
Type constraints (standard version):
You may assume the stored type T is default-constructible.
You may assume the queue will not be destroyed during concurrent push or pop operations.
You do not need to write any input/output parsing.
A queue constructed with capacity = N must allow N successful push calls before reporting full.
Because there are only two threads, there is very little opportunity for data corruption, allowing incorrect solutions to pass the judge. Therefore, this problem has been marked as unrated.

## Source

[View on Whitebox](https://whitebox.ac/)

## Solution

See [`distinguish-yourselfin-the-ai-era.py`](./distinguish-yourselfin-the-ai-era.py) for the SPSCQueue(capacity) implementation.
