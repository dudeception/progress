#addition of numbers from 1 to the requested number
#i ask the teacher if it is possible to make comparison between variable types and he dosent answer me

a = int(input("enter a positive integer\n"))

total=0
num=1
if a==0 and a<0 :
    print("input is wrong")
else:
    for i in range(1,a+1):
        total=total+num
        num+=1
print("\n",total)
