@echo off

echo Building Program...

gcc src/index.c src/test.c -o dist/index.exe

echo Finished Building.

echo -- Starting program --

cd dist
index.exe

echo -- End --

pause