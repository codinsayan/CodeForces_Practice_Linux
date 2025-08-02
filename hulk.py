n = int(input())

a = "I hate "
b = "I love "
s = ""

for i in range(n):
    if i>0:
        s += "that "
    if i%2 == 0:
        s += a
    else:
        s += b


s+="it "

print(s)
    