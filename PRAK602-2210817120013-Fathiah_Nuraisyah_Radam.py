kolom = int(input())
matrix = list(map(int, input().split()))
for i in range (kolom):
      print(matrix[i] * (i + 1), end=" ")
print()