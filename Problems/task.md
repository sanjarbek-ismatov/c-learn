# Wake-up Plan — C, Re-Entry After ~6 Weeks Off

> Today: **Tue, Apr 28, 2026**.
> Last real commit: **Mar 18, 2026** (`quick sort trial`) — and that file is broken.
> Last commit before that: **Dec 7, 2025**. So your real momentum stopped four-and-a-half months ago.
> You stopped mid-Chapter 9 of *C Programming: A Modern Approach* (King), stuck on quicksort.
> This plan assumes: tired brain, low willpower, but you still remember pointers, structs, malloc, and the basics.

---

## How to read this file

- **Each "day" = ~30–60 minutes.** No more. If you do less, that's fine — just do it daily.
- Every step has either a file path or a URL. No "go figure it out."
- Tick boxes as you go. Commits are the celebration.
- If your brain fogs, do step 0 again. Don't escalate.

---

## Day 0 — Today (15 min). Just turn the lights on.

Goal: re-touch the project. Nothing more.

- [ ] Open repo: `cd ~/Projects/c-learn`.
- [ ] Skim your own README: `Learning/C Programming - Modern Approach/README.md` and the top-level `README.md`.
- [ ] Run something **you actually wrote**. Pick one of these — git confirms both are yours:
  - **Option A — `Projects/Replication of functions/` (Nov 11, 2025).** You re-implemented `toupper` and `atoi` yourself (`toupper_c`, `atoi_c`).
    ```bash
    cd "Projects/Replication of functions"
    gcc main.c custom_library.c -Wall -Wextra -o /tmp/replib && /tmp/replib
    ```
    Expected output: `C -23432432`. Open `custom_library.c` and read it — that's your handwriting.
  - **Option B — `Learning/C Programming - Modern Approach/7.Basic Types/Programming Projects/scrabble.c` (Nov 22, 2025).** You wrote a Scrabble scorer with a big `switch`.
    ```bash
    cd "Learning/C Programming - Modern Approach/7.Basic Types/Programming Projects"
    gcc scrabble.c -Wall -Wextra -o /tmp/scrabble && /tmp/scrabble
    ```
    Type a word, see its Scrabble value.
- [ ] Read your own notes — they're short:
  - `Learning/C Programming - Modern Approach/8.Arrays/knowledge.md`
  - `Learning/C Programming - Modern Approach/9.Functions/knowledge.md`

> Note: `Learning/.../8.Arrays/Programs/deal.c` and similar files under `8.Arrays/Programs/`, `5.Selection Statements/Programs/`, `6.Loops/Programs/`, `2.Formatted Input - Output/Section *` are **typed-in book examples from King**, not your work — git only knows them via the *"old repo unarchived and merged"* commit. Don't waste foggy-brain energy trying to "remember" them. Your work lives in the `Programming Projects/`, `Exercises/`, and `Projects/` folders.

**Done condition:** you remember that this repo is yours and you wrote real code in it.

---

## Day 1 — Inventory & one-line bug fix (30 min)

Goal: prove to yourself you can still read C.

- [ ] Open `Problems/FreeCodeCamp/Array Diff/main.c`. There is a real bug on line 14:
  ```c
  if (strcmp(arr1[i], arr2[j]) == 1) {
  ```
  `strcmp` returns `0` when strings are equal, and any non-zero on difference (positive or negative based on ordering). The comparison is wrong. Fix it to `== 0` and re-run.
  - Reference: <https://en.cppreference.com/w/c/string/byte/strcmp>
- [ ] Compile and test:
  ```bash
  cd "Problems/FreeCodeCamp/Array Diff"
  gcc main.c -o /tmp/diff -Wall -Wextra && /tmp/diff
  ```
- [ ] (Optional, if brain is awake.) Notice: this function still mutates the input array and prints the diff in a weird way. Don't fix that yet. Just notice.
- [ ] Commit: `git commit -am "Array Diff: fix strcmp equality check"`

**Done condition:** one green commit on a Tuesday.

---

