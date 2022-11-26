baris = int(input())
matrix = []
a=[]
b=[]
print("Matriks A")
for i in range(baris):
      v = [int (y) for y in input().split()]
      a.append(v)
      matrix.append(a)
print("Matriks B")
for i in range(baris):
      r = [int (y) for y in input().split()]
      b.append(r)
      matrix.append(b)
hasil=[[0 for i in range(baris)] for j in range(baris)]
for i in range(baris):
	for j in range(baris):
		for k in range(baris):
			hasil[i][j]=hasil[i][j]+a[i][k] * b[k][j]
print("Matriks AXB")
for i in range(baris):
      for j in range (baris):
            print(format(hasil[i][j]), end=" ")
      print()
