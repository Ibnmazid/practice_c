print("select a option >>")

conversation=int(input("1.celcius >> farenhite \n 2.farenhite >> celcius \n >>>>"))


if conversation==1:
    temperature=int(input("Celcius scale temperature>>"))
    
    fahrenheit=(9/5*temperature) + 32

    print(f"Farenhite Scale Temperature is :{fahrenheit}")

else:
    temperature=float(input("Fahrenheit scale temperature>>"))

    celcius =5/9*(temperature-32)

    print(f"Celcius Scale Temperature is :{celcius}")
