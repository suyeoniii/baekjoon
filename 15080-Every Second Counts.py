h1,c1, m1, c2, s1 = input().split()
h2, c2, m2, c2, s2 = input().split()

s = int(s2)-int(s1)
m = int(m2)-int(m1)
h = int(h2)-int(h1)

if s<0 :
    m = m-1
    s = s+60
if m<0 :
    h = h-1
    m = m+60
if h<0 :
    h=h+24

s = s+m*60+h*60*60
print(s)


