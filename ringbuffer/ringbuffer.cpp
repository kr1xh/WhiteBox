# Accepted
# Difficulty: Unknown
# Category: C++ 17
# Topics: C++ 17, INPUT:, EXPECTED:, OUTPUT:, 3.0ms, 996 KB
# Source: https://whitebox.ac/problems/ringbuffer
# Pushed by Whitebox→GitHub Extension
int cap;
            cin >> cap;
            rb = new RingBuffer(cap);
        }
        else if (command == "push") {
            string event;
            cin >> event;
            rb->push(event);
        }
        else if (command == "snapshot") {
            rb->snapshot();
        }
    }

    return 0;
    while (cin >> command) {
        if (command == "RingBuffer") {