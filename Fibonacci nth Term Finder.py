import math

term = int(input("What term would you like to find "))
f = open("Data.txt","a+")

root = float(math.sqrt(5))
div = 1 + root
div2 = 1 - root

first = float((div / 2)**term)
second = float((div2 / 2)**term)
top = float(first - second)
ans = int(top / root)

f.write("The " + str(term) + " term is " + str(ans) + "\n")
f.close()

