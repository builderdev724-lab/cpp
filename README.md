![Pixel Jeff × Divoom](./Pixel%20Jeff%20X%20Divoom%20-%20Pixel%20Jeff.gif)
#

 # C++: ZERO → GOD

> **Systems Programming, OS, Kernel, Graphics & Game Engine Mastery**

A project-driven C++ curriculum designed to take you from programming fundamentals to building an operating system, compiler, database, renderer, game engine, and developer infrastructure.

## Learning Philosophy

- **30% study / 70% coding** for foundational material.
- **20% study / 80% implementation** for advanced systems topics.
- Don't copy tutorials line-for-line. Understand the concept, then implement it independently.
- Every project is a **gate**: finish it, debug it, explain its design, and rebuild key parts before advancing.
- Measure progress by **working software you can explain**, not by hours of videos watched.

## Roadmap

```text
C++ Fundamentals
      ↓
Memory → OOP → Modern C++ → STL/Templates → Algorithms
      ↓
CMake → Debugging → Testing
      ↓
Computer Architecture → Assembly → Binary Formats
      ↓
Linux → Processes → Threads → Memory Management
      ↓
Networking → Databases → Compilers
      ↓
Graphics → Game Programming → Game Engine
      ↓
Kernel / Operating System
      ↓
Git / Developer Infrastructure
```

---

## STAGE 0 — Programming Foundations

### Chapter 1 — How Programs Actually Work

**Learn**
- Binary, bits and bytes; CPU, RAM and storage
- Machine instructions and operating systems
- Source code → compiler → executable
- Stack vs heap (conceptual)
- Compiler, linker and debugger
- Environment variables and PATH
#### Project 1 — Hello Machine

**Build**
- Print information about the running program
- Accept command-line arguments
- Display integer sizes
- Demonstrate hexadecimal/binary output
Milestone: understand what happens between writing main() and executing a program.

## STAGE 1 — C++ Fundamentals

### Chapter 2 — C++ Syntax

**Learn**
- main, statements and expressions
- Variables and constants
- Primitive types and operators
- if / else / switch
#### Project 2 — CLI Calculator

**Build**
- Addition, subtraction, multiplication, division and modulo
- Parentheses and multiple operations
- Input validation and error handling
Milestone: write basic C++ programs independently.
### Chapter 3 — Loops and Functions

**Learn**
- for, while, do-while
- Functions, parameters and return values
- Scope and recursion
#### Project 3 — Number Toolkit

**Build**
- Prime checker
- Factorial and Fibonacci
- GCD and LCM
- Power and number guessing
- Basic statistics
Milestone: decompose programs into reusable functions.
### Chapter 4 — Arrays, Strings and References

**Learn**
- C arrays
- std::string
- References and const
- Indexing and iteration
- String manipulation
#### Project 4 — Text Analyzer

**Build**
- Read a text file
- Count characters, words and lines
- Find sentences and longest word
- Word-frequency table
Milestone: manipulate structured text and collections.
### Chapter 5 — Pointers and Memory

**Learn**
- Addresses and pointers
- Dereferencing and pointer arithmetic
- nullptr
- References vs pointers
- Stack and heap
- new/delete
- Memory leaks and dangling pointers
- Ownership
#### Project 5 — Dynamic Array

**Build**
- Implement DynamicArray<T>
- push/pop
- insert/remove
- resize
- operator[]
- size/capacity
Milestone: understand memory rather than treating it as magic.

## STAGE 2 — Object-Oriented C++

### Chapter 6 — Structs and Classes

**Learn**
- struct/class
- Constructors and destructors
- Member functions
- Access modifiers
- this
- Object lifetime
#### Project 6 — Banking System

**Build**
- Account, Customer, Transaction and Bank classes
- Create accounts
- Deposit/withdraw/transfer
- Transaction history
- Persistence
Milestone: model a real system with classes.
### Chapter 7 — Encapsulation and Design

**Learn**
- Abstraction
- Encapsulation
- Interfaces
- Composition
- Class responsibilities
- Invariants
#### Project 7 — Inventory System

**Build**
- Product, Category, Inventory, Warehouse and Order
- Stock tracking
- Search
- Purchase orders
- Reports
Milestone: design classes around responsibilities.
### Chapter 8 — Inheritance and Polymorphism

