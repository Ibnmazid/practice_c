dogs=['david','mary','rick']
cats=['isbel','rahim','morgan']

dogcat=[]

for dog in dogs:
    for cat in cats:
        dogcat.append(dog)
        dogcat.append(cat)
        
print(dogcat)