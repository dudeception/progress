#reverse a list
numbers = [
    42, 17, 83, 56, 29, 100, 13, 64, 91, 37,
    22, 71, 48, 19, 105, 31, 76, 11, 58, 97,
    34, 23, 88, 41, 62, 7, 115, 53, 28, 89,
    44, 67, 72, 3, 99, 47, 80, 59, 26, 101,
    14, 43, 68, 73, 32, 107, 50, 61, 94, 5
]
srebmun=[]

a= len(numbers)
while a>0:
    c=numbers[a-1]
    srebmun.append(c)
    a-=1

print(srebmun)