g++ -O2 -funroll-loops -std=c++17 -Wall -Wextra main.cpp -o main
./main < input.txt > user_output.txt
echo "--- Difference between example output and your output ---"
diff -y --suppress-common-lines output.txt user_output.txt