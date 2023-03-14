# program untuk menghitung deret S = 2+4+6+8+10 menggunakan fungsi rekursi
def sum_recursive(n):
    if n == 2:
        return 2
    else:
        return 2*n + sum_recursive(n-1)

n = 5
s = sum_recursive(n)

print("Jumlah deret S = 2+4+6+8+10 adalah:", s)
