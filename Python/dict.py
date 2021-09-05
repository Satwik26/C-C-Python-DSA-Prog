d = {"Addition":"+","Subtraction":"-","Multiplication":"*","Division":"/"}
cha = str(input("Enter +,-,*,/ to continue"))
var1=int(input("Enter the 1st number: "))
var=int(input("Enter the 2nd number: "))
if cha=="+":
    var3 = var1+var
elif cha=="-":
    var3 = var1-var
elif cha=="*":
    var3=var1*var
elif cha=="/":
    var3=var1/var
if var1=='56' and var=='9' and cha=="+" or var1=='9' and var=='56' and cha=="+":
    print("77")
elif cha=="+":
    print(var3)
if var1=='45' and var=='3' and cha=="*" or var1=='3' and var=='45' and cha=="*":
    print("555")
elif cha=="*":
    print(var3)
if var1=='56' and var=='6' and cha=="/" or var1=='6' and var=='56' and cha=="/":
    print("77")
elif cha=="/":
    print(var3)