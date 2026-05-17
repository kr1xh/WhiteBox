# Daily Quests

**Difficulty:** Unknown
**Topics:** `Claim` | `Auto` | `Runtime` | `Memory` | `Language` | `Tests` | `C++ 17` | `INPUT:` | `EXPECTED:` | `OUTPUT:` | `QUESTS` | `Resets in 22h 46m` | `0 / 225 XP · 0 / 400 coins` | `0/5` | `0/1` | `Accepted` | `Beats 89% of C++ 17 submissions` | `3.0ms` | `996 KB`

> **Runtime:** 4 ms &nbsp;|&nbsp; **Memory:** 1.2 MB

---

Back to submissions  Accepted May 17, 2026, 03:03 PM  Runtime 4 ms  Memory 1.2 MB  Language C++17  Tests 20/20
RUNTIME DISTRIBUTION
Beats 89% of C++ 17 submissions
SUBMITTED CODE
Copy
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class RingBuffer {
private:
vector<string> buffer;
int capacity;
int start;   // index of oldest element
int count;   // current number of elements
public:
RingBuffer(int cap) {
capacity = cap;
buffer.resize(capacity);
start = 0;
count = 0;
}
void push(string event) {
if (count < capacity) {
buffer[(start + count) % capacity] = event;
count++;
} else {
// overwrite oldest element
buffer[start] = event;
start = (start + 1) % capacity;
}
cout << "null" << endl;
}
void snapshot() {
for (int i = 0; i < count; i++) {
if (i > 0) cout << " ";
cout << buffer[(start + i) % capacity];
}
cout << endl;
}
};
int main() {
string command;
RingBuffer* rb = nullptr;
while (cin >> command) {
if (command == "RingBuffer") {
int cap;
cin >> cap;
rb = new RingBuffer(cap);
}
else if (command == "push") {
string event;
cin >> event;
rb->push(event);
}
else if (command == "snapshot") {
rb->snapshot();
}
}
return 0;
}
Share this solution
Write an editorial to help others understand your approach
Write Editorial

## Source

[View on Whitebox](https://whitebox.ac/problems/ringbuffer)

## Solutions

- [C++](./ringbuffer.cpp)
- [JavaScript](./ringbuffer.js)
- [Python](./ringbuffer.py)
