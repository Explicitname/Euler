################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Problem1.cpp \
../Problem2.cpp \
../Problem3.cpp \
../Problem4.cpp \
../Problem5.cpp \
../Problem6.cpp \
../Problem7.cpp \
../main.cpp 

OBJS += \
./Problem1.o \
./Problem2.o \
./Problem3.o \
./Problem4.o \
./Problem5.o \
./Problem6.o \
./Problem7.o \
./main.o 

CPP_DEPS += \
./Problem1.d \
./Problem2.d \
./Problem3.d \
./Problem4.d \
./Problem5.d \
./Problem6.d \
./Problem7.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


