# program untuk menghitung deret S = 1+2+3+4+5 menggunakan fungsi rekursi
def sum_recursive(n):
    if n == 1:
        return 1
    else:
        return n + sum_recursive(n-1)

n = 5
s = sum_recursive(n)

print("Jumlah deret S = 1+2+3+4+5 adalah:", s)
