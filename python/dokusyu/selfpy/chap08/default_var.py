str = 'before'

def my_func(param=str):
  print(param)

str = 'after'
my_func()