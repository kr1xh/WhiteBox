# Ringbuffer
# Difficulty: Unknown
# Time: 5 ms
# Space: 1.3 MB
# Source: https://whitebox.ac/problems/ringbuffer
# Pushed by Whitebox→GitHub Extension
int count;   // current number of elements

public:
    RingBuffer(int cap) {
        capacity = cap;
        buffer.resize(capacity);
        start = 0;
        count = 0;
    }

    void push(string event) {
        if (count < capacity) {
            buffer[(start + count) % capacity] = event;
            count++;
        } else {
            // overwrite oldest element
            buffer[start] = event;