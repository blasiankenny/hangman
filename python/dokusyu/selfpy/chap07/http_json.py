import requests

res = requests.get('https://wings.msn.to/tmp/books.json')
bs = res.json()
print(bs['books'][0]['title'])