## Day 2 — Re-read what you forgot in CPMA Ch. 9 (45 min)

Goal: rebuild the recursion intuition before touching quicksort again.

- [ ] Re-read King, *C Programming: A Modern Approach (2nd ed.)*, **Chapter 9 — Functions**, sections **9.1–9.6**. The one that matters most for what's next is **9.6 "Recursion"** (pp. ~190–197 of the 2nd edition).
  - Author's site / book companion: <https://knking.com/books/c2/>
  - If you don't have a copy nearby, the official errata + section listing: <https://knking.com/books/c2/errata.html>
- [ ] Watch one short video as a brain-warmer, **only one**:
  - Computerphile, *Quicksort* (8 min): <https://www.youtube.com/watch?v=XE4VP_8Y0BU>
- [ ] Visualize partitioning until it clicks (5 min):
  - <https://visualgo.net/en/sorting>  → pick **Quick Sort**, click **Run**.
- [ ] Take 4 lines of notes in `Learning/C Programming - Modern Approach/9.Functions/knowledge.md` under a new heading `## Recursion`. Just bullet points: what's the base case, what's the recursive case, what does "partition" do.

**Done condition:** you can say out loud "pick a pivot, move smaller things left, bigger things right, recurse on each side, base case is array of length ≤ 1."

---

## Day 3 — Fix your broken quicksort (60 min)

Goal: take the rotten file from March and replace it with one that compiles and sorts.

- [ ] Open `Learning/C Programming - Modern Approach/9.Functions/Programs/quick_sort.c`. Read it. It is broken on every line:
  - `quick_sort` returns `int*` for no reason and never returns.
  - It recurses on the *same* range twice (`0, end` both times), so it's infinite.
  - There's no base case.
  - The second `sort` function mixes `low++`/`high--` with comparisons against `pivot` instead of `arr[low]` / `arr[high]`.
- [ ] Throw it out. Start over with the standard Lomuto partition or Hoare partition. Recommended: **Lomuto** (simpler to read when tired).
  - Reference walkthrough (use it side-by-side, do not just paste):
    - <https://en.wikipedia.org/wiki/Quicksort#Lomuto_partition_scheme>
    - Geeks for Geeks step-by-step: <https://www.geeksforgeeks.org/quick-sort-algorithm/>
- [ ] API to implement (write these signatures yourself, then fill in):
  ```c
  void quicksort(int arr[], int low, int high);
  int  partition(int arr[], int low, int high); /* Lomuto */
  ```
- [ ] In `main`, sort `{5, 2, 8, 1, 9, 3, 7, 4, 6}` and print it.
- [ ] Compile with warnings on:
  ```bash
  gcc -std=c11 -Wall -Wextra -Wpedantic -g quick_sort.c -o /tmp/qs && /tmp/qs
  ```
- [ ] Commit: `git commit -am "CPMA 9: working quicksort (Lomuto)"`

**Done condition:** sorted output `1 2 3 4 5 6 7 8 9`.

---

## Day 4 — Finish CPMA Chapter 9 (45 min)

Goal: stop leaving Ch. 9 as the half-eaten apple in the fridge.

