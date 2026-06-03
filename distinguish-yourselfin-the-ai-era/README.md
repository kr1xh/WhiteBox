# Distinguish yourselfin the AI era.

**Difficulty:** Hard 5
**Topics:** `Basics` | `Data Structures` | `Auto` | `Done` | `Normal+ 4.5` | `Interview Transferability` | `Implementation Problems` | `Real systems, not toy puzzles` | `Skill Rating` | `How you compare to other candidates` | `Tsuki AI Tutor` | `AI Mock Interviews` | `Practice speaking under pressure` | `Problem Sourcing` | `Interview Intel` | `Real questions from recent interviews` | `Structured Roadmap` | `A clear path to mastery` | `Gamification Stay motivated long-term` | `Gamification` | `Stay motivated long-term` | `Pricing Cost to access` | `Pricing` | `Cost to access` | `1 Easy` | `2 Easy+` | `3 Normal` | `4 Normal+` | `5 Hard` | `6 Harder` | `7 Insane` | `8 Expert` | `9 Master` | `10 Grandmaster` | `11 Glitched` | `12 Mythic` | `13 Mythic+` | `14 Legendary` | `QUESTS` | `Resets in 23h 18m` | `60 / 330 XP · 100 / 550 coins` | `0/1` | `NEW` | `SOON` | `4,695` | `Join our Discord server!` | `Our Philosophy` | `10s` | `256 MB` | `Feb 6, 2026` | `Anthropic` | `Most popular`

---

Problem contributed by @asdf
Implement a HashRing, a consistent hashing ring that routes chat sessions to servers.
Description
Design a distributed chat load balancer using a consistent hashing ring — a circle of integers in the range [0, 2^32). Both servers and chats are assigned positions using a hash function. A chat is routed to the first server clockwise from its position on the ring, with wraparound.
This problem is divided into multiple parts. Each part builds on the previous one.
A hash function is provided — treat it as a black box:
int hash_fn(string key);  // provided, do not implement
Tiebreak rule (applies to all parts): When scanning the ring clockwise, distinct physical servers are visited in clockwise order starting from the primary. If two ring positions collide on the same hash, ties are broken lexicographically by server_id. Test data will not rely on collision tiebreaks for correctness, but your implementation must be deterministic.

## Constructor

```
HashRing()
```

- Initializes an empty hash ring with no servers. Part 1: Basic Consistent Hashing add_server(server_id) - Adds a server to the ring at position hash_fn(server_id). - If the server already exists, do nothing. remove_server(server_id) - Removes the server from the ring. - If the server does not exist, do nothing. get_server(chat_id) -> str - Hashes chat_id and returns the first server clockwise from that position on the ring. Part 2: Virtual Nodes A single ring position per server leads to uneven load distribution. Extend your implementation to support virtual nodes: each physical server gets v positions on the ring at: hash_fn(server_id + "#0"), hash_fn(server_id + "#1"), ..., hash_fn(server_id + "#v-1") Modify add_server and remove_server to handle virtual nodes. get_server behavior is unchanged — it still returns the physical server id. add_server(server_id, v) - Adds a server with v virtual nodes at the positions described above. - If the server already exists, do nothing. - The single-argument add_server(server_id) from Part 1 is equivalent to add_server(server_id, 1) with the position computed from hash_fn(server_id) directly (no #0 suffix). remove_server(server_id) - Removes the server and all of its virtual nodes from the ring. Part 3: Server Affinity Extend routing to support affinity-based fallback. When looking up a chat, instead of always returning the primary ring server, scan up to k distinct physical servers clockwise (including the primary) and prefer servers that have previously handled this chat. record_affinity(server_id, chat_id) - Records that server_id has an affinity for chat_id. get_server_v3(chat_id, k) -> str - Scans up to k distinct physical servers clockwise from chat_id's ring position (including the primary). - If k is greater than the number of distinct physical servers on the ring, the scan visits every server exactly once. - If any scanned server has a recorded affinity for chat_id, return the first such server in clockwise order. - Otherwise, return the primary ring server as in Part 2. Affinities are tied to a server's identity. If a server is removed, its affinities are discarded; re-adding the same server_id later starts with no affinities. Part 4: Memory-Aware Routing Each server now tracks two memory tiers: - VRAM: chat sessions loaded in GPU memory. - RAM: chat sessions loaded in regular memory. Replace affinity tracking from Part 3 with explicit memory state. When routing a chat_id, apply the following priority logic: - VRAM hit on primary — If the primary ring server has chat_id in VRAM, route there. - RAM hit on primary — Else if the primary ring server has chat_id in RAM, route there. - Scan fallback — Else scan up to k distinct physical servers clockwise (including the primary). If any have chat_id in VRAM, route to the first one in clockwise order. Else if any have chat_id in RAM, route to the first one in clo

## Source

[View on Whitebox](https://whitebox.ac/)

## Solution

See [`distinguish-yourselfin-the-ai-era.py`](./distinguish-yourselfin-the-ai-era.py) for the Python implementation.
