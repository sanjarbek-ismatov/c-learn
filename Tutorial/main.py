user_name = input("Ismingizni kiriting: ")
user_age = int(input("Yoshingizni kiriting: "))
is_admin = False
if(user_name == "Sanjarbek"):
    is_admin = True
if(user_age >= 18):
    if(is_admin == True):
        print("Salom, admin")
    else:
        print("Salom, Xush kelibsiz "  + user_name)
else:
    print("Kechirasiz, sizning yoshingiz yetarli emas!")