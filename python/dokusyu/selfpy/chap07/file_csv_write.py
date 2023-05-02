import csv

data = [
    [101,'山田太郎','090-1111-2222'],
    [102,'鈴木次郎','080-3333-4444'],
    [103,'佐藤花子','070-5555-6666']
]

with open('./chap07/member.tsv', 'w', newline='', encoding='UTF-8') as file:
  writer = csv.writer(file, delimiter='\t', quoting=csv.QUOTE_ALL)
  writer.writerows(data)