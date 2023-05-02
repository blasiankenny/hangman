import asyncio
import time

async def heavy_process(name, sec):
  print(f'start {name}')
  await asyncio.sleep(sec)
  print(f'end {name}')
  return f'{name}/{sec}'

start = time.time()
loop = asyncio.get_event_loop()
result = loop.run_until_complete(
  asyncio.gather(
    heavy_process('hoge', 2),
    heavy_process('bar', 5),
    heavy_process('piyo', 1),
    heavy_process('spam', 3)
  )
)
end = time.time()
print(result)
print(f'Process Time: {end - start}')  