# It's over for you. (if you can't do this)

**Difficulty:** Unknown
**Topics:** `Basics  Millennium` | `Basics` | `Auto` | `Mark solved` | `Done` | `Accepted` | `Acceptance` | `Next up` | `C++ 23` | `Whiteboard` | `QUESTS` | `Resets in 22h 00m` | `60 / 270 XP · 100 / 450 coins` | `0/1` | `10s` | `256 MB` | `Jan 1, 2024` | `18.0ms`

---

Statement
You are given a base class box that defines a method foo() returning 0.
Implement a derived class whitebox that:
- Overrides foo() so that calling foo() on a whitebox instance (even when it is referenced as a box) returns 1 instead of 0;
- Overloads foo() with a version that accepts a number and returns that number added by 1.
You do not need to write any input/output parsing.
NOTE: The starter code is not necessarily complete. You are expected to edit it.
Example (cpp):
C++
whitebox wb;
box& b = wb;
b.foo() // should return 1
b.foo(2) // should return 3

## Source

[View on Whitebox](https://whitebox.ac/problems/overriding-overloading)

## Solution

See [`overriding-overloading.cpp`](./overriding-overloading.cpp) for the Python implementation.
