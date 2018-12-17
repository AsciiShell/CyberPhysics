import re
def preobr(name):
    f = open(name)
    s = f.read()
    f.close()    
    s = re.sub('\n', ' ',s)
    s = re.sub('\t', ' ',s)
    sb = s.split()
    s = re.sub(',', '.',s)
    f = open("new_" + name, 'w')
    f.write(s)
    f.close()
    
    
while 1:
    s = input()
    preobr(s)
    print("OK")
