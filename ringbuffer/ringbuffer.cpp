# Put a ring on it.
# Difficulty: Easy 1
# Category: Basics
# Topics: Basics, Data Structures
# Source: https://whitebox.ac/problems/ringbuffer
# Pushed by Whitebox→GitHub Extension
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class RingBuffer {
private:
    vector<string> buffer;
    int capacity;
    int start;   // index of oldest element