- [ ] Re-read **9.7 "Q&A"** in King's Ch. 9. It clears up small confusions you definitely have.
- [ ] Do **two** end-of-chapter exercises only. Pick from any of these (all are short):
  - Ex. 1 (factorials with recursion)
  - Ex. 4 (digit sum, recursive)
  - Ex. 9 (`gcd(m, n)` recursive, Euclid's algorithm)
  - Ex. 11 (`power(x, n)` recursive)
- [ ] Put them under `Learning/C Programming - Modern Approach/9.Functions/Exercises/` (create the folder).
- [ ] Commit: `git commit -m "CPMA 9: chapter exercises"`

**Done condition:** Ch. 9 closed in your head.

---

## Day 5 — Reset day (read-only, 20 min)

You will want to skip this day. Do it anyway. No code.

- [ ] Read **Beej's Guide to C Programming**, Chapter 6 — *Pointers*, just sections 6.1–6.4:
  <https://beej.us/guide/bgc/html/split/pointers.html>
  Beej is friendly, short, modern. He'll undo any K&R fog.
- [ ] Read your own old notes once more:
  `Learning/GeekForGeeks/8.Pointers/` — you wrote `arithmetic.c`, `multid.c`, `double-pointer.c`. Open them. Recognize past-you.

**Done condition:** brain pre-loaded for tomorrow.

---

## Day 6 — Begin CPMA Chapter 10: Program Organization (40 min)

Why this and not Ch. 11 yet: Ch. 10 is *short*, mostly conceptual, and explains why your `Replication of functions/` project's split into `.h` and `.c` works. Easy win to keep the streak.

- [ ] Read King Ch. 10 sections **10.1–10.3** (local variables, external variables, blocks). 30 minutes max.
- [ ] Look at your own existing example: `Projects/Replication of functions/custom_library.h` + `custom_library.c` + `main.c`. You already did this — Ch. 10 just names what you did.
- [ ] Add **one** new function to `custom_library`: `int strlen_c(const char *s);`. Wire it up in `main.c`. Compile:
  ```bash
  cd "Projects/Replication of functions"
  gcc main.c custom_library.c -Wall -Wextra -o /tmp/replib && /tmp/replib
  ```
- [ ] Commit.

**Done condition:** Ch. 10 done, one new function in your custom library.

---

## Day 7 — CPMA Chapter 11: Pointers, part 1 (60 min)

This is the chapter where C stops being a hobby. Take it slowly. **Two days for this chapter.**

- [ ] Read **11.1 Pointer Variables** and **11.2 The Address and Indirection Operators**.
- [ ] Pair the reading with **cdecl** to translate confusing declarations as you go:
  - <https://cdecl.org/>  (e.g. paste `int *(*p)[10]` and read the English).
- [ ] Read **11.3 Pointer Assignment** and **11.4 Pointers as Arguments**.
- [ ] Write a tiny `swap(int *a, int *b)` function in a new file:
  `Learning/C Programming - Modern Approach/11.Pointers/11.4.Pointers as Arguments/swap.c`
- [ ] Confirm it actually swaps in `main`. Print before/after.
- [ ] Commit.

**Done condition:** you can explain to yourself why `swap(int, int)` (no pointers) cannot work.

---

## Day 8 — CPMA Chapter 11: Pointers, part 2 (45 min)

- [ ] Read **11.5 Pointers as Return Values**.
- [ ] Read **11.6 Pointers and `const`**. Notice your own `int toupper_c(const int ch)` — that's exactly this.
- [ ] Do exercises **1, 2, 3, 6** from end of Ch. 11. They're tiny.
- [ ] Reference for tricky cases: <https://en.cppreference.com/w/c/language/pointer>
- [ ] Commit.

**Done condition:** Ch. 11 closed.

---

## Day 9 — Apply: finish your generic Vector (60 min)

This is the ghost project that's been called *INCOMPLETE* in the folder name since last summer. Now you actually have the tools.

Open `Projects/INCOMPLETE/Vector implementation/Unfinished Generic Vector/`. There are real, specific bugs and missing pieces to fix. Address them in order:

1. **`vec_init`**: if `initial_size == 0`, `safe_malloc(0)` returns NULL and the vector is dead on arrival. Either:
   - Force a minimum capacity (e.g. 4), or
   - Allow `buffer = NULL` and grow on first `vec_push`.
   Pick one. Document the choice in a comment.
2. **`size_change`**: if `capacity == 0`, doubling stays at 0. Same fix as above.
3. **`vec_print`**: it prints `%p` (the pointer addresses), not the values. For a generic vector this is actually a hard problem — you don't know the type. Solution: take a `void (*print_elem)(const void *)` callback. This is exactly the **callback pattern** you already played with in `Learning/GeekForGeeks/6.Functions/1.Callbacks/main.c`.
4. **`vec_clear`**: it `free`s `buffer` but not the per-element `malloc`s done in `vec_push`. Memory leak. Loop and free each.
5. Add a `void vec_pop(Vector *vec);` and a `size_t vec_len(const Vector *vec);` getter.

Resources you'll likely want:
- `qsort` signature in cppreference shows the exact callback idiom: <https://en.cppreference.com/w/c/algorithm/qsort>
- Memory checking: run with `valgrind`:
  ```bash
  gcc -g main.c vector.c -o /tmp/vec
  valgrind --leak-check=full /tmp/vec
  ```
  If you don't have valgrind: `sudo pacman -S valgrind` (you're on CachyOS / Arch).

