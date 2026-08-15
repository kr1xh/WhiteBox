// Know your limits. (Easy version)
// Difficulty: Unknown
// Category: BasicsData Structures +1 Akuna Capital
// Topics: BasicsData Structures +1 Akuna Capital, Basics, Data Structures, +1, Auto, Done, Explanation, Accepted, Acceptance, Next up, Normal 3, C++ 23, Whiteboard, QUESTS, Resets in 20h 09m, 120 / 270 XP · 200 / 450 coins, 0/1, 10s, 256 MB, Jan 1, 2024, 1011.0ms
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