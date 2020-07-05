class dex():
    num = list()
    name = list()

N, M = input().split(' ')
name = [ 0 for x in range(100001) ]
N = int(N)
M = int(M)

for i in range(1, N+1):
    name[i] = input()

dexlist = []
a = dex()
b = dex()
c = dex()
d = dex()
e = dex()
f = dex()
g = dex()
h = dex()
i = dex()
j = dex()
k = dex()
l = dex()
m = dex()
n = dex()
o = dex()
p = dex()
q = dex()
r = dex()
s = dex()
t = dex()
u = dex()
v = dex()
w = dex()
x = dex()
y = dex()
z = dex()
dexlist.append(a)
dexlist.append(b)
dexlist.append(c)
dexlist.append(d)
dexlist.append(e)
dexlist.append(f)
dexlist.append(g)
dexlist.append(h)
dexlist.append(i)
dexlist.append(j)
dexlist.append(k)
dexlist.append(l)
dexlist.append(m)
dexlist.append(n)
dexlist.append(o)
dexlist.append(p)
dexlist.append(q)
dexlist.append(r)
dexlist.append(s)
dexlist.append(t)
dexlist.append(u)
dexlist.append(v)
dexlist.append(w)
dexlist.append(x)
dexlist.append(y)
dexlist.append(z)

for i in range(1, N+1):
    if name[i][0] == 'A':
        dexlist[0].num.append(i)
        dexlist[0].name.append(name[i])
    elif name[i][0] == 'B':
        dexlist[1].num.append(i)
        dexlist[1].name.append(name[i])
    elif name[i][0] == 'C':
        dexlist[2].num.append(i)
        dexlist[2].name.append(name[i])
    elif name[i][0] == 'D':
        dexlist[3].num.append(i)
        dexlist[3].name.append(name[i])
    elif name[i][0] == 'E':
        dexlist[4].num.append(i)
        dexlist[4].name.append(name[i])
    elif name[i][0] == 'F':
        dexlist[5].num.append(i)
        dexlist[5].name.append(name[i])
    elif name[i][0] == 'G':
        dexlist[6].num.append(i)
        dexlist[6].name.append(name[i])
    elif name[i][0] == 'H':
        dexlist[7].num.append(i)
        dexlist[7].name.append(name[i])
    elif name[i][0] == 'I':
        dexlist[8].num.append(i)
        dexlist[8].name.append(name[i])
    elif name[i][0] == 'J':
        dexlist[9].num.append(i)
        dexlist[9].name.append(name[i])
    elif name[i][0] == 'K':
        dexlist[10].num.append(i)
        dexlist[10].name.append(name[i])
    elif name[i][0] == 'L':
        dexlist[11].num.append(i)
        dexlist[11].name.append(name[i])
    elif name[i][0] == 'M':
        dexlist[12].num.append(i)
        dexlist[12].name.append(name[i])
    elif name[i][0] == 'N':
        dexlist[13].num.append(i)
        dexlist[13].name.append(name[i])
    elif name[i][0] == 'O':
        dexlist[14].num.append(i)
        dexlist[14].name.append(name[i])
    elif name[i][0] == 'P':
        dexlist[15].num.append(i)
        dexlist[15].name.append(name[i])
    elif name[i][0] == 'Q':
        dexlist[16].num.append(i)
        dexlist[16].name.append(name[i])
    elif name[i][0] == 'R':
        dexlist[17].num.append(i)
        dexlist[17].name.append(name[i])
    elif name[i][0] == 'S':
        dexlist[18].num.append(i)
        dexlist[18].name.append(name[i])
    elif name[i][0] == 'T':
        dexlist[19].num.append(i)
        dexlist[19].name.append(name[i])
    elif name[i][0] == 'U':
        dexlist[20].num.append(i)
        dexlist[20].name.append(name[i])
    elif name[i][0] == 'V':
        dexlist[21].num.append(i)
        dexlist[21].name.append(name[i])
    elif name[i][0] == 'W':
        dexlist[22].num.append(i)
        dexlist[22].name.append(name[i])
    elif name[i][0] == 'X':
        dexlist[23].num.append(i)
        dexlist[23].name.append(name[i])
    elif name[i][0] == 'Y':
        dexlist[24].num.append(i)
        dexlist[24].name.append(name[i])
    elif name[i][0] == 'Z':
        dexlist[25].num.append(i)
        dexlist[25].name.append(name[i])