- [ ] Move the folder out of `INCOMPLETE/` into `Projects/` once it's leak-free.
- [ ] Commit.

**Done condition:** valgrind reports `0 errors from 0 contexts` and `definitely lost: 0 bytes`.

---

## Day 10 — One LeetCode, properly (45 min)

Goal: prove the rust is gone.

- [ ] Pick one easy problem from <https://leetcode.com/problemset/?difficulty=EASY&topicSlugs=array> that uses pointers + size returns (the LeetCode C signature pattern with `int* returnSize`).
  Suggested: **2965. Find Missing and Repeated Values** or **1672. Richest Customer Wealth**.
- [ ] Write it locally in `Problems/Leetcode/<num>. <name>/main.c`. Compile with `-Wall -Wextra -Wpedantic`. Pass it on LeetCode.
- [ ] Commit.

**Done condition:** new green check in your LeetCode folder, first one since *2469. Convert the Temperature*.

---

## Reference shelf (bookmark these once)

Book — your spine for the curriculum:
- **K. N. King, *C Programming: A Modern Approach*, 2nd ed.**
  Companion site: <https://knking.com/books/c2/>
  Errata (read once before each chapter): <https://knking.com/books/c2/errata.html>

Free, modern companion guide (read alongside King when stuck):
- **Beej's Guide to C Programming**: <https://beej.us/guide/bgc/html/split/>

Language reference (use instead of guessing):
- **cppreference (C section)**: <https://en.cppreference.com/w/c>
- **cdecl** (translate hairy declarations): <https://cdecl.org/>

Algorithm visualizers (use when an algorithm "won't click"):
- **VisuAlgo**: <https://visualgo.net/en>
- **USFCA visualization**: <https://www.cs.usfca.edu/~galles/visualization/Algorithms.html>

Tooling you should have ready (CachyOS / Arch):
```bash
sudo pacman -S --needed gcc gdb valgrind clang-tools-extra man-pages
```
- `gcc -std=c11 -Wall -Wextra -Wpedantic -g` is your default. Don't compile naked.
- `gdb /tmp/yourprog` then `run`, `bt`, `print var`. Nothing more on day one.
- `valgrind --leak-check=full ./prog` for any program that calls `malloc`.

Practice (after Day 10 only, not before):
- LeetCode in C: <https://leetcode.com/problemset/?topicSlugs=&difficulty=EASY>
- Exercism C track (mentored): <https://exercism.org/tracks/c>

---

## Rules for the foggy version of you

1. **One day = one commit.** Even a one-character fix. Streaks beat sprints right now.
2. **Compile with `-Wall -Wextra -Wpedantic`** every time. The compiler is smarter than half-asleep you.
3. **No new project until Day 9.** You already have unfinished projects. Finish the Vector first.
4. **No new book.** King → Beej (when stuck) → cppreference (when looking up). That's it.
5. **If you can't focus, do Day 0 again.** It's allowed.
6. **Don't read this file from the top every day.** Just open the next unchecked box.

---

## What "awake" looks like in 10 days

By Day 10 you will have:
- Closed CPMA chapters 9, 10, 11.
- A working `quicksort` in your repo instead of a broken one.
- A leak-free generic `Vector` you can actually use.
- A new LeetCode green check.
- The boring but valuable habit of compiling with warnings and running with `valgrind`.

That's enough. Don't plan further than Day 10 today.
