def check_fermat(a,b,c,n):
    anwser = a**n + b**n
    if (n <=2 and anwser == c**n):
        print("This is normal, use a value of n that is greater than 2")
    if (n > 2 and anwser == c**n):
        print("Holy Shit. Fermat was wrong!")
    if (n > 2 and anwser != c**n):
        print("Well I guess the son-of-a-bitch was right")
    if (n <= 2 and anwser != c**n):
        print("n is too small and the expression is not equal")


a = int(input("Enter the value for a:"))
b = int(input("Enter a value for b:"))
c = int(input("Enter a value for c:"))
n = int(input("enter a value for n: "))

check_fermat(a,b,c,n)
