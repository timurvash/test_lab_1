#!/bin/bash

# Останавливаем скрипт, если произошла ошибка
set -e

# Имя папки сборки
BUILD_DIR="build"

# Создаём папку сборки, если её нет
if [ ! -d "$BUILD_DIR" ]; then
  mkdir "$BUILD_DIR"
fi

# Переходим в папку сборки
cd "$BUILD_DIR"

# Генерация Makefile с включённой отладкой
cmake -DCMAKE_BUILD_TYPE=Debug ..

# Сборка проекта
cmake --build .

# Запуск исполняемого файла (имя проекта берётся из CMakeLists.txt)
./test_repo
