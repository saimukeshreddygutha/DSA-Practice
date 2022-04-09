n=input()
pre=''
suf=''
max=0
if len(n)==1:
    print(0)
else:
    for i in range(len(n)):
        pre+=n[i]
        suf=n[len(n)-i-1]+suf
        if pre==suf and pre!=n:
            max=len(pre)
    print(max)