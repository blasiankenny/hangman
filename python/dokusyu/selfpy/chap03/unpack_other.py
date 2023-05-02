data = [ 1, 2, 3, 4, 5 ]
m, n, *o = data
print(m)
print(n)
print(o)

r, *s, t = data
print(r)
print(s)
print(t)

*x, y, z = data
print(x)
print(y)
print(z)