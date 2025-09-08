cmake_minimum_required(VERSION 4.0)
project(C_Beginner_Applications C)

set(CMAKE_C_STANDARD 17)

add_executable(C_Beginner_Applications main.c
        helloworld/HelloWorld.c
        bmicalculator/BMICalculator.c
        factorial/Factorial.c
        fibonacci/Fibonacci.c
        GPACalculator/GPACalculator.c
        DynamicGPACalculator/DynamicGPACalculator.c
        coinflip/CoinFlip.c
        inputage/InputAge.c
        inputfullname/InputFullName.c
        swapvariables/SwapVariables.c
        bubblesort/BubbleSort.c
        student/Student.c
)
