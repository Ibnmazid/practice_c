def fruits():
    fruit=('apple','woodapple','pineapple','iceapple')
    return fruit


(a,b,c,d)=fruits()
print(a,b,c)


(a,*b,d)=fruits()
print(b)


