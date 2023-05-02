import shutil

shutil.copytree(
  './chap07/doc', './chap07/data',
  ignore=shutil.ignore_patterns('*.dat', '*.log')
)