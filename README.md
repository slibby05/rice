<a name="readme-top"></a>



<h3 align="center">RICE: An Optimizing Curry Compiler</h3>

  <p align="center">
    project_description
    <br />
    This is an optimizing compiler for the Curry programming language.

  </p>
</div>

## Getting Started

This is an example of how you may give instructions on setting up your project locally.
To get a local copy up and running follow these simple example steps.

### Prerequisites

The only requirement is the Pakcs Curry compiler Version 2.3 and the CPM package manager.
A version compatible with Pakcs 3.0 and later is currently being developed.

* pakcs
  ```
  https://www.informatik.uni-kiel.de/~pakcs/download.html
  ```

### Installation

1. Install Pakcs
2. copy the runtime directory to ~/.rice
3. Install RICE
   ```sh
   cypm install
   ```

<p align="right">(<a href="#readme-top">back to top</a>)</p>

If you'd like to run the benchmarks, use can use the generated C code in the 
compiled_benchmarks folder.
You can build the programs with make.
Otherwise you can compile the bunchmarks from the Curry source in the benchmarks folder
using the runBenchmarks script.

All benchmarks are built with the clang compiler.
They all compile with GCC, but they run faster with Clang.

<!-- USAGE EXAMPLES -->
## Usage

```sh
rice File.curry
```

If File.curry contains a main method, then rice will produce an executable,
otherwise it will just compile the library.

<p align="right">(<a href="#readme-top">back to top</a>)</p>



<!-- ROADMAP -->
## Roadmap

- [ ] Compatibility with Pakcs 3.0


<p align="right">(<a href="#readme-top">back to top</a>)</p>



<!-- CONTRIBUTING -->
## Contributing

If you have a suggestion that would make this better, please fork the repo and create a pull request.

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/Feature`)
3. Commit your Changes (`git commit -m 'Add some Feature'`)
4. Push to the Branch (`git push origin feature/Feature`)
5. Open a Pull Request

<p align="right">(<a href="#readme-top">back to top</a>)</p>




<!-- CONTACT -->
## Contact

Steven Libby - libbys@up.edu

Project Link: [https://github.com/slibby05/rice](https://github.com/slibby05/rice)

<p align="right">(<a href="#readme-top">back to top</a>)</p>

