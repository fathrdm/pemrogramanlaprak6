kata1 = input()
kata2 = input()
a = 0
b = 0
if (len(kata1) != len(kata2)):
      print("Panjang kalimat berbeda, pesan palsu")
else:
      for i in range (len(kata1)):
             if (kata1[i] == kata2[i]):
              print("*", end =" ")
              a = a + 1
             else:
              print("#", end=" ")
              b = b + 1
      print()
      print("* = ", a)
      print("# = ", b)
      if (a >= b):
            print("Pesan Asli")
      else:
            print("Pesan Palsu")
