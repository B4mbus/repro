dependencies = [
  dependency('catch2'),
]

test_files = files(
  'empty_main.cpp',
  'test.cpp',
  '../src/test.cpp' # Tbf I have no idea how to make it sensibly so that the test binary is separate but also so that I cant link with the files from src
)

test_exe = executable(
  'test_exe',
  test_files,
  include_directories: include_dirs,
  dependencies: dependencies
)

test('test returns 1', test_exe)
