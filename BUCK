cxx_library(
  name = 'kafel',
  header_namespace = '',
  srcs = glob(['src/**/*.c']),
  exported_headers = subdir_glob([
    ('include', 'kafel.h')
  ]),
  headers = glob(['src/**/*.h']),
  visibility = ['PUBLIC']
)

cxx_binary(
  name = 'main',
  srcs = ['test/main.cpp'],
  deps = [':kafel']
)
