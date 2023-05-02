class MyMeta(type):
  @classmethod
  def __prepare__(matacls, name, bases, **kwargs):
    print(f'{matacls}:__prepare__')
    #return super().__prepare__(name, bases, **kwargs)
    return {'hoge': 'ほげ'}

  def __new__(matacls, name, bases, disc, **kwargs):
    print(f'{matacls}:__new__')
    return super().__new__(matacls, name, bases, disc)
        
  def __init__(cls, name, bases, disc, **kwargs):
    print(f'{cls}:__init__')
    super().__init__(name, bases, disc)
    
  def __call__(cls, *args, **kwargs):
    print(f'{cls}:__call__')
    return super().__call__(*args, **kwargs)

class MyClass(metaclass=MyMeta):
  pass

if __name__ == '__main__':
  c = MyClass()
  print(MyClass.hoge)