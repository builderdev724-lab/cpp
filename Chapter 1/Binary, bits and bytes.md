Chapter 1 — Binary, Bits, Bytes, CPU, RAM & Storage


---

# 1. Binary vs Decimal

## Decimal Number System

The **Decimal Number System** is the number system humans commonly use in everyday life.

It contains ten digits:

```text
0 1 2 3 4 5 6 7 8 9
```

It is therefore called **Base 10**.

The positions represent powers of 10:

```text
10³  10²  10¹  10⁰
1000 100   10   1
```

Example:

```text
523 = 5×100 + 2×10 + 3×1
    = 500 + 20 + 3
```

## Binary Number System

The **Binary Number System** uses only two digits:

```text
0 1
```

It is therefore called **Base 2**.

Binary positions represent powers of 2:

```text
2⁷  2⁶  2⁵  2⁴  2³  2²  2¹  2⁰
128  64   32   16   8    4    2    1
```

---

# 2. Why Do Computers Use Binary?

Computer hardware contains electronic circuits that can distinguish between logical states.

For learning purposes, we can model those states as:

```text
OFF → 0
ON  → 1
```

A single binary digit is called a **bit**.

> The ON/OFF switch analogy is useful for learning, but modern CPUs use electronic circuits and transistors rather than literal mechanical switches.

---

# 3. Bits

A **bit** is the smallest unit of digital information.

```text
1 bit → 0 or 1
```

With more bits:

```text
1 bit  → 2 combinations
2 bits → 4 combinations
3 bits → 8 combinations
4 bits → 16 combinations
```

General rule:

```text
n bits → 2ⁿ possible combinations
```

Examples:

| Bits | Possible combinations |
|---:|---:|
| 1 | 2 |
| 2 | 4 |
| 4 | 16 |
| 8 | 256 |
| 16 | 65,536 |
| 32 | 4,294,967,296 |
| 64 | 18,446,744,073,709,551,616 |

---

# 4. Bytes

A **byte is 8 bits**.

```text
1 byte = 8 bits
```

Example:

```text
10110101
```

is one byte.

Because:

```text
2⁸ = 256
```

one byte has 256 possible bit patterns.

For an **unsigned 8-bit integer**, these patterns represent:

```text
0 → 255
```

In C++:

```cpp
#include <cstdint>

std::uint8_t value = 255;
```

---

# 5. Understanding Binary Numbers

For four binary digits:

```text
2³  2²  2¹  2⁰
 8   4   2   1
```

Consider:

```text
1011
```

Calculate:

```text
1×8 + 0×4 + 1×2 + 1×1
= 8 + 0 + 2 + 1
= 11
```

Therefore:

```text
1011₂ = 11₁₀
```

---

# 6. Counting in Binary

Binary counting:

```text
0 + 1 = 1
1 + 1 = 10
10 + 1 = 11
11 + 1 = 100
100 + 1 = 101
101 + 1 = 110
110 + 1 = 111
111 + 1 = 1000
```

Why:

```text
1 + 1 = 10
```

?

Because binary has no digit `2`.

In decimal:

```text
9 + 1 = 10
```

In binary:

```text
1 + 1 = 10
```

The binary `10` means:

```text
1×2 + 0×1 = 2
```

---

# 7. The First Sixteen Numbers

| Decimal | Binary |
|---:|---:|
| 0 | 0000 |
| 1 | 0001 |
| 2 | 0010 |
| 3 | 0011 |
| 4 | 0100 |
| 5 | 0101 |
| 6 | 0110 |
| 7 | 0111 |
| 8 | 1000 |
| 9 | 1001 |
| 10 | 1010 |
| 11 | 1011 |
| 12 | 1100 |
| 13 | 1101 |
| 14 | 1110 |
| 15 | 1111 |

Four bits can represent:

```text
0 → 15
```

which gives 16 possible values.

---

# 8. Binary Place Values

For eight bits:

```text
128 64 32 16 8 4 2 1
```

Example:

```text
11001010
```

Calculate:

```text
1×128 = 128
1×64  = 64
0×32  = 0
0×16  = 0
1×8   = 8
0×4   = 0
1×2   = 2
0×1   = 0
```

Therefore:

```text
11001010₂ = 202₁₀
```

---

# 9. Decimal → Binary

Example:

```text
13
```

Break it into powers of two:

```text
13 = 8 + 4 + 1
```

Therefore:

```text
8 4 2 1
1 1 0 1
```

So:

