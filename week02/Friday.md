# Notes for Friday of Week 2

## CS labs 50 years ago

50 years ago, if you were to sit in a CS lab, you likely would have
* a [CRT display](https://en.wikipedia.org/wiki/Cathode-ray_tube)
* a keyboard

The above two items would have been connected with physical cables to a [computer](https://en.wikipedia.org/wiki/Time-sharing) that was stored in a server room stored elsewhere in the building.

![terminal](https://upload.wikimedia.org/wikipedia/commons/thumb/9/9f/DEC_VT100_terminal_transparent.png/541px-DEC_VT100_terminal_transparent.png)

This kind of work station  is called a [terminal](https://en.wikipedia.org/wiki/Computer_terminal).



## Terminal emulator

Today when you sit down at your computer, you will run a program called a [terminal emulator](https://en.wikipedia.org/wiki/Terminal_emulator) that emulates such old-school terminal hardware.

There are lots of terminal emulators, but you will probably use one of these:
* [Windows Console](https://en.wikipedia.org/wiki/Windows_Console)
* [macOS Terminal](https://en.wikipedia.org/wiki/Terminal_(macOS))
* [PuTTY](https://en.wikipedia.org/wiki/PuTTY)


## Connecting to the server

Within your terminal emulator, you will use the [secure shell protocol (ssh)](https://en.wikipedia.org/wiki/Secure_Shell) to connect your terminal emulator to the Linux server (aurora) that we will be using in this class.

```bash
$ ssh yourusername@aurora.cs.uaf.edu
```

### Connecting from off campus

If you are off campus, you will first need to install and run the [UAF VPN software](https://www.alaska.edu/oit/files/VPN_instructions_GlobPro.pdf)


## Interacting with the command-line shell

Once you have connected to our Linux server using ssh, you will interact with the server using a [command-line shell](https://en.wikipedia.org/wiki/Shell_(computing)#Command-line_shells). 

The shell [provides](https://en.wikipedia.org/wiki/Standard_streams#Standard_error_(stderr))
* you with a mechanism (the [standard input stream](https://en.wikipedia.org/wiki/Standard_streams#Standard_input_(stdin))) to send commands to the computer's operating system
* the operating system with two mechanisms (the [standard output stream](https://en.wikipedia.org/wiki/Standard_streams#Standard_output_(stdout)) and the [standard error stream](https://en.wikipedia.org/wiki/Standard_streams#Standard_error_(stderr))) to send information back to you

The shell that we will be using in this class is [bash](https://en.wikipedia.org/wiki/Bash_(Unix_shell)).


