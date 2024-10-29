# crc32

super simple crc32 calculator written by dch82

## usage

pass the data to be hashed through stdin

the hash is outputed through stdout

### examples

#### from command line
``` sh
$ crc32
hello world!3B4C26D
```

#### piped from another command

``` sh
neowofetch | crc32
84F14262
```

#### from a file

``` sh
crc32 < hello.txt
3B4C26D
```

## getting a binary

### preresquites

* some sort of c compiler (i use `clang` with `llvm`)
* `make`

### building
``` sh
# get a copy of this repo on your computer
git clone https://github.com/dch82/crc32.git
# open the repository
cd crc32/
# compile the program
make
```

### installing

just copy `crc32` to somewhere on your `$PATH`.

## license

this program belongs in the public domain: do whatever you want with it
