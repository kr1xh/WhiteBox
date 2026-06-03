# Distinguish yourselfin the AI era.

**Difficulty:** Hard 5
**Topics:** `Concurrency` | `Data Structures` | `Auto` | `Done` | `Normal+ 4.5` | `Interview Transferability` | `Implementation Problems` | `Real systems, not toy puzzles` | `Skill Rating` | `How you compare to other candidates` | `Tsuki AI Tutor` | `AI Mock Interviews` | `Practice speaking under pressure` | `Problem Sourcing` | `Interview Intel` | `Real questions from recent interviews` | `Structured Roadmap` | `A clear path to mastery` | `Gamification Stay motivated long-term` | `Gamification` | `Stay motivated long-term` | `Pricing Cost to access` | `Pricing` | `Cost to access` | `1 Easy` | `2 Easy+` | `3 Normal` | `4 Normal+` | `5 Hard` | `6 Harder` | `7 Insane` | `8 Expert` | `9 Master` | `10 Grandmaster` | `11 Glitched` | `12 Mythic` | `13 Mythic+` | `14 Legendary` | `QUESTS` | `Resets in 23h 13m` | `60 / 330 XP · 100 / 550 coins` | `0/1` | `NEW` | `SOON` | `4,695` | `Join our Discord server!` | `Our Philosophy` | `10s` | `256 MB` | `Akuna Capital` | `Most popular`

---

You may already be familiar with the lock-free MPSC (multi-producer, single-consumer) queue shown on our homepage. This problem tests whether you understand how to generalize those ideas to SPSC concurrency.
Implement the class SPSCQueue, which is a lock-free single-producer single-consumer queue.

## Constructor

```
SPSCQueue(capacity)
```

- capacity specifies the maximum amount of elements that may exist in the queue at any time. - capacity must be a power of 2 and greater than 2. Throw an exception if it isn't.

## Methods

```
push(element)
```

- Attempts to enqueue element. - Returns true if the enqueue succeeds. - Returns false if the queue is full at the operation's linearization point (no spurious failures). pop(out) - Attempts to dequeue an element and store it in out. - Returns true if the dequeue succeeds. - Returns false if the queue is empty at the operation’s linearization point (no spurious failures).

## Notes

- Exactly one producer thread and exactly one consumer thread may call push/pop concurrently.
- The implementation must be lock-free (no std::mutex, no condition variables, etc.). Using a lock may result in a compilation error.
- The grader uses stress tests to detect corruption (duplicates/missing) and deadlocks, but does not formally verify linearizability.
- Type constraints (standard version):
You may assume the stored type T is default-constructible.
- You may assume the queue will not be destroyed during concurrent push or pop operations.
- You do not need to write any input/output parsing.
- A queue constructed with capacity = N must allow N successful push calls before reporting full.
- Because there are only two threads, there is very little opportunity for data corruption, allowing incorrect solutions to pass the judge. Therefore, this problem has been marked as unrated.

## Source

[View on Whitebox](https://whitebox.ac/)

## Solution

See [`distinguish-yourselfin-the-ai-era.py`](./distinguish-yourselfin-the-ai-era.py) for the SPSCQueue(capacity) implementation.
