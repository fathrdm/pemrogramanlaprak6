kolom, baris= map(int, input().split())
elements = list(map(int, input().split()))
matriks=[]
a=0
for i in range(kolom):
    matriks.append(elements[a:a+baris])
    a=a+baris
for kolom in matriks:
    for elements in kolom:
        print(elements, end=" ")
    print()