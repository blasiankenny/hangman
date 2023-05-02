def get_triangle(base=5, height=1):
  return base * height / 2

print(f'三角形の面積は{get_triangle()}です。')
print(f'三角形の面積は{get_triangle(10)}です。')
print(f'三角形の面積は{get_triangle(10, 5)}です。')