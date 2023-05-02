class MyAppError(Exception):
  pass

class MyInputError(MyAppError):
  def __init__(self, code, message):
    self.code = code
    self.message = message

if __name__ == '__main__':
  try:
    raise MyInputError(501, 'Invalid Input')
  except MyAppError as ex:
    print(ex.args)