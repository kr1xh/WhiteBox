# Daily Quests
# Difficulty: Unknown
# Category: Claim
# Topics: Claim, Auto, Runtime, Memory, Language, Tests, C++ 17, INPUT:, EXPECTED:, OUTPUT:, QUESTS, Resets in 22h 46m, 0 / 225 XP · 0 / 400 coins, 0/5, 0/1, Accepted, Beats 89% of C++ 17 submissions, 3.0ms, 996 KB
# Time: 4 ms
# Space: 1.2 MB
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