for i in range(M):
    ask = input()
    if ask[0]>='0' and ask[0]<='9':
        ask = int(ask)
        print(name[ask])
    else:
        if ask[0] == 'A':
            for j in range(len(dexlist[0].num)):
                if ask == dexlist[0].name[j]:
                    print(dexlist[0].num[j])
        elif ask[0] == 'B':
            for j in range(len(dexlist[1].num)):
                if ask == dexlist[1].name[j]:
                    print(dexlist[1].num[j])
        elif ask[0] == 'C':
            for j in range(len(dexlist[2].num)):
                if ask == dexlist[2].name[j]:
                    print(dexlist[2].num[j])
        elif ask[0] == 'D':
            for j in range(len(dexlist[3].num)):
                if ask == dexlist[3].name[j]:
                    print(dexlist[3].num[j])
        elif ask[0] == 'E':
            for j in range(len(dexlist[4].num)):
                if ask == dexlist[4].name[j]:
                    print(dexlist[4].num[j])
        elif ask[0] == 'F':
            for j in range(len(dexlist[5].num)):
                if ask == dexlist[5].name[j]:
                    print(dexlist[5].num[j])
        elif ask[0] == 'G':
            for j in range(len(dexlist[6].num)):
                if ask == dexlist[6].name[j]:
                    print(dexlist[6].num[j])
        elif ask[0] == 'H':
            for j in range(len(dexlist[7].num)):
                if ask == dexlist[7].name[j]:
                    print(dexlist[7].num[j])
        elif ask[0] == 'I':
            for j in range(len(dexlist[8].num)):
                if ask == dexlist[8].name[j]:
                    print(dexlist[8].num[j])
        elif ask[0] == 'J':
            for j in range(len(dexlist[9].num)):
                if ask == dexlist[9].name[j]:
                    print(dexlist[9].num[j])
        elif ask[0] == 'K':
            for j in range(len(dexlist[10].num)):
                if ask == dexlist[10].name[j]:
                    print(dexlist[10].num[j])
        elif ask[0] == 'L':
            for j in range(len(dexlist[11].num)):
                if ask == dexlist[11].name[j]:
                    print(dexlist[11].num[j])
        elif ask[0] == 'M':
            for j in range(len(dexlist[12].num)):
                if ask == dexlist[12].name[j]:
                    print(dexlist[12].num[j])
        elif ask[0] == 'N':
            for j in range(len(dexlist[13].num)):
                if ask == dexlist[13].name[j]:
                    print(dexlist[13].num[j])
        elif ask[0] == 'O':
            for j in range(len(dexlist[14].num)):
                if ask == dexlist[14].name[j]:
                    print(dexlist[14].num[j])
        elif ask[0] == 'P':
            for j in range(len(dexlist[15].num)):
                if ask == dexlist[15].name[j]:
                    print(dexlist[15].num[j])
        elif ask[0] == 'Q':
            for j in range(len(dexlist[16].num)):
                if ask == dexlist[16].name[j]:
                    print(dexlist[16].num[j])
        elif ask[0] == 'R':
            for j in range(len(dexlist[17].num)):
                if ask == dexlist[17].name[j]:
                    print(dexlist[17].num[j])
        elif ask[0] == 'S':
            for j in range(len(dexlist[18].num)):
                if ask == dexlist[18].name[j]:
                    print(dexlist[18].num[j])
        elif ask[0] == 'T':
            for j in range(len(dexlist[19].num)):
                if ask == dexlist[19].name[j]:
                    print(dexlist[19].num[j])
        elif ask[0] == 'U':
            for j in range(len(dexlist[20].num)):
                if ask == dexlist[20].name[j]:
                    print(dexlist[20].num[j])
        elif ask[0] == 'V':
            for j in range(len(dexlist[21].num)):
                if ask == dexlist[21].name[j]:
                    print(dexlist[21].num[j])
        elif ask[0] == 'W':
            for j in range(len(dexlist[22].num)):
                if ask == dexlist[22].name[j]:
                    print(dexlist[22].num[j])
        elif ask[0] == 'X':
            for j in range(len(dexlist[23].num)):
                if ask == dexlist[23].name[j]:
                    print(dexlist[23].num[j])
        elif ask[0] == 'Y':
            for j in range(len(dexlist[24].num)):
                if ask == dexlist[24].name[j]:
                    print(dexlist[24].num[j])
        elif ask[0] == 'Z':
            for j in range(len(dexlist[25].num)):
                if ask == dexlist[25].name[j]:
                    print(dexlist[25].num[j])