# CS50x Week 2 – Arrays and Strings

Problem sets from Week 2 of Harvard's CS50x, focused on arrays, strings and character-level processing in C.

**Language:** C · **Course:** [CS50x](https://cs50.harvard.edu/x/) · **Status:** Completed (2026)

## Overview

This week I worked with strings as arrays of characters: iterating over text, converting between letters and their ASCII values, and validating command-line arguments.

## Projects

| Project | File | Description | Key concepts |
|---|---|---|---|
| Scrabble | `scrabble.c` | Scores two words using Scrabble letter values and declares the winner | Arrays, character iteration, case handling |
| Readability | `readability.c` | Estimates the reading grade level of a text using the Coleman–Liau index | Counting letters, words and sentences, floating-point maths |
| Substitution | `substitution.c` | Encrypts text with a 26-letter substitution key passed on the command line | `argc`/`argv`, key validation, ASCII mapping |

## How to run

Requires the [CS50 Library](https://cs50.readthedocs.io/libraries/cs50/c/) (pre-installed in CS50's Codespace).

```bash
make substitution
./substitution VCHPRZGJNTLSKFBDQWAXEUYMOI
```

## What I learned

- How strings are stored as arrays of characters in C
- Transforming characters using ASCII values while preserving case
- Validating command-line input and handling edge cases
- Splitting logic into small, reusable functions

## Academic honesty

These solutions were written by me as part of CS50x. If you're taking the course, please follow CS50's [academic honesty policy](https://cs50.harvard.edu/x/honesty/) and write your own code.

---

**Guilherme Lima** · Aspiring IT Support Technician · [LinkedIn](https://www.linkedin.com/in/glimaalmeida) · [GitHub](https://github.com/GuiLimaTi)