**Learn**
- Inheritance
- Overriding
- Virtual functions
- Abstract classes
- Interfaces
- Virtual destructors
- Dynamic dispatch
#### Project 8 — Game Entity System

**Build**
- Entity hierarchy
- Player, Enemy, NPC, Vehicle and Weapon
- Polymorphic behavior
Milestone: understand runtime polymorphism.
### Chapter 9 — Operator Overloading

**Learn**
- Arithmetic and comparison operators
- Stream operators
- operator[] and operator()
- Copy semantics
#### Project 9 — Mathematics Library

**Build**
- Vector2
- Vector3
- Matrix
- Quaternion
Milestone: build value types suitable for graphics.

## STAGE 3 — Modern C++

### Chapter 10 — Standard Library

**Learn**
- vector, array, deque, list
- map, unordered_map, set, unordered_set
- stack, queue, priority_queue
#### Project 10 — Data Structure Playground

**Build**
- Compare insertion, deletion and lookup
- Compare traversal characteristics
Milestone: use the STL instead of reinventing basic containers.
### Chapter 11 — Iterators and Algorithms

**Learn**
- Iterators and ranges
- sort, find, transform, filter, accumulate
- Lambdas and predicates
#### Project 11 — CSV Data Processor

**Build**
- Sort
- Filter
- Search
- Aggregate
- Group
- Export
Milestone: use algorithmic C++ idiomatically.
### Chapter 12 — Templates

**Learn**
- Function and class templates
- Template specialization
- Type deduction
- Concepts
#### Project 12 — Generic Containers

**Build**
- Vector<T>
- Stack<T>
- Queue<T>
- HashMap<K,V>
Milestone: write reusable generic code.
### Chapter 13 — Smart Pointers

**Learn**
- unique_ptr, shared_ptr, weak_ptr
- Ownership and lifetime
- RAII
- Reference counting
- Move semantics
#### Project 13 — Resource Manager

**Build**
- AssetManager for textures, sounds, meshes and files
- Automatic lifetime management
Milestone: manage ownership safely.
### Chapter 14 — Move Semantics

**Learn**
- lvalue/rvalue
- References
- Move constructor and assignment
- std::move
- Perfect forwarding
#### Project 14 — High Performance Buffer

**Build**
- Copy and move support
- Ownership transfer
- Benchmark copy vs move
Milestone: understand modern C++ object movement.
### Chapter 15 — RAII

**Learn**
- Resource acquisition is initialization
- RAII for memory, files, mutexes, sockets and GPU resources
#### Project 15 — File Resource Library

**Build**
- File
- Directory
- FileReader
- FileWriter
- Automatic cleanup
Milestone: make resource lifetime deterministic.

## STAGE 4 — Serious C++ Engineering

### Chapter 16 — Error Handling

**Learn**
- Exceptions
- Exception safety
- optional
- variant
- expected
- Error codes
#### Project 16 — Configuration System

**Build**
- Parse configuration
- Validation
- Defaults
- Useful errors
Milestone: design predictable failure behavior.
### Chapter 17 — File Systems

**Learn**
- std::filesystem
- Paths and directories
- Metadata
- Binary files
- Serialization
#### Project 17 — File Explorer CLI

**Build**
- ls, cd, mkdir, cp, mv, rm, find and tree-like functionality
Milestone: interact with the filesystem programmatically.
### Chapter 18 — CMake

**Learn**
- Targets
- Libraries and executables
- Linking
- Include directories
- Dependencies
- Debug/Release
- CMake presets
#### Project 18 — Multi-Library Application

**Build**
- core/
- math/
- filesystem/
- app/
- tests/
- Build everything with CMake
Milestone: manage real multi-target projects.
### Chapter 19 — Debugging

**Learn**
- GDB/LLDB
- Breakpoints and watchpoints
- Stack traces
- Core dumps
- AddressSanitizer
- UndefinedBehaviorSanitizer
- ThreadSanitizer
#### Project 19 — Bug Hunt

**Build**
- Find memory leaks
- Fix buffer overflow
- Find use-after-free
- Fix race conditions
- Remove undefined behavior
Milestone: diagnose bugs rather than guessing.
### Chapter 20 — Testing

