n=int(input("How many number you wanna enter:"))
list=[]
for i in range(n):
    print(f"Enter your N0.{i+1} number:")
    x=int(input())
    list.append(x)

print(f"Your number:{list}")

print(f"The largest number is:{max(list)}")
