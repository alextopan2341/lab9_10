cmake_minimum_required(VERSION 3.21)
project(lab9_10)

set(CMAKE_CXX_STANDARD 14)

add_executable(lab9_10 main.cpp Product/Product.cpp Product/Product.h Repo/Repo.cpp Repo/Repo.h Tests/Tests.cpp Tests/Tests.h Service/Service.cpp Service/Service.h RepoFile/RepoFile.cpp RepoFile/RepoFile.h UI/UI.cpp UI/UI.h)
