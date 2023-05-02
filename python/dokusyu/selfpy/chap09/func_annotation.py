def get_triangle(base:float=1, height:float=1) ->float:
# def get_triangle(base:'底辺', height:'高さ') ->'面積':
  return base * height / 2

ann = get_triangle.__annotations__
print(ann)
print(ann['base'])

# print(get_triangle('10', 5))