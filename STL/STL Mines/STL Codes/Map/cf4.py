a=[*open(0)][1].split()
print(max(a.count(x)for x in{*a}))