/*
 * The expressions a + (b + c) and (a + b) + c are mathematically equivalent
 * due to the associative property of addition:
 *    a + (b + c) == (a + b) + c
 *
 * However, the behavior may differ when considering the possibility of **overflow**
 * or **undefined behavior** in C++ integer arithmetic, especially with signed integers.
 *
 * C++ integers are stored with a fixed number of bits (e.g., 32-bit for int), and
 * when an integer exceeds its maximum or minimum value, it wraps around (for unsigned
 * integers) or results in undefined behavior (for signed integers).
 *
 * Consider the following differences in overflow behavior:
 *
 * 1. Expression 1: a + (b + c)
 *    - This evaluates b + c first, and then adds a.
 *    - Overflow might happen during the evaluation of b + c, or during a + (b + c).
 *
 * 2. Expression 2: (a + b) + c
 *    - This evaluates a + b first, and then adds c.
 *    - Overflow might occur when adding a + b, or when adding (a + b) + c.
 *
 * Overflow occurring at different points in these two expressions might yield different results.
 * For example, if a, b, and c are large enough integers to cause overflow:
 *
 * Case 1: a = INT_MAX, b = 1, c = 1 (signed integer overflow)
 *    - a + (b + c) = INT_MAX + (1 + 1) results in overflow.
 *    - (a + b) + c = (INT_MAX + 1) + 1 also overflows.
 *    - In both cases, overflow leads to a negative result, but the specific behavior
 *      may depend on the system or compiler.
 *
 * Case 2: a = INT_MIN, b = -1, c = -1 (signed integer underflow)
 *    - a + (b + c) = INT_MIN + (-1 - 1) results in overflow/underflow.
 *    - (a + b) + c = (INT_MIN - 1) + (-1) also overflows/underflows differently.
 *    - The two expressions could cause different results due to how overflow/underflow
 *      is handled by the compiler or platform.
 *
 * Conclusion:
 * - For **unsigned integers**, overflow wraps around, but the order of operations 
 *   can still lead to different results.
 * - For **signed integers**, overflow/underflow results in undefined behavior, which 
 *   can cause the two expressions to behave differently depending on the system/compiler.
 */
