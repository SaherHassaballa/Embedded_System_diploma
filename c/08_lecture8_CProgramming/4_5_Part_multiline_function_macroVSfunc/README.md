# Macros vs Functions

---

## 🔴 Macros

- Macros are **preprocessed** (expanded before compilation).
- **No type checking** is performed.
- Errors may be **hard to understand**, since they appear after expansion.
- **Difficult to debug** (no stack frame, no function call).
- Macros may **increase code size** due to expansion.
- Execution can be **faster** (no function-call overhead).
- Useful for **small, frequently used code**.
- **No scope checking** (can cause unexpected side effects).

---

## 🔵 Functions

- Functions are **compiled**, not preprocessed.
- **Full type checking** is performed.
- **Compile-time errors** are detected properly.
- **Easy to debug** (stack frame exists).
- Code size is **not increased**.
- Slightly **slower** due to function-call overhead.
- Suitable for **large and complex logic**.
- **Scoped and safer** than macros.
