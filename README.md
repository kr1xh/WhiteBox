<h2><a href="https://whitebox.ac/problems/add-to-13"> 2. Add to 13</a></h2><h3>Easy 1</h3>



Implement a calculator that supports four basic operations:
<pre>
add(a, b)      // Returns a + b
subtract(a, b) // Returns a - b
multiply(a, b) // Returns a * b
divide(a, b)   // Returns a / b (floating-point division, not integer division) 
</pre>

Important: All functions must handle both integers and floating-point numbers. If the result is a whole number, output it as an integer (e.g., 4 not 4.0). Otherwise, output the decimal value (e.g., 2.5).

Floating-point precision: Due to binary representation limitations, some decimal numbers cannot be stored exactly (e.g., 0.1, 5.1). When the mathematical result should be a clean decimal but floating-point arithmetic introduces small errors (e.g., 1.0999999999999996 instead of 1.1), round to a reasonable precision (10-12 decimal places) before outputting. If the rounded result is a whole number, output it as an integer.

<p>&nbsp;</p>
<p><strong class="example">Input:</strong></p>
<pre>
<strong>First line:</strong>integer Q (number of queries)
<strong>Next Q lines: </strong> a [operator] b where a and b are numbers and [operator] is +, -, *, or /
</pre>
<p>&nbsp;</p>
<p><strong class="example"> Output Format: </strong></p>
<pre>
Output Q numbers, one per line, representing the result of each query. Omit .0 from whole number results.
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>
<ul>
	<li><code>-10<sup>9</sup> &lt;= a,b &lt;= 10<sup>9</sup></code></li>
	<li><code>1 &lt;= Q &lt;= 10<sup>5</sup></code></li>
	<li><code>-10<sup>9</sup> &lt;= target &lt;= 10<sup>9</sup></code></li>
	<li><code>The result will fit in a 32-bit signed integer</code></li>
	<li><code>All inputs will fit within 5 digits of precision.</code></li>
</ul>
<h2>Examples</h2>
<p><strong>Example 1</strong></p>
<pre>
	4
	6 + 7
    6 + 7.2
    5 - 4
	5.1 - 4
</pre>

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
