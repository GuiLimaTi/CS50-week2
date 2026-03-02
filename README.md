# Week 2 – Arrays & Strings (CS50)

This week focused on arrays, string manipulation, and character-level processing in C. The projects below emphasize iteration over strings, ASCII-based transformations, input validation, and modular program design.

---

## Projects

### 1) Scrabble
A Scrabble scoring program that compares two words and determines the winner based on official letter values.

**Highlights**
- Uses arrays to store letter scores
- Iterates through strings character by character
- Handles uppercase/lowercase inputs
- Ignores non-alphabetic characters
- Compares totals and prints the result

---

### 2) Readability
A program that estimates the readability grade level of a given text using the Coleman–Liau index.

**Highlights**
- Counts letters, words, and sentences
- Applies a readability formula with floating-point arithmetic
- Outputs a grade level approximation

---

### 3) Substitution Cipher
An encryption program that applies a substitution cipher using a provided 26-letter key.

**Highlights**
- Accepts a 26-character key via command-line argument
- Validates key length, alphabetic-only characters, and uniqueness (no repeats)
- Preserves original letter case
- Leaves non-alphabetic characters unchanged
- Produces ciphertext from user-provided plaintext

---

## Key Concepts Practiced
- Arrays (1D)
- Strings as character arrays
- ASCII manipulation and character mapping
- Loops and iteration patterns
- Input validation and edge cases
- Functions and clean code structure
- Command-line arguments (`argc`, `argv`)
