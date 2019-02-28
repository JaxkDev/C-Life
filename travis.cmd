@echo off

echo Building Program...

gcc src/*.c src/generators/*.c -o dist/final.exe

echo Finished Building.