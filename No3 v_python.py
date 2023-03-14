# program menghitung suku ke-n dari deret Fibonacci
n = 10

# fungsi rekursif untuk menghitung deret Fibonacci
def fibonacci(n):
    if n <= 1:
        return n
    else:
        return fibonacci(n-1) + fibonacci(n-2)

# mencetak nilai suku ke-n dari deret Fibonacci
print("Suku ke-", n, "dari deret Fibonacci adalah:", fibonacci(n))
