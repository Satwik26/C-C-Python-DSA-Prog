from random import randint
small = "abcdefghijklmnopqrstuvwxyz"
uppe = small.upper()
num = "0123456789"
special = "!@#$%^&*(),./<>?_+-="
passw = small + uppe + num + special
pass_len = int(input("Enter length of password: "))
final_pass= ""
length =0 
if pass_len < 6:
    print("Minimum length should be 6!")
else:
    while length < pass_len:
        final_pass = final_pass + passw[randint(0,len(passw)-1)]
        length= length+1
    print("Final pass: ", final_pass)