```text
13₁₀ = 1101₂
```

Another example:

```text
42 = 32 + 8 + 2
```

Therefore:

```text
42₁₀ = 101010₂
```

As an 8-bit value:

```text
00101010
```

---

# 10. Hexadecimal

Binary numbers can become long, so programmers frequently use **hexadecimal**, or Base 16.

Hexadecimal digits are:

```text
0 1 2 3 4 5 6 7 8 9 A B C D E F
```

The letters mean:

```text
A = 10
B = 11
C = 12
D = 13
E = 14
F = 15
```

The common C/C++ notation for hexadecimal is:

```text
0x
```

Examples:

```text
0xA  = 10
0xF  = 15
0x10 = 16
0xFF = 255
```

---

# 11. Binary ↔ Hexadecimal

One hexadecimal digit represents exactly **4 bits**.

| Hex | Binary |
|---:|---:|
| 0 | 0000 |
| 1 | 0001 |
| 2 | 0010 |
| 3 | 0011 |
| 4 | 0100 |
| 5 | 0101 |
| 6 | 0110 |
| 7 | 0111 |
| 8 | 1000 |
| 9 | 1001 |
| A | 1010 |
| B | 1011 |
| C | 1100 |
| D | 1101 |
| E | 1110 |
| F | 1111 |

Therefore:

```text
0xAF
```

is:

```text
A    F
1010 1111
```

So:

```text
0xAF = 10101111₂
```

This relationship is extremely useful in systems programming, debugging and binary file analysis.

---

# 12. Bits vs Bytes

Do not confuse:

```text
b = bit
B = byte
```

Therefore:

```text
1 B = 8 b
```

Storage capacity is commonly expressed using bytes:

```text
KB
MB
GB
TB
```

Network speeds are commonly expressed using bits:

```text
Mbps
Gbps
```

Example:

```text
100 Mbps ÷ 8 = 12.5 MB/s
```

This is a theoretical unit conversion. Real transfer rates are affected by protocol overhead and other factors.

---

# 13. CPU

**CPU** means **Central Processing Unit**.

Its fundamental job is to execute machine instructions and operate on data.

A simplified CPU model contains:

```text
CPU
├── Control logic
├── Arithmetic / logic units
├── Registers
├── Cache
└── Other execution units
```

A C++ program eventually becomes machine instructions that a target CPU architecture can execute.

---

# 14. CPU Instructions

A CPU does not directly execute source code such as:

```cpp
std::cout << "Hello";
```

The source is compiled and linked into an executable containing machine code.

Common CPU architectures include:

```text
x86-64
ARM64
RISC-V
```

A simplified instruction sequence might conceptually contain:

```text
LOAD
ADD
COMPARE
JUMP
STORE
```

The exact instructions depend on the CPU architecture.

---

# 15. Registers

**Registers** are very small and very fast storage locations available to the CPU.

They can hold things such as:

- Values
- Addresses
- Intermediate results
- Stack information
- Instruction location
- Status/flags

On x86-64 you will eventually encounter:

```text
RAX
RBX
RCX
RDX
RSP
RBP
RIP
```

You do not need to memorize these yet.

The key concept is:

> Registers are storage locations that the CPU can directly use during instruction execution.

---

# 16. CPU Cache

CPU caches reduce the amount of time the CPU spends waiting for data.

A simplified hierarchy is:

```text
CPU registers
      ↓
L1 cache
      ↓
L2 cache
      ↓
L3 cache
      ↓
RAM
      ↓
SSD/HDD
```

Generally, the upper levels are smaller and faster, while lower levels are larger and slower.

Cache behavior becomes important when you study:

- C++ performance
- Data structures
- Game engines
- Multithreading
- Operating systems

---

# 17. RAM

**RAM** means **Random Access Memory**.

It is the computer's working memory.

When you launch a program, the operating system loads the program's required code and data into memory so the CPU can work with them.

Simplified:

```text
SSD
 ↓
Program data
 ↓
RAM
 ↓
CPU/cache
 ↓
Execution
```

RAM is generally much faster to access than persistent storage, but it is also usually much smaller.

---

# 18. RAM Is Volatile

RAM is normally **volatile memory**.

When power is removed, its contents are not retained.

Conceptually:

```text
Power ON
   ↓
RAM contains active data
   ↓
Power OFF
   ↓
RAM contents are lost
```

This differs from SSD/HDD storage, which is designed to retain data without continuous power.

---

# 19. Storage

Storage provides persistent data storage.

Examples:

