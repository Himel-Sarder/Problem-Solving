a = int(input())
b = int(input())
c = int(input())
#Himel Sarder
result = max((a + b * c), max((a + (b * c)), max(((a + b) * c), max((a * b * c), max((a*(b+c)), a+b+c)))))
#Dept. of CSE, BSFMSTU
print(result)
