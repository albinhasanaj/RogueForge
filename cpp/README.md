# RogueForge

This folder contains the C++ game engine for **RogueForge**.
It uses **CMake** for building and is set up for development inside the **MSYS2 UCRT64 shell** on Windows.

---

## 1. Prerequisites

Open the **MSYS2 UCRT64** terminal (the path should include `/ucrt64/`).
Install the compiler and build tools:

```bash
pacman -Syu
pacman -S mingw-w64-ucrt-x86_64-gcc mingw-w64-ucrt-x86_64-cmake mingw-w64-ucrt-x86_64-ninja
# optional debugger:
# pacman -S mingw-w64-ucrt-x86_64-gdb
```

---

## 2. Configure and Build

Run these commands from the project root or from inside `cpp/`:

```bash
cd cpp
mkdir -p build
cd build
cmake ..            # configure the project
cmake --build .     # compile everything
```

---

## 3. Run the Game

After building, run the executable from inside the `build/` folder:

```bash
./RogueForge
```

---

## 4. Clean Rebuild

If something goes wrong and you want a fresh build:

```bash
cd cpp
rm -rf build
mkdir build && cd build
cmake ..
cmake --build .
./RogueForge
```

---

## 5. One-Liner (Configure + Build + Run)

For quick testing:

```bash
cd cpp && mkdir -p build && cd build && cmake .. && cmake --build . && ./RogueForge
```

---

## 6. Common Issues

* **`cmake: command not found`**
  Install CMake:

  ```bash
  pacman -S mingw-w64-ucrt-x86_64-cmake
  ```

* **`Error: not a CMake build directory (missing CMakeCache.txt)`**
  You’re in a fresh build folder with no configuration. Fix:

  ```bash
  cmake ..
  cmake --build .
  ```

* **Wrong shell**
  Make sure you are using **MSYS2 UCRT64**, not MSYS or MINGW32.

---

## 7. Dev Loop

Typical workflow while coding:

1. Edit source in `src/` and headers in `include/`.
2. Build and run:

   ```bash
   cd cpp/build && cmake --build . && ./RogueForge
   ```
