@echo off

if exist dist del /F /Q dist
if NOT exist dist mkdir dist

echo Building Program...

gcc src/*.c -o dist/final

echo Finished Building.

echo -- Starting program --

start run.cmd