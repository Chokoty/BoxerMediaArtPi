# BoxerMediaArtPi
## Usage
```
pi@raspberrypi ~/BoxerMediaArtPi $ sudo ./boxer.out
```
## Download and Install
### WiringPi
Download [wiringPi] (http://wiringpi.com/) code.
```
pi@raspberrypi ~ $ git clone git://git.drogon.net/wiringPi
```
Go to wiringPi directory.
```
pi@raspberrypi ~ $ cd wiringPi
```
Run the 'build' script. It will automatically install the library.
```
pi@raspberrypi ~/wiringPi $ ./build
```
### BoxerMediaArtPi
Download BoxerMediaArt code.
```
pi@raspberrypi ~ $ git clone https://github.com/Pauis/BoxerMediaArtPi.git
```
Go to BoxerMediaArtPi directory.
```
pi@raspberrypi ~ $ cd BoxerMediaArtPi
```
Build excutable file from code.
```
pi@raspberrypi ~/BoxerMediaArtPi $ gcc -o boxer.out main.c asciiart.c asciiart.h -lwiringPi
```
## Notice
* This program is for Command Line Interface.
* This program uses [wiringPi] (http://wiringpi.com/) library, so you have to install it before compiling.
* This program doesn't resize pictures.  you have to resize them manually.
