def total_products(init, *values):
  result = init
  for value in values:
      result *= value
  return result

print(total_products())