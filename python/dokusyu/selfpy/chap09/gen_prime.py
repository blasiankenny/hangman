import math

def get_primes():
  num = 2
  while True:
    if is_prime(num):
      yield num
    num += 1

def is_prime(value):
  result = True
  for i in range(2, math.floor(math.sqrt(value)) + 1):
    if value % i == 0:
      result = False
      break
  return result

for prime in get_primes():
  print(prime)
  if prime > 100:
    break

  # gen = get_primes()
  # if prime > 100:
  #   gen.throw(ValueError('result is over 100!'))

# gen = get_primes()

# for prime in gen:
#   print(prime)
#   if prime > 100:
#     gen.close()