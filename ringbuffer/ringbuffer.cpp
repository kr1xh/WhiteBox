# Ringbuffer
# Difficulty: Unknown
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
}