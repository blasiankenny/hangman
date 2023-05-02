from functools import wraps

def log_func(func):
  @wraps(func)
  def inner(*args, **keywds):
    """関数の情報を出力"""
    print('-----------------')
    print(f'Name: {func.__name__}')
    print(f'Args: {args}')
    print(f'Keywds: {keywds}')
    print('-----------------')
    return func(*args, **keywds)
  return inner

@log_func
def hoge(x, y, m='bar', n='piyo'):
  """デコレーター確認のための関数"""
  print(f'hoge: {x}-{y}/{m}-{n}')

if __name__ == '__main__':
  print(hoge.__name__)
  print(hoge.__doc__)