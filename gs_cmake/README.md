# Getting Started with CMake

- Install
```
brew cask info cmake
brew cask install cmake
which cmake
cmake --version
```

- Generates building files into build folder
```
cmake -S . -B build/
```

- Now build an executable
```
cmake --build build/
```

- Run executable (compiled program) from the build output
```
./build/hello
```

### Otherwise

- use CLion
- use CMake App
