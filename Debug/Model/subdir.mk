################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Model/ArrayNode.cpp \
../Model/CTECArray.cpp \
../Model/Node.cpp 

OBJS += \
./Model/ArrayNode.o \
./Model/CTECArray.o \
./Model/Node.o 

CPP_DEPS += \
./Model/ArrayNode.d \
./Model/CTECArray.d \
./Model/Node.d 


# Each subdirectory must supply rules for building sources it contributes
Model/%.o: ../Model/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


