import functools
# import operator

data = [2, 4, 6, 8]
multi = functools.reduce(lambda result, x: result * x, data)
# multi = functools.reduce(lambda result, x: result * x, data, 1)
# multi = functools.reduce(operator.mul, data)
print(multi)