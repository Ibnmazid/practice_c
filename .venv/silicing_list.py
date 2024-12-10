"""x=int(input("how many player you have:"))

player_list=[]
for i in range(x):
    name=input()
    player_list.append(name)

print(player_list)
print(player_list[0:2])
print(player_list[:3])
print(player_list(-2:))


name='rick'
if name in player_list:
    print(True)
else:
    print(False)"""


#looping through slice
newlist=['amd','ryzen','intel','nvidia']
for i in newlist[:2]:
    print(i.title())

    