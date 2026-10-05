#!/bin/bash
if [ "$1" == "CHECK" ]; then
echo "--- Checking for differences between example output and your output ---"
g++ -O2 -funroll-loops -std=c++17 -Wall -Wextra main.cpp -o main
./main < HCNMAX.inp > user_output.out
echo "--- Difference between example output and your output ---"
diff -y --suppress-common-lines HCNMAX.out user_output.out
else
g++ -O2 -funroll-loops -std=c++17 -Wall -Wextra main.cpp -o main
./main
fi
