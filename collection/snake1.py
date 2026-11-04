# this exercise normaly uses ints rather than floates
# to get the intended solution replace the floats with ints
# learn how exactly the int float logic works back home 
# unlike c you dont need to specificy the type of the variable it does it automaticly

num1= float(input("enter a number\n"))
num2= float(input("enter a number 2\n"))

addition = num1 + num2

print("here is your number=",addition,"\nthere you go")
# output:
#enter a number
#x
#enter a number 2
#y
#here is your number= (x+y but expressed in a float value)
#there you go

num=3
flo=4.31#please dont confuse . for , please
strn="aaa"#python dosent use char it just uses string
list = [65,6.4,"sixty_three"]
print(list[2])
print(num)
print(flo)
print(strn)
#s
print("yes",str('25')+"yas")


print("5+3",5+3)
print("5-3",5-3)
print("5*3",5*3)
print("5/3",5/3)
print("5//3",5//3)
print("5%3",5%3)
print("5**3",5**3)
print("5>3",5>3)
print("3<5",3<5)
print("3<=5",3<=5)
print("4==4",4==4)
print("5>=3",5>=4)
print("5!=5",5!=5)

#basic operators(forgot its name)
#output
#8
#2
#15
#1.66666...
#1
#2
#125
#true
#true
#true
#true
#true
#false
#https://www.w3schools.com/python/python_operators.asp incase i am stupid
age =33
licensedrive=True
print("your age is ",age,"and you have a driving license ",licensedrive)
print("combination", age>=18 and licensedrive)
print("age is above 18 or below 65",age>18 or age<65)
print("not license",not licensedrive) #false if true

x=10
x+=3
print(x)
x-=5
print(x)
x*=3
print(x)
num1=5
num1+=6
num2=num1
print(num1,"and",num2,"are values equal",num1==num2)


print("enter your age and or enter a string or char or float to break this\n")
age = input() #inputs allways give string values you need to convert it to a number type first
age = int(age) #https://www.w3schools.com/python/python_user_input.asp
print(type(age))
print("your age is =",age,"in interger value")
name=input("enter your name\n")
age2=input("enter your age2\n")
age2=int(age2)
print("next year your age2 will be =",age2+ 1,"\n")

num1=input("enter your num1\n")
num2=input("enter your num2\n")
num1=int(num1)
num2=int(num2)
#num1,num2=int(num1),int(num2) is all so valid way to do it
total=(num2+num1)/2
print(total,"\n")

num1=float(input("please enter the first exam result\n"))
num2=float(input("please enter the final exam result\n"))
output1= (num1/5)*2
output2= (num2/5)*3
print("first gave you\n",output1,"\nlast gave you \n",output2,"\nyour final result is =",output1+output2)

num1=float(input("please enter the first exam result\n"))
num2=float(input("please enter the final exam result\n"))
output1= (num1/5)*2
output2= (num2/5)*3

if (output1+output2) >= 50 and num2 >= 50:
    print("congratulations")
elif (output1+output2) >= 50 and num2 < 50:
    print("you failed the final exam")    
else:
     print("you lost completely")   


int1=int(input("enter a interger "))
if abs((int1%2))-1 == 0 :
    print("your interger is odd")

else:
    print("your interger is even")

#odd or even

int1=float(input("enter a interger "))
if int1>0 :
    print("your number is pozitive")

elif int1 < 0:
    print("your number is negative")

else:
    print("your number is 0")

#is an explanation required?

int1=float(input("enter a interger \n"))
int2=float(input("enter a interger \n"))
int3=float(input("enter a interger \n"))

if int1>int2:
    print("num1 bigger\n")
else:
    print("num2 bigger\n")

if int1 >int3 or int2 > int3:
    if int1>int2:
        print("num1 is the biggest")
    else:
        print("num2 is the biggest")
else:
    print("num3 is the biggest")
#a basic number sorter, there is probably a better solution for this

age = 25
has_license = True

if age >= 18:
    print("yes")
if has_license == 1:
    print("yes allso")
# this isnt part of the class but you should know it


int1=float(input("enter a interger \n"))
int2=float(input("enter a interger \n"))
int3=float(input("enter a interger \n"))

if int1>int2 and int1>int3 :
    print("num1 biggest")
elif int2>int1 and int2>int3 :
    print("num2 biggest")
else:
    print("num3 biggest")
    # homework 4 simplified

# motorlu taşı vergisi (mtv) programı
# the teacher used the nested if way to solve this (aka the hills method)
# i did it this way because the teacher didint specify the way i should approach this
# the quit() is not specified in this program i added in order to pervent potential errors
# quit() command is preaty nuanced so make sure to study it later
# https://www.geeksforgeeks.org/python/python-exit-commands-quit-exit-sys-exit-and-os-_exit/

bike,car,tradecar=1000,4000,6000
a = int(input("press 1 for motorbike 2 for car 3 for tradecar\n"))
if a==1:
    a=bike
elif a==2:
    a=car
elif a==3:
    a=tradecar
else:
    print("wrong number reset program")
    quit()

new,old,realyold=1,2,5
age = int(input("enter the age of your vehicle\n"))

if age <= 3 :
    age=new
elif age> 3 and age<= 7:
    age=old
elif age>7 and age <= 25:
    age=realyold
else:
    print("vehicles age is non applicable")
    quit()

print("your vehicles tax is =",a/age)
# i guess i am me.ai i guess because the teacher assumed i used ai

#password code 
A="admin"
B="12345"

a = (input("enter username\n"))
b = (input("enter password\n"))

if a==A and b==B:
    print("you logged in")
else:
    print("either the username is incorrect or the password")

#try to improve this garbage code after class
#(see hopefulsnake.py)
num1=float(input("please enter the first exam result\n"))
num2=float(input("please enter the final exam result\n"))
output1= (num1/5)*2
output2= (num2/5)*3
if num1>100 or num2>100:
    print("please enter exam results correctly")
elif (output1+output2) >= 50 and num2 >= 50:
    print("congratulations")
    if num1==100:
        print("you got A+ in the first exam\n")
    elif num1>=90 and num1<100:
        print("you got A in the first exam\n")
    elif num1>=70 and num1<90:
        print("you got B in the first exam\n")
    elif num1>=50 and num1<70:
        print("you got C in the first exam\n")
    else:
        print("you got lower than c in the first exam\n")

    if num2==100:
        print("you got A+ in the final exam\n")
    elif num2>=90 and num1<100:
        print("you got A in the final exam\n")
    elif num2>=70 and num1<90:
        print("you got B in the final exam\n")
    else:
        print("you got c in the final exam\n")

elif (output1+output2) >= 50 and num2 < 50:
    print("you failed the final exam")    
else:
     print("you lost")   


#for loop
total = 0

for i in range(1,11):
    total +=i
    print(total)
print(total)

# while loop and a good example of what break does
i = 1
while i < 6:
  print(i)
  i += 1
  if i==4:
      break

#input based while loop
A = int(input("enter the desired number "))
i = 1
t = 0
while i <= A:
  print(i)
  t = t +i
  i += 1
print(t)
b = input("enter text ")
i=1
while i <= A:
  print(b)
  i +=1
  
  #for loop that uses string as amount and making stuff uppercase
name = "DuDE aaAaAAAaa"
for char in name:
    print(char.upper())
print(name.upper())

#factorial calculation
a = int(input("enter a number to get a factorial "))
i = 1
total = 1
if a<0:
    print("enter a positive number")
elif a==0:
    print("1")
else:
    while i <= a:
        print(total)
        total = total*i
        i += 1
    print(total)


#odd calculation and a good example of continue
#i used abs() because i was stupid
a = int(input("enter a number to get  "))
total = 0
for i in range(1,a+1):
    if abs((i%2))-1 == 0 :
         total = total + i
    else:
        continue
    i += 1
print(total)


