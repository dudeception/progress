# vowel counter, slightly messy
a = input("enter a string\n")
num1=0
num2=0

while num1<len(a):
    if a[num1] == "a" or a[num1] == "e" or a[num1] == "o" or a[num1] == "u" or a[num1] == "i" or a[num1] == "A" or a[num1] == "E" or a[num1] == "O" or a[num1] == "U" or a[num1] == "I":
        num2+=1
    num1+=1

print("you have exactly = ",num2,"vowels in the string you enterd")

# vowel counter but in for loop, slightly messy
a = input("enter in string\n")
num2=0

for num1 in range(0,len(a)):
    if a[num1] == "a" or a[num1] == "e" or a[num1] == "o" or a[num1] == "u" or a[num1] == "i" or a[num1] == "A" or a[num1] == "E" or a[num1] == "O" or a[num1] == "U" or a[num1] == "I":
        num2+=1
    num1+=1

print("vowels =",num2)


#prime finder
num1=int(input("enter a number to see if its a prime \n"))
prime = True
if num1>=1:
    for i in range(2,num1):
        if num1%i==0:
            prime = False
            num2=i

else:
    prime=False

if prime==True:
    print("its a prime")
else:
    print(f"{num1} is not a prime")
    print(num2,"can divide",num1)

#bank code
wealth=60000
print("WELCOME TO THE BANK\n")
print("enter the number of the service you wanna use\n")
while True:
    print("1. wealth total\n")
    print("2. invest\n")
    print("3. take wealth\n")
    print("4. exit\n")
    
    num1=int(input(""))
    if num1==1:
        print(wealth,"\n")
    elif num1==2:
        num2=float(input("how much ?\n"))
        if num2>0:
            wealth=wealth+num2
            print("you have invested =",num2,"\n")
        else:
            print("you cant invest that amount\n")
    elif num1==3:
        
        num3=float(input("how much ?\n"))
        if wealth>=num3:
            wealth=wealth-num3
            print("you have taken =",num3,"\n")
        elif wealth==0:
            print("you have no wealth")
        else:
            print("you cant take that much wealth\n")
    elif num1==4:
        break
    else:
        print("please select a diffrent number")

print("thank you for using our services")


#loops inside of loops
#does this even need explaning ?

for i in range(1,4):
    for j in range(1,4):
        print(i,j)

#triangle
#the specified size says the height of the triangle right triangle
num1=int(input("height ?\n"))

for i in range(1,num1+1):
    for d in range(i):
        print(" * ", end="") #writes right after one another
    print() #bir altaki satıra iner 



#a multplication table

for i in range(1,11):
    for d in range(1,11):
        print(f"{i*d:2}",end=" ")
    print()

#this solution places the words in specific spots using string that include the number in it
#:2 is like the %2d

#lists
list=["aaa","ccc","ddd","aws"]
for i in range(1,len(list)):
    print(list[i])

for sti in list:
    print(sti)

list2=[1,2,3,4]
for i in range(0,len(list2)):
    print(list2[i])

for sti in list2:
    print(sti)

#find biggets in a list
list = [54,33,22,1001,1,4,6,3,2002,11]
i=0
num = list[i]
for i in range(0,len(list)-1):
    if num >= list[i+1]:
        continue
    else:
        num = list[i+1]
    
print(num)

#picks the first number then checks if the next big number is bigger if it is bigger then
#it makes it the number and repeat
#this code feels scuffed but the logic works out

#normaly in other programing languages list or arrays (python equvilent is tuple)
#are diffrent from each other and each serves thier own purpose
#pythons implementation of tuples are so nice and easy to use
#multiple types of data can be added to a list
#stable lists are dynamic wich means unit addition and substraction are python specific

