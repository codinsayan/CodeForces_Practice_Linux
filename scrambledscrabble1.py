def check(Ccount, Vcount):
    if(Ccount>=2*Vcount):
        return True
    else:
        return False

s = input()

Vcount, Ccount, Ncount, Gcount, Ycount = 0, 0, 0, 0, 0

vcount, ccount = 0, 0

V = ['A','E','I','O','U']

for i in s:
    if i in V:
        vcount += 1
    elif(i=='N'):
        Ncount += 1
    elif(i=='G'):
        Gcount += 1
    elif(i=='Y'):
        Ycount += 1
    else:
        ccount += 1

NGcount = min(Ncount, Gcount)
ccount += max(Ncount-NGcount, Gcount-NGcount)

Ccount = NGcount + ccount
Vcount = vcount + Ycount

flag = False
tempNG = NGcount
tempC = Ccount
tempV = Vcount
y = Ycount

if Vcount>0:
    if check(tempC, tempV):
        print((Vcount+2*NGcount+(2*Vcount-NGcount)))
        flag = True
    else:
        while(tempNG>0):
            tempNG -= 1
            tempC += 1
            if check(tempC,tempV):
                print(tempV+tempNG*2+(2*tempV-tempNG)) #
                flag = True
                break

        tempNG = NGcount
        tempC = Ccount
        tempCY = tempC
        if flag == False:
            while(Ycount>0):
                if flag == False:
                    tempV -= 1
                    tempCY = tempC + (y - Ycount)
                    tempCY += 1
                    Ycount -= 1
                    if check(tempCY,tempV):
                        print(tempV+tempNG*2+(2*tempV-tempNG)) #
                        flag = True
                        break
                    if flag == False:
                        tempNG = NGcount
                        while(tempNG>0):
                            tempNG -= 1
                            tempCY += 1
                            if check(tempCY,tempV):
                                print(tempV+tempNG*2+(2*tempV-tempNG))
                                flag1 = True
                                flag = True
                                break
                else:
                    break

        tempC = Ccount + y
        tempNG = NGcount
        
        if flag == False:
            while(tempV>0):
                if flag == False:
                    tempV -= 1
                    if check(tempC,tempV):
                        print(tempV+2*tempNG+(2*tempV-tempNG))
                        flag = True
                        break
                    if flag == False:
                        while(tempNG>0):
                            tempNG -= 1
                            tempC += 1
                            if check(tempC,tempV):
                                print(tempC+tempV)
                                flag = True
                                break
                else:
                    break

    if flag == False:
        print(0)
else:
    print(0)