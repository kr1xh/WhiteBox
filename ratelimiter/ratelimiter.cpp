// Know your limits. (Easy version)
// Difficulty: Unknown
// Category: BasicsData Structures +1 Akuna Capital
// Topics: BasicsData Structures +1 Akuna Capital, Basics, Data Structures, +1, Auto, Done, Explanation, Accepted, Acceptance, Next up, Normal 3, C++ 23, Whiteboard, QUESTS, Resets in 20h 17m, 120 / 270 XP · 200 / 450 coins, 0/1, 10s, 256 MB, Jan 1, 2024, 28.0ms
// Source: https://whitebox.ac/problems/ratelimiter
// Pushed by Whitebox→GitHub Extension
return;

        if (!events.empty() && events.back().first == timestamp) {
            events.back().second += canAdd;
        } else {
            events.emplace_back(timestamp, canAdd);
        }

        total += canAdd;
    }

    int check() {
        expire();
        return total;
    }
};