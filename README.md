# 🧮 CalCLI

![Build](https://img.shields.io/github/actions/workflow/status/antonioThomaz1903/CalCli/app-check.yml?branch=main)
![License](https://img.shields.io/github/license/antonioThomaz1903/CalCli)
![C++](https://img.shields.io/badge/C%2B%2B-20-blue)

> A minimal symbolic calculator for the command line, written in modern C++.

---

## ✨ Features

- Symbolic expression tree representation
- Basic expression evaluation (e.g. `x^2 + 2x + 1`)
- Symbolic differentiation
- Command-line interface
- Clean and modular structure with CMake
- No external dependencies

---

## ⚙️ Build Instructions

### 🔧 Using Makefile

```bash
make        # config + build + run
make config # runs cmake
make run    # runs the built executable
make test   # runs ctest
```
### 🛠 Manual CMake
```bash
cmake -S . -B build
cmake --build build
./build/CalCLI
```

## 🧪 Tests
Simple tests can be run with:

```bash
make test
# or
ctest --test-dir build
```
## 🚀 Roadmap
- [x] Expression representation

- [x] Evaluation

- [x] Differentiation

- [ ] Parsing string input

- [ ] REPL interface

- [ ] Support for functions: sin(x), log(x), etc.

- [ ] Integration and limits (future milestones)

## 🤝 Contributing
Pull requests are welcome! For major changes, please open an issue first to discuss your ideas.
Make sure to update tests as appropriate.

## 📄 License
This project is licensed under the MIT License.

##👨‍💻 Author
Made with ❤️ by @antonioThomaz1903
