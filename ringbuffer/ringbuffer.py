# Put a ring on it.
# Difficulty: Easy 1
# Category: Basics
# Topics: Basics, Data Structures, Done, Auto, Mark solved, Claim, Example 1, Input:, Output:, Accepted, Acceptance, Next up, C++ 17, INPUT:, EXPECTED:, OUTPUT:, QUESTS, Resets in 14h 13m, 30 / 240 XP · 50 / 400 coins, 0/1, 10s, 256 MB, Jan 1, 2024, Google, 3.0ms, 944 KB
# Source: https://whitebox.ac/problems/ringbuffer
# Pushed by Whitebox→GitHub Extension
int main() {
    string command;
    RingBuffer* rb = nullptr;

    while (cin >> command) {
        if (command == "RingBuffer") {
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