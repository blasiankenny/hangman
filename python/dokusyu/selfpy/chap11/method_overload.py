# multidispatchモジュールがインストールされていない環境では、
# conda install／pip install（コラム参照）でインストール
from multipledispatch import dispatch

class MyOverload:
  # dispatch(type,...)で受け取り可能な引数を列挙
  # int型の1引数を受け取るhogeメソッド
  @dispatch(int)
  def hoge(self, arg):
    print(type(arg))

  # list型、str型の2引数を受け取るhogeメソッド
  @dispatch(list, str)
  def hoge(self, arg, arg2):
    print(f'{type(arg)} {type(arg2)}')

  # @dispatchデコレーターを利用しないパターン
  # def hoge(self, *arg):
  #   if isinstance(arg[0], int):
  #     print(type(arg[0]))
  #   elif isinstance(arg[0], list) and isinstance(arg[1], str):
  #     print(f'{type(arg[0])} {type(arg[1])}')
  #   else:
  #     raise NotImplementedError

if __name__ == '__main__':
  mo = MyOverload()
  mo.hoge(0)	# 結果：<class 'int'>
  mo.hoge([], '')	# 結果：<class 'list'> <class 'str'>
  mo.hoge(set())	# 結果：エラー（NotImplementedError: Could not find signature for hoge: <set>）
