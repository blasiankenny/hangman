import requests

res = requests.request('get', 'https://codezine.jp/')
# res = requests.get('https://codezine.jp/')

print(res.text)