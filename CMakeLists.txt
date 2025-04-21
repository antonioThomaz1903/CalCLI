cmake_minimum_required(VERSION 3.10)

# Nome do projeto e versão
project(Math-C VERSION 1.0)

# Versao do C++
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Incluir diretorio de headers
include_directories(include)

# Adicionar todos os arquivos .cpp da pasta src e main
file(GLOB SOURCES "src/*.cpp")

# Gerar executavel
add_executable(${PROJECT_NAME} ${SOURCES})

# Habilitar testes
enable_testing()

# Gerar executavel para teste
add_executable(test1 tests/test1.cpp)
add_test(NAME test COMMAND test1)