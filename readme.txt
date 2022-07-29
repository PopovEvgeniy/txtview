                                             Txt view

                    Simple tool for printing a text files to console by Popov Evgeniy Alekseyevich

                                           Version 0.7.0.1


Description and usage

This program is simple tool for printing a text files to console. It is simular to Unix "cat" utility.
Txt view breaking up a large text file for enough amount of pages while it print to console.
Each page is 25 lines. Use Enter key for go to next page.

This program takes a target file name as command line argument.

License

This program distributed under GNU GENERAL PUBLIC LICENSE.

Source code

Dos version of this program compiled under Open Watcom.
Windows version of this program compiled under MINGW-w64.
Source code can be compiled for wide range operation systems, but you need to create makefile or build script by yourself.
I provide only three things: compiled binary files for Windows and Dos, makefile for Linux.

Install and uninstall under Linux

Follow these steps:

1.Extract content of source code archive.
2.Open terminal and go to source code directory.
3.
Run as root for install: make install
Run as root for uninstall: make uninstall

Contact

You can send me a letter to tuzik87@inbox.ru.

Version history

0.1 - Initial version.
0.2 - 0.7 - Small changes.
0.7.0.1 - Makefile updated.