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

# print(Ccount, Ncount, Gcount, Ycount, vcount, ccount, NGcount, Vcount)

flag = False
tempNG = NGcount
tempC = Ccount
tempV = Vcount
y = Ycount
# ans1 = 0
# ans2 = 0
# flag1 = False

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
        # tempc = ccount
        # tempV = Vcount
        # print(tempNG)
        tempCY = tempC
        if flag == False:
            while(Ycount>0):
                # print(Ycount)
                if flag == False:
                    tempV -= 1
                    tempCY = tempC + (y - Ycount)
                    tempCY += 1
                    Ycount -= 1
                    # tempc += 1
                    # print(tempCY,tempV)
                    if check(tempCY,tempV):
                        # print(tempV, tempNG, tempC)
                        print(tempV+tempNG*2+(2*tempV-tempNG)) #
                        flag = True
                        break
                    # print(Ycount, tempC, tempNG)
                    # if flag == False:
                    #     while(tempNG>0):
                    #         tempNG -= 1
                    #         tempC += 1
                    #         print(6)
                    #         if check(tempC,tempV):
                    #             # print("hi")
                    #             print(tempV+tempNG*2+(2*tempV-tempNG))
                    #             flag = True
                    #             break
                    if flag == False:
                        tempNG = NGcount
                        # print('hi',tempCY)                    
                        while(tempNG>0):
                            # print('hiii')
                            tempNG -= 1
                            tempCY += 1
                            if check(tempCY,tempV):
                                # print(tempNG, tempV)
                                print(tempV+tempNG*2+(2*tempV-tempNG))
                                flag1 = True
                                flag = True
                                break

                else:
                    break

        # tempNG = NGcount
        # tempC = Ccount
        # Ycount = y
        # tempc = ccount
        # tempV = Vcount
        # # print(Ycount)
        # # print(tempNG, tempC, Ycount)
        # tempCY = tempC

        # if ((flag1 == True)):
        #     flag = False
        #     while(Ycount>0):
        #         # print(Ycount)
        #         if flag == False:
        #             tempV -= 1
        #             tempCY += 1
        #             Ycount -= 1
        #             tempc += 1
        #             # tempNG = NGcount
        #             # print(tempCY,tempV)
        #             if check(tempCY,tempV):
        #                 # print(tempV, tempNG, tempC)
        #                 print(tempV+tempNG*2+(2*tempV-tempNG)) #
        #                 flag = True
        #                 break
        #             # print(Ycount, tempC, tempNG)
        #         if flag == False:
        #             tempNG = NGcount
        #             while(tempNG>0):
        #                 tempNG -= 1
        #                 tempC += 1
        #                 # print(6)
        #                 if check(tempC,tempV):
        #                     # print("hi")
        #                     ans2 = (tempV+tempNG*2+(2*tempV-tempNG))
        #                     flag1 = True
        #                     flag = True
        #                     tempNG = NGcount
        #                     break
        #             # if flag == False:
        #             #     while(tempNG>0):
        #             #         tempNG -= 1
        #             #         tempCY += 1
        #             #         # print(6)
        #             #         if check(tempCY,tempV):
        #             #             # print("hi")
        #             #             print(tempCY+tempV)
        #             #             flag = True
        #             #             break
        #         else:
        #             break
        # if flag1 == True:
        #     # print(ans1, ans2)
        #     print(max(ans1,ans2))

        tempC = Ccount + y
        # print(tempC)
        tempNG = NGcount
        # print(tempC)

        if flag == False:
            # print("hi")
            # print(tempV)
            # print(tempC)
            while(tempV>0):
                if flag == False:
                    tempV -= 1
                    if check(tempC,tempV):
                        # print("hi")
                        print(tempV+2*tempNG+(2*tempV-tempNG))
                        flag = True
                        break
                    if flag == False:
                        while(tempNG>0):
                            tempNG -= 1
                            tempC += 1
                            if check(tempC,tempV):
                                # print("hi")
                                print(tempC+tempV)
                                flag = True
                                break
                else:
                    break

    if flag == False:
        print(0)
else:
    print(0)