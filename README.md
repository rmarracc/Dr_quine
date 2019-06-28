# Dr_quine
Various programs that display their source code

## Installation

### Clone

- Clone this repo using `git clone https://github.com/rmarracc/Dr_quine`

### Build

- Go on the C folder
- Simply build the program with `make` in the cloned folder

## Usage

- Execute the Colleen quine with `./Colleen`
- Execute the Grace quine with `./Grace`
- Execute the Sully quine with `./Sully`

## How it works ?

### Colleen

- Basic C quine which displays its own source code
- The requirements of this quine are :
- 2 comments (1 inside the main function, the other outside)
- 1 main function
- 1 additionnal function, called during the execution

### Grace

- Basic C quine which displays its own source code
- The requirements of this quine are :
- 1 comment
- No main function declared
- Strictly 3 preprocessor defines

### Sully

- C quine with creates other quines, compiles them and execute them
- The requirements of this quine are :
- A i variable decreasing on every child quine the sully quine creates
- Not executed if i isn't strictly positive

## Notes

- This project contains two parts (a C part (compulsory) and an ASM part (to get more points)), this repo contains currently only the C part
- The free(NULL) on the sully source code is useless, I used itoa() before but since itoa() isn't standard, I replaced it by sprintf, which doesn't allocate memory with malloc(3)
