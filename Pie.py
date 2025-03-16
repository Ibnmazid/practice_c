from mpmath import mp

digits = int(input("Enter the number of digits of Pi you want: "))
mp.dps = digits  
print(str(mp.pi))