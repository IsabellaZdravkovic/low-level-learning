# What to do


## Needed programs:
- For windows: Ubuntu [WSL](https://learn.microsoft.com/en-us/windows/wsl/install)
- gcc-aarch64-linux-gnu
- binutils-aarch64-linux-gnu
- binutils-aarch64-linux-gnu-dbg

## Installation for Windows
To do

## Getting Started in Compiling C or C++
First run wsl in Powershell, type in Powershell:

`wsl`

Then go to the directory of your c/c++ file. 

## Getting Started in Compiling ARM64 code (Armv8)
First run wsl in Powershell, type in Powershell:

`wsl`

Then go to the directory of your assembler file. 


### Compiling s files:
When compiling a asm file like **hello_world_arm.s**. We do the following:

* First assemble the s file into an object file:

    `
    aarch64-linux-gnu-as -mcpu=cortex-a57 hello_world_arm.s -o hello_world_arm.o 
    `

* Then use the linker to turn it into an executable file:

    `
    aarch64-linux-gnu-ld hello_world_arm.o -o hello_world_arm
    `

* To run the program, we use:

    `
    qemu-aarch64 hello_world_arm
    `