project(
  'repro',
  'cpp',
  version : '0.1.0',
)

dependencies = [
  dependency('catch2'),
]

sources = files(
  'src/main.cpp',
  'src/test.cpp'
)

executable_options = [
  'cpp_std=c++20'
]

include_dirs = [
  include_directories('include')
]

exe = executable(
  'repro',
	sources,
  dependencies: dependencies,
  include_directories: include_dirs,
  override_options: executable_options,
)

subdir('test')
