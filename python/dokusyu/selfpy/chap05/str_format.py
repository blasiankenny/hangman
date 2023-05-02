print('{}は{}、{}歳です。'.format('サクラ', '女の子', 2))
print('{0}は{2}歳、{1}です。'.format('サクラ', '女の子', 2))
print('{name}は{age}歳、{sex}です。'.format(
  name = 'サクラ', sex = '女の子', age = 2))
name = 'サクラ'
sex = '女の子'
age = 2
print(f'{name}は{sex}、{age}歳です。')

# 以下はPython 3.8以降でのみ動作（3.7以前の環境では実行できません）
print(f'{name=}は{sex=}、{age=}歳です。')