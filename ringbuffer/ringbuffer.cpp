# Daily Quests
# Difficulty: Unknown
# Category: Claim
# Topics: Claim, Auto, Runtime, Memory, Language, Tests, C++ 17, INPUT:, EXPECTED:, OUTPUT:, QUESTS, Resets in 23h 25m, 0 / 225 XP · 0 / 400 coins, 0/5, 0/1, Accepted, Beats 89% of C++ 17 submissions, 3.0ms, 996 KB
# Time: 4 ms
# Space: 1.2 MB
# Source: https://whitebox.ac/problems/ringbuffer
# Pushed by Whitebox→GitHub Extension
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class RingBuffer {
private:
    vector<string> buffer;
    int capacity;
    int start;   // index of oldest element
    int count;   // current number of elements

public:
    RingBuffer(int cap) {
        capacity = cap;
        buffer.resize(capacity);