programming_languages=["c","python","c++","c#","b","brainfuck"]
int_numberlist=[1,2,3,4,5,6,7,8,9,10]
nobodyhere=[]
dump=[1,"agaa",5.5,False]
listception=[9,7,5,[5,4,3],["yes","no","maybe"],49.9]
charlist=["a","w","c","d","j"]
print("programing languages =",programming_languages,"\n")
print("programing languages =",int_numberlist[5],"\n")
print("programing languages =",nobodyhere,"\n")
print("programing languages =",dump[1],"\n")
print(listception[3][2],listception[4][2],"\n")
print("c" in charlist)
print("x" in charlist)
#in most programing languages negative indexing is not possible
#but in python it exists -1 showcases the last element
print(listception[-1])
print(int_numberlist[-3])
#you can take chunks out of a list
print(listception[1:4])
#it starts from element 1 then then goes until it reaches 4 it does not incldue the specified end point
#examine the 2 code below
print(listception[1:])
print(listception[:4])

#you can change specific elements like this
odd=[1,3,5,7,9]
odd[3]=1000
print(odd)
odd[1:4]=[11,4,99] #many can be changed like this
print(odd)
even=[100,4,6,8,10]
even.append(12) #adds the specified item to the end of a list (FINALY)
print(even)
even.extend([14,16,18,20]) #like append but allows you to add multiple elements
print(even)
del even[3] #deletes the specified element from the list
print(even)

list1=[1,3,5,"python",5.22,True]
list1.append("new elemnt")#add element
list1.insert(2,"java")#adds elemnt to a specific place
list1.remove("python")#removes the specified element from the list
list1.pop(1)#removes the element in the specified index number
print(list1)
even.sort(key=int)#sorts based on int breaks when it finds a string
list1.sort(key=str)#sorts based on string
print(list1)
print(even)
l2=[2,3,4,5,2,2,2,2,4,5,1,1,1,11,44,3,3,3,3]
print(l2.count(2))#counts the number of specified value in a list
print(l2.index(3))# finds the first index value of the specified value 
powersof2=[2** x for x in range(10)]#no idea
print(powersof2)
powersof3=[]
for y in range(10):
    powersof3.append(3**y)
print(powersof3)
odd2=[x for x in range(20) if x%2==1]#odd numbers from 0 to 19
print(odd2)

for fruit in ["apple","banana","pear"]:
    print(fruit,"i like")



#indexing and navigation on lists can be done in 2 ways. 1st way is by taking elements 1 by 1
#using a for loop 2. way is by reaching elements directly using indexing
li3=[1,2,3,"pythin",False]
print("list elements")

for element in li3:
    print(element,type(element))

for i in range(len(li3)):
    print(li3[i],type(li3[i]))


numbe=[1,2,3,77,55,33,22,9,111,222]
oddies=[]
#the goal is to seprate the odd numbers and add them to the oddies

for num in numbe:
    if num%2==1:
        oddies.append(num)
print(oddies)

#find the elements that loop and add it to loops make sure they dont repeat in loops
loop=[111,2,44,3,4,5,1,2,3,4,8,8,5,1,2,3,4,5,1,2,3,4,5,555,5,44,5]
loops=[]
a,b,c=0,0,0

for a in range(0,len(loop)):
    b = loop[a]
    for c in range(a+1,len(loop)):
        if b == loop[c] and b not in loops:
            loops.append(b)
            c=0

print(loops)


array_man=[
    [10,25,30],
    [45,50,12],
    [70,85,90]
]
total=0
print(f"you know what a matrix is you c programmer {array_man[0][2],array_man[1][2]}")
#traveling in a list you know this as well 
#travel in a list and find even numbers
even=[]

for element in array_man:
    for repeats in element:
        total+=repeats
        if repeats%2==0:
            even.append(repeats)

print(even,total)

#find twins that add up to 9
numbies=[2,7,4,5,1,8,3]
goal=9
i,a=0,0
collection=[]

for i in range(0,len(numbies)):
    for a in range(i+1,len(numbies)):
        if numbies[i]+numbies[a]== goal:
            collection.append((numbies[i],numbies[a]))

print(collection)

#find prime numbers on the specified area
nume =0

numa=int(input("enter a number to where to start \n"))
numb=int(input("enter a number to where to end \n"))
prime = True
b=0

for nume in range(numa,numb+1):
    prime=True
    for divider in range(2,int(nume ** 0.5)+1):
        if nume % divider == 0:
            prime=False
            break
    if prime==True:
        print(nume, end=" ")

print()
#tuple like lists but unchangeble
tup=(10,20)
print(f"x:{tup[0]} y:{tup[1]}")
