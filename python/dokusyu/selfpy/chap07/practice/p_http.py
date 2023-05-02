import requests

res = requests.request('get', 'https://codezine.jp/')
print(res.status_code)