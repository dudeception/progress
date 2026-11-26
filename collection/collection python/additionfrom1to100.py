#addition of numbers from 1 to 100

total=0
num=1
while True:
    total= total + num
    num += 1
    print(total, end=" ")
    if num==10:
        break
print("\n",total)