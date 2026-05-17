# Put a ring on it.
# Difficulty: Easy 1
# Category: Basics
# Topics: Basics, Data Structures, Claim, Auto, Example 1, Input:, Output:, Accepted, Acceptance, Next up, C++ 17, Executing..., QUESTS, Resets in 23h 26m, 0 / 225 XP · 0 / 400 coins, 0/5, 0/1, 10s, 256 MB, Jan 1, 2024, Google
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