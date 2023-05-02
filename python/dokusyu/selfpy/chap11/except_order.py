try:
  data = 5 / 0
except Exception:
  print('Exception')
except ArithmeticError:
  print('ArithmeticError')
except OverflowError:
  print('OverflowError')