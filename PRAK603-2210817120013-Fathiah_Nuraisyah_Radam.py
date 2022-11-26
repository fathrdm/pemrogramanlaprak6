baris, kolom = map(int, input().split())
if (baris != kolom):
	print("Jumlah tidak sama")
else:
	matrix1 = list(map(int, input().split()))
	matrix2 = list(map(int, input().split()))
	for i in range(baris):
		print(matrix1[i] * matrix2[i], end=" ")
	print()
