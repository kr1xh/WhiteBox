# Ringbuffer
# Difficulty: Unknown
# Time: 5 ms
# Space: 1.3 MB
# Source: https://whitebox.ac/problems/ringbuffer
# Pushed by Whitebox→GitHub Extension
private:
    vector<string> buffer;
    int capacity;
    int start;   // index of oldest element
    int count;   // current number of elements

public:
    RingBuffer(int cap) {
        capacity = cap;
        buffer.resize(capacity);
using namespace std;

class RingBuffer {
#include <vector>
#include <string>
#include <iostream>