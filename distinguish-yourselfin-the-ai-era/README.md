# Distinguish yourselfin the AI era.

**Difficulty:** Hard 5
**Topics:** `Data Structures` | `Memory Management` | `Auto` | `Done` | `Normal+ 4.5` | `Interview Transferability` | `Implementation Problems` | `Real systems, not toy puzzles` | `Skill Rating` | `How you compare to other candidates` | `Tsuki AI Tutor` | `AI Mock Interviews` | `Practice speaking under pressure` | `Problem Sourcing` | `Interview Intel` | `Real questions from recent interviews` | `Structured Roadmap` | `A clear path to mastery` | `Gamification Stay motivated long-term` | `Gamification` | `Stay motivated long-term` | `Pricing Cost to access` | `Pricing` | `Cost to access` | `1 Easy` | `2 Easy+` | `3 Normal` | `4 Normal+` | `5 Hard` | `6 Harder` | `7 Insane` | `8 Expert` | `9 Master` | `10 Grandmaster` | `11 Glitched` | `12 Mythic` | `13 Mythic+` | `14 Legendary` | `QUESTS` | `Resets in 23h 23m` | `60 / 330 XP · 100 / 550 coins` | `0/1` | `NEW` | `SOON` | `4,695` | `Join our Discord server!` | `Our Philosophy` | `10s` | `256 MB` | `Mar 9, 2026` | `Optiver` | `Most popular`

---

Implement SkipList, a probabilistic sorted data structure that supports fast search, insertion, and deletion by maintaining multiple layers of linked lists with express lanes.
This problem focuses on layered data structure mechanics and correct PRNG-driven level generation.

## Constructor

```
SkipList(seed)
```

- seed is an unsigned 32-bit integer. - Initializes an empty skip list with the given PRNG seed. - The skip list should support up to 16 levels (levels 0 through 15). - Level 0 is the bottom level containing all elements. Level Generation Each time a new value is successfully inserted (not a duplicate), generate its level as follows: - Advance the PRNG state before using it: seed = seed * 1103515245 + 12345 The multiplication and addition should be performed using unsigned 32-bit arithmetic (i.e. mod 2^32). - Compute the level by counting the number of trailing 1-bits in the updated seed, capped at 15. Example: if seed in binary ends in ...0111, the level is 3. If seed is 0, the level is 0. If all 32 bits are 1, the level is 15 (capped). The PRNG state is shared across all insertions and advances only on successful inserts (not on duplicates, removes, searches, or displays).

## Methods

```
insert(value)
```

- value is an int type. - If value already exists in the skip list, do nothing (do not advance the PRNG). - Otherwise, generate a level using the procedure above, then insert the node into levels 0 through that level (inclusive). - Print null. remove(value) - value is an int type. - Removes value from all levels of the skip list. - If value does not exist, do nothing. - Print null. search(value) - value is an int type. - Returns true if value exists in the skip list, false otherwise. - The search must start from the highest occupied level and traverse forward and down — not simply scan level 0. display() - Prints each occupied level of the skip list on its own line, from the highest level down to level 0. - Each line should be formatted as Level {L}: followed by the values on that level in ascending order, space-separated. - If the skip list is empty, print nothing (an empty line).

## Notes

- The PRNG is a standard linear congruential generator. Getting the unsigned 32-bit wraparound correct is critical.
- How you represent nodes and forward pointers is up to you.
- You may assume single-threaded usage.

## Source

[View on Whitebox](https://whitebox.ac/)

## Solution

See [`distinguish-yourselfin-the-ai-era.py`](./distinguish-yourselfin-the-ai-era.py) for the SkipList(seed) implementation.