```text
HDD
SATA SSD
NVMe SSD
USB storage
```

Operating systems, applications, source code, documents and game files are stored persistently here.

Example:

```text
SSD
├── Ubuntu
├── Applications
├── Projects
├── Games
└── Documents
```

---

# 20. RAM vs Storage

| Property | RAM | SSD/HDD |
|---|---|---|
| Main purpose | Active working data | Persistent data |
| Volatile | Yes | No |
| Typical capacity | Smaller | Larger |
| Relative access speed | Faster | Slower |
| Keeps data without power | No | Yes |
| Used while programs run | Yes | Used to load/save programs and data |

Example:

```text
32 GB RAM
1 TB SSD
```

means:

```text
32 GB → working memory
1 TB  → persistent storage
```

They are different resources.

---

# 21. Putting Everything Together

Suppose you write:

```cpp
int x = 10;
int y = 20;
int z = x + y;
```

The source file is stored on persistent storage.

After compilation and linking, an executable is created.

When you run it, a simplified model is:

```text
Source / executable
        ↓
      SSD
        ↓
Operating System
        ↓
       RAM
        ↓
   CPU cache
        ↓
     Registers
        ↓
       CPU
        ↓
Execute instructions
        ↓
      Result
```

The real system is more complicated, but this model is sufficient for this chapter.

---

# 22. Why This Matters for C++

| Computer concept | Later C++ topic |
|---|---|
| Bits / bytes | Integer representation |
| Addresses | Pointers |
| Memory | Stack and heap |
| CPU | Machine code |
| Registers | Assembly |
| Cache | Performance |
| Storage | Files |
| Binary data | Serialization |
| Processes | OS programming |
| Virtual memory | Kernel development |

---

# 23. Exercises

## A — Binary → Decimal

Convert manually:

```text
1010
1101
1111
10000
101101
11001010
11111111
```

## B — Decimal → Binary

Convert manually:

```text
5
8
10
15
25
42
100
255
```

## C — Hexadecimal → Decimal

```text
0xA
0xF
0x10
0x20
0xFF
0x100
```

## D — Hexadecimal → Binary

```text
0xA
0xF
0x1C
0x2A
0xFF
```

## E — Explain in Your Own Words

1. What is a bit?
2. What is a byte?
3. Why do 8 bits produce 256 possible combinations?
4. What is binary?
5. What is hexadecimal?
6. Why is hexadecimal useful to programmers?
7. What does a CPU do?
8. What are registers?
9. What is CPU cache?
10. What is RAM?
11. Why is RAM volatile?
12. What is persistent storage?
13. What is the difference between RAM and an SSD?
14. What happens when an executable stored on an SSD is launched?
15. Why is understanding memory important for C++?

---

# 24. Mini Project — Computer Inspector

Create a C++ command-line program called:

```text
computer-inspector
```

## Version 1

Display:

```text
=================================
        COMPUTER INSPECTOR
=================================

INTEGER SIZES

char       : ...
short      : ...
int        : ...
long       : ...
long long  : ...

BINARY

Decimal 5   = 00000101
Decimal 42  = 00101010
Decimal 255 = 11111111

HEXADECIMAL

Decimal 10  = 0xA
Decimal 255 = 0xFF

BIT CALCULATIONS

1 bit  = 2 combinations
8 bits = 256 combinations
16 bits = 65536 combinations
32 bits = ...

=================================
```

For Version 1, focus on:

- Bits
- Bytes
- Binary
- Hexadecimal
- C++ integer sizes

Do not worry about operating-system or hardware detection yet.

## Version 2 — Later

After learning more C++ and Linux, extend it to display:

- Operating-system information
- CPU information
- Memory information
- Architecture
- Executable path
- Process information

---

# 25. Completion Checklist

- [ ] Explain what a bit is.
- [ ] Explain what a byte is.
- [ ] Calculate `2ⁿ` for small values.
- [ ] Convert binary → decimal.
- [ ] Convert decimal → binary.
- [ ] Convert hexadecimal → decimal.
- [ ] Convert hexadecimal ↔ binary.
- [ ] Explain why hexadecimal is useful.
- [ ] Explain the basic role of a CPU.
- [ ] Explain registers.
- [ ] Explain CPU cache.
- [ ] Explain RAM.
- [ ] Explain persistent storage.
- [ ] Explain RAM vs SSD.
- [ ] Explain executable → RAM → CPU.
- [ ] Build Computer Inspector without copying a complete tutorial.

