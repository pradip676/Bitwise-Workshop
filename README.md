# Bitwise Workshop 

Welcome to the dark (and bitwise) side of C programming \
This little beast of a project is all about flipping bits, twisting bytes, and rotating numbers like it’s nobody’s business.

If you ever wanted to count leading zeros like a wizard or rotate bits like a digital ninja, this is your jam.

---

##  What This Does

This C program performs four low-level bitwise operations using a clean, menu-based interface in your terminal:

1. **Count Leading Zeros**
2. **Endian Swap** (because byte order drama is real)
3. **Rotate Right** (spin me right round, baby)
4. **Parity Check** (odd or even number of 1s? Let’s find out)

All done using pure bitwise operators — no cheats, no built-ins, just raw C wizardry.

---

##  Why I Built This

Because bitwise operations are 🔥 and a core part of systems-level programming.\
Also because doing stuff the hard way (with `&`, `|`, `^`, and `~`) makes you 10x cooler.

---

##  What I Learned

- Bitwise magic: ANDs, ORs, shifts, and flips
- Writing modular C code across multiple files
- Input validation and how to not crash on garbage input
- Why endian-ness matters more than you think
- That rotating a number by 0 should *actually* do nothing (lol)

---

##  File Structure

```plaintext
bitwise-workshop/
├── major1.c          # Menu + input handling + main() logic
├── major1.h          # Function prototypes + includes
├── clz.c             # Count leading zeros implementation
├── endian.c          # Endian byte swap
├── rotate.c          # Rotate bits to the right
├── parity.c          # Check if number has even or odd parity
├── Makefile          # Build script with `make`
└── README.md         # You’re reading it!
```

---

##  Build Instructions

To compile the project, run:

```sh
make
```

To run the program, execute:

```sh
./bitwisemenu
```

To clean up compiled files, run:

```sh
make clean
```

---

##  Sample Output

```bash
$ ./bitwisemenu
Enter the menu option for the operation to perform:
(1) Count Leading Zeroes
(2) Endian Swap
(3) Rotate-right
(4) Parity
(5) EXIT
--> 3
Enter a 32-bit number (>= 1 and <= 4294967295): 8
Enter the number of positions to rotate-right the input (0–31): 2
8 rotated by 2 positions gives: 1073741824
```

---

## Known Issues

- Input assumes you're entering numeric values — no super fancy input parsing (yet).  
- Handles only 32-bit unsigned integers as expected.  
- Will mock you silently if you try to rotate more than 31 bits 😅

---

##  Bonus Bits

- All logic is implemented using bitwise operations: `&`, `|`, `^`, `~`, `<<`, `>>`  
- It’s a great practice project if you're diving into low-level C or preparing for systems programming interviews.

---


