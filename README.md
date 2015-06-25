# BoxerMediaArtPi
## Usage
```
pi@raspberrypi ~ $ cd ~/BoxerMediaArtPi
pi@raspberrypi ~/BoxerMediaArtPi $ ./main <length span> <width span>
```
## Download and Install
### WiringPi
```
pi@raspberrypi ~ $ git clone git://git.drogon.net/wiringPi
pi@raspberrypi ~ $ cd wiringPi
pi@raspberrypi ~/wiringPi $ ./build
```
### BoxerMediaArtPi
```
pi@raspberrypi ~ $ git clone https://github.com/Pauis/BoxerMediaArtPi.git
pi@raspberrypi ~ $ cd BoxerMediaArtPi
pi@raspberrypi ~/BoxerMediaArtPi $ gcc -o main main.c -wiringPi
## Notice
* This program uses [WiringPi] (http://wiringpi.com/) library, so you have to install it before compiling.
* This program doesn't resize pictures.  you have to resize them manually.