**Learn**
- Unit tests
- Integration tests
- Assertions
- Mocking
- Test organization
- Coverage
#### Project 20 — Tested C++ Library

**Build**
- Take an earlier library
- Add automated unit/integration tests
- Run tests through the build system
Milestone: write software that can be verified.

## STAGE 5 — Data Structures & Algorithms

### Chapter 21 — Complexity

**Learn**
- Big O, Big Theta, Big Omega
- Amortized complexity
- Space complexity
#### Project 21 — Algorithm Benchmark

**Build**
- Benchmark algorithms at increasing data sizes
- Record and compare results
Milestone: reason about performance quantitatively.
### Chapter 22 — Fundamental Data Structures

**Learn**
- Linked lists
- Stacks and queues
- Deques
- Hash tables
- Binary trees
- Heaps
#### Project 22 — STL From Scratch

**Build**
- MiniSTL library implementing core containers
Milestone: understand what standard containers do internally.
### Chapter 23 — Trees and Graphs

**Learn**
- BST
- AVL concepts
- Red-black tree concepts
- Trie
- Graph representations
- BFS/DFS
- Topological sort
#### Project 23 — Dependency Graph

**Build**
- Dependency ordering
- Cycle detection
- Affected-module analysis
Milestone: model and traverse complex relationships.
### Chapter 24 — Advanced Algorithms

**Learn**
- Dijkstra
- A*
- Union-find
- Dynamic programming
- Greedy algorithms
- Backtracking
- Hashing
#### Project 24 — Pathfinding Engine

**Build**
- Implement A*
- Visualize paths
- Compare algorithms
Milestone: solve non-trivial algorithmic problems.

## STAGE 6 — Computer Architecture

### Chapter 25 — CPU Architecture

**Learn**
- Registers
- ALU
- Instruction cycle
- Cache
- Branch prediction
- Pipelines
- SIMD
- Memory hierarchy
#### Project 25 — CPU Emulator

**Build**
- Registers
- Memory
- Instructions
- Program counter
- Stack
- Execute a fictional machine-code format
Milestone: understand software from the CPU's perspective.
### Chapter 26 — Assembly

**Learn**
- x86-64 registers
- Stack
- Calling conventions
- Instructions
- Memory addressing
- Function calls
#### Project 26 — C++ + Assembly

**Build**
- Write selected performance-critical routines in assembly
- Call them safely from C++
- Benchmark them
Milestone: understand the C++/machine boundary.
### Chapter 27 — Binary Formats

**Learn**
- ELF
- Object files
- Symbols
- Relocation
- Executable layout
- Static/dynamic linking
#### Project 27 — Binary Inspector

**Build**
- Build a simplified readelf-style utility
- Parse executable/object metadata
Milestone: understand what compiled programs contain.

## STAGE 7 — Operating Systems

### Chapter 28 — Processes

**Learn**
- Processes and PIDs
- Lifecycle
- Context switching
- System calls
- fork/exec/wait
#### Project 28 — Process Manager

**Build**
- Build a simplified ps/top-style Linux utility
- Display process information
Milestone: understand process-level OS interaction.
### Chapter 29 — Threads

**Learn**
- Threads
- Mutexes
- Semaphores
- Condition variables
- Atomics
- Race conditions
- Deadlocks
#### Project 29 — Thread Pool

**Build**
- Worker threads
- Task queue
- Futures
- Graceful shutdown
Milestone: build safe concurrent infrastructure.
### Chapter 30 — Concurrency

**Learn**
- Lock-free concepts
- Atomics
- Memory ordering
- Producer/consumer
- Concurrent structures
#### Project 30 — Parallel File Processor

**Build**
- Process millions of records concurrently
- Measure scaling
Milestone: reason about concurrency and performance.
### Chapter 31 — Linux System Programming

**Learn**
- POSIX
- System calls
- File descriptors
- open/read/write
- mmap
- Pipes
- Signals
- Sockets
#### Project 31 — Unix Shell

**Build**
- Commands
- cd/pwd/cat
- Pipes
- Redirection
- Background processes
Milestone: control the OS from native code.
### Chapter 32 — Memory Management

**Learn**
- Virtual memory
- Page tables
- Paging
- mmap
- Allocators
- Fragmentation
#### Project 32 — Custom Memory Allocator

