# Лабораторная работа 4

[![CI](https://github.com/justtavinay-coder/lab04/actions/workflows/cicd.yml/badge.svg)](https://github.com/justtavinay-coder/lab04/actions/workflows/cicd.yml)

Представьте, что вы стажер в компании "Formatter Inc.".

## Задание 1

Вам поручили перейти на систему автоматизированной сборки CMake. Исходные файлы находятся в директории [`formatter_lib`](formatter_lib). В этой директории находятся файлы для статической библиотеки `formatter`. Создайте `CMakeLists.txt` в директории [`formatter_lib`](formatter_lib), с помощью которого можно будет собирать статическую библиотеку `formatter`.

[`CMakeLists.txt`](formatter_lib/CMakeLists.txt)

## Задание 2

У компании "Formatter Inc." есть перспективная библиотека, которая является расширением предыдущей библиотеки. Т.к. вы уже овладели навыком созданием `CMakeLists.txt` для статической библиотеки `formatter`, ваш руководитель поручает заняться созданием `CMakeLists.txt` для библиотеки `formatter_ex`, которая в свою очередь использует библиотеку `formatter`.

[`CMakeLists.txt`](formatter_ex/CMakeLists.txt)

## Задание 3

Конечно же ваша компания предоставляет примеры использования своих библиотек. Чтобы продемонстрировать как работать с библиотекой `formatter_ex`, вам необходимо создать два `CMakeLists.txt` для двух простых приложений:

- `hello_world`, которое использует библиотеку `formatter_ex`;
- `solver`, приложение которое использует статические библиотеки `formatter_ex` и `solver_lib`.

[`CMakeLists.txt`](hello_world_application/CMakeLists.txt)

[`CMakeLists.txt`](solver_application/CMakeLists.txt)

## Continuous Integration

Сборка настроена для Linux и Windows:

- Linux: `gcc`, `clang`
- Windows: MSVC

Конфигурационные файлы:

- [GitHub Actions](.github/workflows/cicd.yml)
- [Travis CI](.travis.yml)
- [AppVeyor](appveyor.yml)
