@echo off

echo Building Program...

gcc src/*.c -o dist/final.exe

echo Finished Building.

echo -- Starting program --

cd dist
final.exe