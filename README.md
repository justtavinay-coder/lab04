# Лабораторная работа №3

## Задание 1

В директории [`formatter_lib`](formatter_lib) создан [`CMakeLists.txt`](formatter_lib/CMakeLists.txt), который собирает статическую библиотеку `formatter`.

## Задание 2

В директории [`formatter_ex`](formatter_ex) создан [`CMakeLists.txt`](formatter_ex/CMakeLists.txt), который собирает статическую библиотеку `formatter_ex` и связывает ее с библиотекой `formatter`.

## Задание 3

Созданы `CMakeLists.txt` для приложений:

- [`hello_world`](hello_world_application/CMakeLists.txt), которое использует `formatter_ex`;
- [`solver`](solver_application/CMakeLists.txt), которое использует `formatter_ex` и `solver_lib`.

Корневой [`CMakeLists.txt`](CMakeLists.txt) подключает все подпроекты.
