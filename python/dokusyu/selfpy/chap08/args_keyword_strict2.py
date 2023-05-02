# 以下はPython 3.8以降でのみ動作（3.7以前の環境では実行できません）
def my_func(arg1, /, arg2=0, arg3=0):
  pass

# my_func(arg1=10, arg2=20)
my_func(10, arg2=20)