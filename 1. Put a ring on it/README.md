<h2><a href="https://whitebox.ac/problems/ringbuffer"> 1. Put a ring on it.</a></h2><h3>Easy 1</h3>


Implement RingBuffer, a fixed-capacity ring buffer for events. The buffer stores events in insertion order and automatically drops the oldest event when full.

This problem focuses on stateful component behavior and clear policy enforcement rather than algorithmic tricks.
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
<p><strong>Constraints:</strong></p>
<ul>
	<li><code>RingBuffer(capacity)</code></li>
	<li><code>Initializes an empty buffer with a maximum capacity of capacity.</code></li>
	<li><code>capacity is guaranteed to be a positive integer.</code></li>
</ul>
<p>&nbsp;</p>
<p><strong class="example">Methods:</strong></p>
<pre>push(event)</pre>
<ul>
	Event is a **string** type.
	Inserts a new event into the buffer.
	If the buffer is already full, the **oldest event is dropped** before inserting the new one.
	This operation produces no output.
	<ul>
		Print null.
	</ul>
	<pre>snapshot()</pre>
	Returns all events currently stored in the buffer in **oldest → newest** order.
	The returned events should be consecutive and space-separated when output.
	Calling **snapshot()** must not modify the internal state of the buffer.
	If the buffer is empty, print nothing (an empty line).
</ul>
<h2>Examples</h2>
<p><strong>Example 1</strong></p>
<pre>
	<strong>Input:</strong>
	4
	6 + 7
    6 + 7.2
    5 - 4
	5.1 - 4
</pre>
<pre>
	<strong>Output:</strong>
	13
	13.2
	1
	1.1
</pre>

<p><strong>Example 2</strong></p>
<pre>
	<strong>Input:</strong>
	2
	4.5 * 2
	2.5 * 2.5
</pre>
<pre>
	<strong>Output:</strong>
	9
	6.25
</pre>

<p><strong>Example 3</strong></p>
<pre> 
	<strong>Input:</strong>
	2
	5 / 2
	4 / 2
</pre>
<pre>
	<strong>Output:</strong>
	2.5
	2
</pre>
