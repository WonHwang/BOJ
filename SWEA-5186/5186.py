t = input()
t = int(t)
for i in range(t):
    f = input()
    f = float(f)
    
    s = ''
    q = 0.5
    for j in range(12):
        if f >= q:
            f = f - q
            q = q/2
            s = s + '1'
        elif f < q:
            q = q/2
            s = s + '0'
        if f == 0:
            break
    
    if (f != 0 and j == 11):
        s = 'overflow'

    print('#' + str(i+1) + ' ' + s)