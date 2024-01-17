# input, output and import

# input a number

x = input("input a number")
print(x)

# input a list

n = int(input())
l = list()
for i in range(0, n):
    l.append(int(input()))
print(l)

# using map and list functions

print("enter your list")
l = list(map(int, input().split()))
print(l)