**Build**
- Implement malloc/free/calloc/realloc concepts in a controlled environment
Milestone: understand memory allocation beneath the STL.

## STAGE 8 — Kernel / OS Development

### Chapter 33 — Boot Process

**Learn**
- BIOS/UEFI
- Bootloader
- Kernel
- Initialization
#### Project 33 — Bootable Program

**Build**
- Create a bootable image
- Execute your own code
Milestone: produce code that boots outside a normal user-space process.
### Chapter 34 — Kernel Basics

**Learn**
- Kernel/user mode
- Interrupts
- GDT
- IDT
- System calls
#### Project 34 — Tiny Kernel

**Build**
- Boot
- Screen output
- Keyboard input
- Interrupt handling
Milestone: enter kernel development.
### Chapter 35 — Kernel Memory

**Learn**
- Physical memory
- Virtual memory
- Paging
- Kernel heap
- Allocators
#### Project 35 — Kernel Memory Manager

**Build**
- Physical allocator
- Virtual memory
- Kernel heap
Milestone: manage memory inside the kernel.
### Chapter 36 — Processes and Scheduling

**Learn**
- Process structures
- Task switching
- Scheduling
- IPC
#### Project 36 — Tiny Multitasking OS

**Build**
- Multiple tasks
- Context switching
- Scheduler
Milestone: support multitasking.
### Chapter 37 — Filesystems

**Learn**
- Blocks
- Inode concepts
- Directories
- Metadata
- Journaling concepts
#### Project 37 — Your Own Filesystem

**Build**
- Build PriyoFS inside a disk image
Milestone: implement persistent storage concepts.
### Chapter 38 — OS Capstone

**Learn**
- Integrate boot, kernel, memory, scheduling, input, filesystem, syscalls and user programs
#### Project 38 — Mini Operating System

**Build**
- Bootloader
- Kernel
- Memory manager
- Scheduler
- Keyboard
- Terminal
- Filesystem
- System calls
- User programs
- Shell
Milestone: a working educational operating system.

## STAGE 9 — Networking

### Chapter 39 — Networking Fundamentals

**Learn**
- IP
- TCP/UDP
- Ports
- DNS
- Sockets
- HTTP
- TLS concepts
#### Project 39 — TCP Chat

**Build**
- Server
- Client
- Multiple users
- Rooms
Milestone: build networked applications.
### Chapter 40 — Networking Programming

**Learn**
- Non-blocking sockets
- Event loops
- epoll
- Connection handling
#### Project 40 — High Performance Server

**Build**
- HTTP server
- GET/POST
- Routing
- Headers
- JSON
- Concurrency
Milestone: understand event-driven servers.
### Chapter 41 — Networked Systems

**Learn**
- Real-time networking concepts
- Client/server architecture
- State synchronization
#### Project 41 — Multiplayer Server

**Build**
- Build a real-time multiplayer backend
Milestone: apply networking to interactive systems.

## STAGE 10 — Databases

### Chapter 42 — Storage Engines

**Learn**
- Pages
- Records
- Indexes
- B-trees
- WAL
- Transactions
#### Project 42 — Key-Value Database

**Build**
- set
- get
- delete
- scan
- Disk persistence
Milestone: understand database storage internals.
### Chapter 43 — SQL Engine

**Learn**
- Tokenizer
- Parser
- AST
- Execution plan
- Storage
#### Project 43 — Mini SQL Database

**Build**
- CREATE TABLE
- INSERT
- SELECT
- UPDATE
- DELETE
Milestone: understand a database as a language + execution engine.

## STAGE 11 — Compilers

### Chapter 44 — Lexing

**Learn**
- Tokens
- Lexer
- Lexical grammar
#### Project 44 — Lexer

**Build**
- Build a lexer for your own language
Milestone: turn source text into structured tokens.
### Chapter 45 — Parsing

**Learn**
- Grammar
- Recursive descent
- AST
- Operator precedence
#### Project 45 — Parser

**Build**
- Variables
- Functions
- Expressions
- Conditions
- Loops
Milestone: turn tokens into an AST.
### Chapter 46 — Compiler

**Learn**
- Semantic analysis
- IR
- Code generation
- Optimization
- Assembly generation
#### Project 46 — PriyoLang

**Build**
- Build a programming language that compiles to native executable code
Milestone: understand a complete compilation pipeline.

