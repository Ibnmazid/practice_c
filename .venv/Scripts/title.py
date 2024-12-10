"""name="fuad"
print(name)
name.title()
print(name)
name.upper()
print(name)"""

"""name="fuad al arif"
print(name)
print(name.upper())
print(name.title())"""



#string characters and silicing
"""str="rakim"
len=len(str)
print(f"lenth of string:{len}")
for i in range(len):
    print(str[i])"""

"""name="khalid"
print(name[1:3])
print(name[:3])
print(name[1:])"""


#booleans
#if and any useages in booleans

##result=any()
#print(result)



#Using range() to Make a List of Numbers

number=list(range(1,6))
print(number)

odd_numbers=list(range(1,10,2))
print(odd_numbers)

even_number=list(range(2,10,2))
print(even_number)

squres_set=[x**2 for x  in range(1,11)]
print(squres_set)

squares=[]
for square in range(1,11):
    square=square**-2
    squares.append(square)
print(squares)

new=[]
for value in range(1,11):
    new.append(value**3)
print(new)


number=[x for x in range(11)]
minimum=min(number)
maximum=max(number)
summmation=sum(number)

print(number,minimum,maximum,summmation)


for i in range(10):
    n=i
    x=n+i

print(x)


#set

set1={4,3,1,3,6,7,4,8,}
print(set1)

for i in set1:
    print(i)
int=int(input("Enter a number :"))

print(int in set1)
if set1==0:
    l=len(set1)
    print(l)
else:
    print(len(set1))



