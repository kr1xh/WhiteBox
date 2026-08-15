// Know your limits. (Easy version)
// Difficulty: Unknown
// Category: BasicsData Structures +1 Akuna Capital
// Topics: BasicsData Structures +1 Akuna Capital, Basics, Data Structures, +1, Auto, Done, Explanation, Accepted, Acceptance, Next up, Normal 3, C++ 23, Whiteboard, QUESTS, Resets in 20h 09m, 120 / 270 XP · 200 / 450 coins, 0/1, 10s, 256 MB, Jan 1, 2024, 1011.0ms
// Source: https://whitebox.ac/problems/ratelimiter
// Pushed by Whitebox→GitHub Extension
total -= events.front().second;

        while (!events.empty() && events.front().first <= limit) {
    void expire() {
        int limit = currentTime - seconds;
    int currentTime;
    deque<pair<int, int>> events; // {timestamp, count}

    int capacity;
    int total;
class RateLimiter {
    int seconds;
using namespace std;

#include <utility>
            events.pop_front();
        }