class log_func:
  # 初期化メソッド（パラメーターを保持）
  def __init__(self, details=True):
    self.details = details
  # デコレーターの実処理
  def __call__(self, func):
    def inner(*args, **keywds):
      print('-----------------')
      print(f'Name: {func.__name__}')
      if self.details:
        print(f'Args: {args}')
        print(f'Keywds: {keywds}')
      print('-----------------')
      return func(*args, **keywds)
    return inner

@log_func()
def hoge(x, y, m='bar', n='piyo'):
  print(f'hoge: {x}-{y}/{m}-{n}')

hoge(15, 37, m='ほげ', n='ぴよ')