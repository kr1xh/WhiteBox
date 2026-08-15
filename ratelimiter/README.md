# Accepted

**Difficulty:** Unknown
**Topics:** `Auto` | `Done` | `of C++ 23 solutions` | `Runtime` | `Memory` | `Language` | `Tests` | `C++ 23` | `Whiteboard` | `QUESTS` | `Resets in 17h 39m` | `120 / 270 XP · 200 / 450 coins` | `0/1` | `15.0ms`

> **Runtime:** 15 ms &nbsp;|&nbsp; **Memory:** N/A

---

Accepted
10 / 10 test cases passed | Aug 15, 2026, 06:21 PM
Beats 20% of C++ 23 solutions Runtime 15 ms Memory 0 KB Language C++23 Tests 10 / 10 Runtime distribution your runtime 15 ms
SUBMITTED CODE
Copy 1
#include <iostream>
2
#include <deque>
3
#include <string>
4
#include <algorithm>
5
6
using namespace std;
7
8
class RateLimiter {
9
int seconds;
10
int capacity;
11
int total;
12
int currentTime;
13
deque<pair<int, int>> events;
14
15
void expire() {
16
int limit = currentTime - seconds;
17
18
while (!events.empty() && events.front().first <= limit) {
19
total -= events.front().second;
20
events.pop_front();
21
}
22
}
23
24
public:
25
RateLimiter(int s, int c)
26
: seconds(s), capacity(c), total(0), currentTime(0) {}
27
28
void add(int count, int timestamp) {
29
currentTime = timestamp;
30
expire();
31
32
int canAdd = min(count, capacity - total);
33
if (canAdd <= 0)
34
return;
35
36
if (!events.empty() && events.back().first == timestamp)
37
events.back().second += canAdd;
38
else
39
events.emplace_back(timestamp, canAdd);
40
41
total += canAdd;
42
}
43
44
int check() {
45
expire();
46
return total;
47
}
48
};
49
50
int main() {
51
ios::sync_with_stdio(false);
52
cin.tie(nullptr);
53
54
string cmd;
55
RateLimiter* limiter = nullptr;
56
57
while (cin >> cmd) {
58
if (cmd == "RateLimiter") {
59
int seconds, capacity;
60
cin >> seconds >> capacity;
61
limiter = new RateLimiter(seconds, capacity);
62
cout << "null\n";
63
}
64
else if (cmd == "add") {
65
int count, timestamp;
66
cin >> count >> timestamp;
67
limiter->add(count, timestamp);
68
cout << "null\n";
69
}
70
else if (cmd == "check") {
71
cout << limiter->check() << '\n';
72
}
73
}
74
75
delete limiter;
76
return 0;
77
}
Share this solution
Write an editorial to help others understand your approach
Write Editorial

## Source

[View on Whitebox](https://whitebox.ac/problems/ratelimiter)

## Solution

See [`ratelimiter.cpp`](./ratelimiter.cpp) for the Python implementation.
