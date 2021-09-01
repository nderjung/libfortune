# Good Fortunes

This is an example shared library which you can install and use to provide good
fortunes to your application!

_Built for [Unikraft Summer of Code 2021](https://usoc21.unikraft.org) Session 08!_

## Installation

1. Start by cloning the repository:
   ```bash
   git clone https://github.com/nderjung/libfortune.git
   cd libfortune
   ```
2. Configuration and generate relevant `Makefiles`:
   ```bash
   autoreconf -vfi
   ./configure
   ```

3. Compile and install the library to the OS defaults (`/usr/local/lib` and
   `/usr/local/include`)
   ```bash
	 make
   sudo make install
   ```

## Using the library

You have to install the library before headers can be found, and linking can be
done.  Please check [example/](example/).

## Uninstalling Library

```bash
sudo make uninstall
```

