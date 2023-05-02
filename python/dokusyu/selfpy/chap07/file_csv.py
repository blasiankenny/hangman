import csv

with open('selfpy/chap07/data.tsv', encoding='UTF-8') as file:
  for row in csv.reader(file, delimiter='\t'):
  # for row in csv.reader(file, dialect=csv.excel_tab):
    for cell in row:
      print(cell)
    print('--------')