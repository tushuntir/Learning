# with open("input.txt", "r") as f:
#     sonlar = list(map(int, f.read().split()))
#     summy = sum(sonlar)
#     maximum = max(sonlar)
#     minimum = min(sonlar)
#     min_sum = summy - maximum
#     max_sum = summy - minimum
# with open("output.txt", "w") as f:
#     f.write(f"{min_sum} {max_sum}")

# with open("input.txt", "r") as f:
#     lines = f.readlines()
#     n = int(lines[0])
#     sonlar = list(map(int, lines[1].split()))
#     for son in sonlar:
#         if sonlar.count(son) == 1:
#             yolgiz = son
#             print(yolgiz)

# with open("output.txt", "w") as f:
#     f.write(str(son))

# with open("input.txt", "r") as f:
#     lines = f.readlines()
#     n = int(lines[0])
#     pullar = list(map(int, lines[1].split()))
#     if sum(pullar) > n:
#         print("Yes")
#     else:
#         print("No")

# with open('input.txt', 'r') as f:
#     sonlar = f.read()
#     n, k = map(int, sonlar.split())
#     umm = k % n
# with open("output.txt", "w") as f:
#     f.write(str(umm))

# import math

# with open('input.txt', 'r') as f:
#     sonlar = f.read()
#     sinflar = map(int, sonlar.split()) # Students in each class
#     jami_partalar = sum(math.ceil(talabalar / 2) for talabalar in sinflar)

# with open('output.txt', 'w') as f:
#     f.write(str(jami_partalar))

# with open('input.txt', 'r')as f:
#     son = f.read()
#     bir = son[0]
# with open('output.txt', 'w') as f:
#     f.write(bir)

# with open('input.txt', 'r') as f:
#     line1 = f.readline().split()
#     line2 = f.readline().split()
#     h1, m1, s1 = map(int, line1)
#     h2, m2, s2 = map(int, line2)
#     total1 = (h1 * 3600) + (m1 * 60) + s1
#     total2 = (h2* 3600) + (m2 * 60) + s2
#     apart = total2 - total1
# with open('output.txt', 'w') as f:
#     f.write(str(apart))

# with open('input.txt', 'r') as f:
#     sek = f.read()
#     total_sek = int(sek)
#     total_h = total_sek // 3600
#     h =total_h % 24
#     qolgan_sek = total_sek % 3600
#     m = qolgan_sek // 60
#     s = qolgan_sek % 60
# with open('output.txt', 'w')as f:
#     f.write(str(f"{h}:{m:02}:{s:02}"))

# with open("input.txt", "r") as f:
#     text = f.readlines()
#     texts = list(map(int, text))
#     sol = texts[0] + texts[1]

# with open("output.txt", "w") as f:
#     f.write(str(sol))


