#! /usr/bin/env python
#######################################
#     Author : Dhruv Khattar         #
#####################################

n = input()

no = []
no.append(1)
no.append(2)
for i in range(2,n+1):
    if i%3:
        no.append(no[i-1] + no[i-2])
    else:
        no.append(2*(i/3)*no[i-1] + no[i-2])

ans = 0

while no[n]:
    ans += no[n]%10
    no[n] /= 10

print ans
