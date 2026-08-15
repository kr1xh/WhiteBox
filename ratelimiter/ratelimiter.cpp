// Daily Quests
// Difficulty: Unknown
// Category: Auto
// Topics: Auto, Done, C++ 23, Whiteboard, Submitting..., QUESTS, Resets in 20h 08m, 120 / 270 XP · 200 / 450 coins, 0/1
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