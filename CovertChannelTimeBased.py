import subprocess, os
import time
#hint:
subprocess.call(['hping3', '-1', '-c', '1', '127.0.0.1', '-e', 'HINT: calculate time between ICMP. Multiply it by 10. The flag is not actually characters inside the packet'])
subprocess.call(['pkill' , '-f' , 'hping'])
#
string = os.system("grep 'cyber' /etc/passwd")
lsto = list(string)
lst = []

i = 0
for a in lsto:
    print ("Value of index " + str(i) + " is " + str(lsto[i]))
    lst.append(ord(a))
    i=i+1

print(lst)

for ping in range(0, len(lst)):
    address = "127.0.0.1"
    res = subprocess.call(['ping', '-c', '1', address])
    if res == 0:
        time.sleep(lst[ping]/10)
        print ("ping to", address, "OK")
    elif res == 2:
        print ("no response from", address)
    else:
        print ("ping to", address, "failed!")
