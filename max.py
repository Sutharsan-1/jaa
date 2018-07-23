k=[]
n=int(input("Enter number of elements:"))
for i in range(1,n+1):
    b=int(input("Enter element:"))
    k.append(b)
k.sort()
print("Largest element is:",k[n-1])
