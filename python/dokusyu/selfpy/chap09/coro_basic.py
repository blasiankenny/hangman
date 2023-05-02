import asyncio
import time

async def heavy_process(name, sec):
  print(f'start {name}')
  await asyncio.sleep(sec)
  print(f'end {name}')
  return f'{name}/{sec}'

print(heavy_process('Hoge', 5)) 