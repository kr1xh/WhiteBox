# Distinguish yourselfin the AI era.

**Difficulty:** Hard 5
**Topics:** `Data Structures` | `Design Patterns` | `Auto` | `Done` | `Normal+ 4.5` | `Interview Transferability` | `Implementation Problems` | `Real systems, not toy puzzles` | `Skill Rating` | `How you compare to other candidates` | `Tsuki AI Tutor` | `AI Mock Interviews` | `Practice speaking under pressure` | `Problem Sourcing` | `Interview Intel` | `Real questions from recent interviews` | `Structured Roadmap` | `A clear path to mastery` | `Gamification Stay motivated long-term` | `Gamification` | `Stay motivated long-term` | `Pricing Cost to access` | `Pricing` | `Cost to access` | `1 Easy` | `2 Easy+` | `3 Normal` | `4 Normal+` | `5 Hard` | `6 Harder` | `7 Insane` | `8 Expert` | `9 Master` | `10 Grandmaster` | `11 Glitched` | `12 Mythic` | `13 Mythic+` | `14 Legendary` | `QUESTS` | `Resets in 23h 11m` | `60 / 330 XP · 100 / 550 coins` | `0/1` | `NEW` | `SOON` | `4,695` | `Join our Discord server!` | `Our Philosophy` | `10s` | `256 MB` | `Meta` | `Most popular`

---

Problem contributed by @yuta_is_a_bum
Implement FileSystem, an in-memory hierarchical file system that supports basic UNIX-like file and directory operations.
Description
Design an in-memory file system that stores everything in RAM and supports hierarchical directories and files identified by absolute paths (like /a/b/c).
This problem is divided into multiple parts. Each part builds on the previous one.

## Constructor

```
FileSystem()
```

- Initializes an empty file system. Part 1: Basic File System Operations

## Methods

```
ls(path)
```

- Returns the contents of the directory at path. - If path is a directory, return a list of names of files and directories directly under it. - If path is a file, return a list containing only the file name. - The returned list must be sorted lexicographically. mkdir(path) - Creates a directory at path. - If intermediate directories do not exist, create them automatically. - If the directory already exists, do nothing. addContentToFile(filePath, content) - Creates or appends content to a file at filePath. - If the file does not exist, create it and write content. - If the file already exists, append content to its existing contents. - Any missing intermediate directories in filePath must be created automatically. - Input format: Content is enclosed in double quotes. Use \n for newlines, \t for tabs, \\ for backslash, and \" for quotes within the content. readContentFromFile(filePath) - Returns the full content of the file at filePath. Example Usage FileSystem() ls("/")                      // returns [] mkdir("/a/b/c") addContentToFile("/a/b/c/d", "hello") ls("/")                      // returns ["a"] readContentFromFile("/a/b/c/d")        // returns "hello" addContentToFile("/a/b/c/d", " world") readContentFromFile("/a/b/c/d")        // returns "hello world" Part 2: File and Directory Manipulation Extend your implementation with the following operations: rm(path) - Removes the file or directory at path. - If path refers to a file, delete the file. - If path refers to a directory, delete the directory and all of its contents recursively. mv(source, destination) - Moves or renames a file or directory. - source is an existing file or directory path. - destination is the new path. - If destination already exists as a directory, move source inside it. Example: mv("/a/x", "/b") moves /a/x to /b/x if /b is a directory. - Otherwise, treat destination as a rename to that exact path. Example: mv("/a/x", "/a/y") renames /a/x to /a/y. Part 3: File Metadata Extend the file system to track metadata for all files and directories.

## Methods

```
getSize(path)
```

- If path is a file, return the size of the file (number of characters in its content). - If path is a directory, return the total size of all files contained within it (recursively). getLastModified(path) - Returns the timestamp of the most recent modification to the file or directory. - Modifications include: creation deletion (of any descendant should update ancestors as well, since directory contents changed) content updates moves / renames Timestamp Parameter For operations that modify the file system (in Part 3), an optional timestamp parameter may be provided: - addContentToFile(filePath, content, timestamp) - mkdir(path, timestamp) - rm(path, timestamp) - mv(source, destination, timestamp) When a timestamp is provided, use it to update the lastModified metadata. If not provided, you may use any monotonically increasing value. Creation Time Tracking Track and store the creation time for all files and directories.

## Notes

- All paths are absolute and start with /.
- File and directory names consist only of lowercase English letters.
- You may assume all inputs are valid.
- Timestamps are monotonically increasing.
- There are no constraints on how files or directories must be stored internally.
- Correctness, clarity, and proper handling of hierarchical rel

## Source

[View on Whitebox](https://whitebox.ac/)

## Solution

See [`distinguish-yourselfin-the-ai-era.py`](./distinguish-yourselfin-the-ai-era.py) for the FileSystem() implementation.
