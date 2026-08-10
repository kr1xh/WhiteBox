# Accepted

**Difficulty:** Unknown
**Topics:** `Auto` | `Done` | `of C++ 23 solutions` | `Runtime` | `Memory` | `Language` | `Tests` | `C++ 23` | `Whiteboard` | `QUESTS` | `Resets in 21h 58m` | `120 / 270 XP · 200 / 450 coins` | `0/1` | `20.0ms`

> **Runtime:** 20 ms &nbsp;|&nbsp; **Memory:** N/A

---

Accepted
2 / 2 test cases passed | Aug 10, 2026, 04:31 PM
Beats 11% of C++ 23 solutions Runtime 20 ms Memory 0 KB Language C++23 Tests 2 / 2 Runtime distribution your runtime 20 ms
SUBMITTED CODE
Copy 1
class box {
2
public:
3
virtual int foo() {
4
return 0;
5
}
6
7
virtual int foo(int x) {
8
return x;
9
}
10
11
virtual ~box() = default;
12
};
13
14
class whitebox : public box {
15
public:
16
int foo() override {
17
return 1;
18
}
19
20
int foo(int x) override {
21
return x + 1;
22
}
23
};
Share this solution
Write an editorial to help others understand your approach
Write Editorial

## Source

[View on Whitebox](https://whitebox.ac/problems/overriding-overloading)

## Solution

See [`overriding-overloading.cpp`](./overriding-overloading.cpp) for the Python implementation.
