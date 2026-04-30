import sys

EPS = 1e-9

def format_result(x):
    return round(x, 10)

def is_integer(x):
    return abs(x - round(x)) < EPS

q = int(sys.stdin.readline())

for _ in range(q):
    a, op, b = sys.stdin.readline().split()
    a = float(a)
    b = float(b)

    if op == '+':
        res = a + b
    elif op == '-':
        res = a - b
    elif op == '*':
        res = a * b
    elif op == '/':
        res = a / b

    res = format_result(res)

    if is_integer(res):
        print(int(round(res)))
    else:
        print(f"{res:.10f}".rstrip('0').rstrip('.'))
