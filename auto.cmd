@echo off

if NOT exist dist mkdir dist

echo Building Program...

gcc src/*.c -o dist/final.exe

echo Finished Building.

echo -- Starting program --

start run.cmd