#fibonacci thing
#terrible solution
#make sure to remove the list later on

a=int(input("enter a number to get the requested fibonacchi number\n"))
num=1
num2=1
total=1
list=[num,num2]
i = 0

if a < 0:
    print("please pick a diffrent number that works")
elif a==0:
    total=0

else:
    for i in range(1,a-1):
        
        total = list[i] + list[i-1]
        list.append(total)

print(total)
        