// Accepted
// Difficulty: Unknown
// Category: Auto
// Topics: Auto, Done, of C++ 23 solutions, Runtime, Memory, Language, Tests, C++ 23, Whiteboard, QUESTS, Resets in 17h 39m, 120 / 270 XP · 200 / 450 coins, 0/1, 15.0ms
// Time: 15 ms
// Source: https://whitebox.ac/problems/ratelimiter
// Pushed by Whitebox→GitHub Extension
cout << "null\n";
        }
        else if (cmd == "add") {
            int count, timestamp;
            cin >> count >> timestamp;
            limiter->add(count, timestamp);
            cout << "null\n";
        }
        else if (cmd == "check") {
            cout << limiter->check() << '\n';
        }
    }

    delete limiter;
    return 0;
}