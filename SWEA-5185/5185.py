test = input()
test = int(test)
for i in range(test):
    inp = input()
    num, hex = inp.split(" ")
    num = int(num)
    s = ''
    for j in range(num):
        if hex[j] == '0':
            s = s+'0000'
        elif hex[j] == '1':
            s = s+'0001'
        elif hex[j] == '2':
            s = s+'0010'
        elif hex[j] == '3':
            s = s+'0011'
        elif hex[j] == '4':
            s = s+'0100'
        elif hex[j] == '5':
            s = s+'0101'
        elif hex[j] == '6':
            s = s+'0110'
        elif hex[j] == '7':
            s = s+'0111'
        elif hex[j] == '8':
            s = s+'1000'
        elif hex[j] == '9':
            s = s+'1001'
        elif hex[j] == 'A':
            s = s+'1010'
        elif hex[j] == 'B':
            s = s+'1011'
        elif hex[j] == 'C':
            s = s+'1100'
        elif hex[j] == 'D':
            s = s+'1101'
        elif hex[j] == 'E':
            s = s+'1110'
        elif hex[j] == 'F':
            s = s+'1111'
    print('#' + str(i+1) + ' ' + s)