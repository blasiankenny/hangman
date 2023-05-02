import asyncio
import requests
import time

async def get_content(url):
  print(f'start {url}')
  # res = requests.request('get', url)
  res = await loop.run_in_executor(None, requests.get, url)
  print(f'end {url}')
  return res.text[:100]

start = time.time()
loop = asyncio.get_event_loop()
result = loop.run_until_complete(
  asyncio.gather(
    get_content('https://codezine.jp'),
    get_content('https://wings.msn.to'),
    get_content('https://www.web-deli.com/')
  )
)
end = time.time()
print(result)
print(f'Process Time: {end - start}')