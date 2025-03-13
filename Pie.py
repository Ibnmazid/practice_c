from mpmath import mp

def generate_pi(digits):
    mp.dps = digits  
    return str(mp.pi)

if __name__ == "__main__":
    try:
        digits = int(input("Enter the number of digits of Pi you want: "))
        print(generate_pi(digits))
    except ValueError:
        print("Please enter a valid integer.")
