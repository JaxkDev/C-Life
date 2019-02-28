@echo off

echo Starting compiler...

gcc src/*.c src/generators/*.c -o dist/final

echo Finished Compiling.

pause