## STAGE 12 — Graphics + Game Development

### Chapter 47 — Computer Graphics

**Learn**
- Pixels
- Coordinate systems
- Vectors and matrices
- Transformations
- Projection
- Rasterization
- Shaders
- GPU pipeline
#### Project 47 — Software Renderer

**Build**
- Triangle
- Cube
- Camera
- Textures
- Lighting
Milestone: understand rendering without a game engine.
### Chapter 48 — OpenGL / Vulkan / DirectX

**Learn**
- GPU buffers
- Shaders
- Pipelines
- Textures
- Command buffers
- Synchronization
#### Project 48 — 3D Renderer

**Build**
- Models
- Textures
- Lighting
- Camera
- Shadows
Milestone: build a real-time renderer.
### Chapter 49 — Game Programming

**Learn**
- Game loop
- Input
- Physics
- Collision
- Animation
- Audio
- ECS concepts
- Scene management
#### Project 49 — Complete Game

**Build**
- Build a complete 2D game
- Then build a 3D game
Milestone: ship a complete game.
### Chapter 50 — Game Engine Architecture

**Learn**
- Engine core
- Renderer
- Window
- Input
- Physics
- Audio
- Assets
- Scene
- ECS
- Scripting
- Editor
- Serialization
- Networking
#### Project 50 — PRYO ENGINE

**Build**
- Build Core, Memory, Math, ECS, Renderer, Physics, Audio, Input, Networking, AssetSystem, SceneSystem, Scripting and Editor
- Use the engine to make a game
Milestone: design and build your own game-engine architecture.

## BONUS — Git / Developer Infrastructure

#### Project G1 — File Hashing System

**Learn**
- Hash files
- Understand content addressing
#### Project G1 — File Hashing System

**Build**
- Hash files
- Compare content by hash
Milestone: understand the basis of content-addressed storage.
#### Project G2 — Snapshot System

**Learn**
- Map files to hashes
- Build immutable-ish snapshots
#### Project G2 — Snapshot System

**Build**
- Track working-tree files
- Create snapshots
Milestone: model versioned filesystem state.
#### Project G3 — Mini Git

**Learn**
- Working tree
- Index
- Objects
- Commit graph
#### Project G3 — Mini Git

**Build**
- pgit init
- pgit add
- pgit status
- pgit commit
- pgit log
- pgit checkout
- pgit diff
Milestone: build a simplified distributed-version-control core.

## Project Ladder

1. Calculator
2. Text Analyzer
3. Dynamic Array
4. Banking System
5. Inventory System
6. Game Entity System
7. Mathematics Library
8. Mini STL
9. Resource Manager
10. File Explorer
11. Custom Allocator
12. CPU Emulator
13. Binary Inspector
14. Unix Shell
15. Thread Pool
16. TCP Server
17. Key-Value Database
18. Mini SQL Database
19. Programming Language
20. Bootable Kernel
21. Mini Operating System
22. Software Renderer
23. 3D Renderer
24. 2D Game
25. 3D Game
26. Mini Git
27. PRYO ENGINE

## Final Competency Target

At completion, the goal is not merely to know C++. You should be able to reason about memory, CPU execution, executable formats, operating systems, concurrency, networking, storage, compilers and rendering—and use C++ to implement systems in each domain.

---

## Completion Standard

By the end of this roadmap, the target is not merely to *know C++*. The target is to be able to reason about **memory, CPU execution, executable formats, operating systems, concurrency, networking, storage, compilers, and rendering**—and use C++ to implement systems in each domain.

### Core Capstones

| Domain | Capstone |
|---|---|
| C++ | Generic containers, resource management, math library |
| Systems | Custom allocator, CPU emulator, binary inspector |
| Linux | Unix shell, process manager, thread pool |
| OS | Bootable kernel → Mini Operating System |
| Networking | TCP chat → high-performance server |
| Databases | Key-value database → Mini SQL database |
| Compilers | Lexer → parser → **PriyoLang** |
| Graphics | Software renderer → 3D renderer |
| Games | 2D game → 3D game |
| Engine | **PRYO ENGINE** |
| Developer Tools | **Mini Git** |

> **Rule:** Build. Break. Debug. Understand. Rebuild. Then advance.
