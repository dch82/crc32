# crc32

super simple crc32 calculator written by dch82

## usage

pass the data to be hashed through stdin

the hash is outputed through stdout

### examples

user input is in *italics*

#### from command line
<code>
<i>crc32</i>
<i>hello world!</i>3B4C26D
<code>

#### piped from another command
<code>
<i>neowofetch | ./crc32<i>
4C4F0D20
</code>

#### from a file

##### `hello.txt`
```
hello world!
```

<code>
<i>crc32 < hello.txt<i>
3B4C26D
</code>

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
