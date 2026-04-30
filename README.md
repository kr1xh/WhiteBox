Implement a calculator that supports four basic operations:

add(a, b)      // Returns a + b
subtract(a, b) // Returns a - b
multiply(a, b) // Returns a * b
divide(a, b)   // Returns a / b (floating-point division, not integer division)
Important: All functions must handle both integers and floating-point numbers. If the result is a whole number, output it as an integer (e.g., 4 not 4.0). Otherwise, output the decimal value (e.g., 2.5).

Floating-point precision: Due to binary representation limitations, some decimal numbers cannot be stored exactly (e.g., 0.1, 5.1). When the mathematical result should be a clean decimal but floating-point arithmetic introduces small errors (e.g., 1.0999999999999996 instead of 1.1), round to a reasonable precision (10-12 decimal places) before outputting. If the rounded result is a whole number, output it as an integer.

<p>&nbsp;</p>
<p><strong class="example">Input:</strong></p>
<pre>
<strong>First line:</strong>integer Q (number of queries)
<strong>Next Q lines: </strong> a [operator] b where a and b are numbers and [operator] is +, -, *, or /
<strong>Output Format: </strong>
</pre>
<pre>
Output Q numbers, one per line, representing the result of each query. Omit .0 from whole number results.
</pre>
Constraints
−
10
9
≤
a
,
b
≤
10
9
−10 
9
 ≤a,b≤10 
9
 
1
≤
Q
≤
10
5
1≤Q≤10 
5
 
The result will fit in a 32-bit signed integer
All inputs will fit within 5 digits of precision.
Examples
Example 1
Input:
4
6 + 7
6 + 7.2
5 - 4
5.1 - 4
Output:
13
13.2
1
1.1
Example 2
Input:
2
4.5 * 2
2.5 * 2.5
Output:
9
6.25
Example 3
Input:
2
5 / 2
4 / 2
Output:
2.5
2
