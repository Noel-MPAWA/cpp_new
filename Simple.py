# The beginning of a code
Gender = input("Enter your gender in small 'm' or 'f': ")

if Gender == 'm':
    print("Hello gentleman")
else:
    print("Hello lady ")  

Age = int(input("Enter your Age: "))

if Age < 18:
    print("You are a minor.")
elif Age >= 18 and Age < 60:
    print("You are an adult.")
else:
    print("You are a senior citizen.")




