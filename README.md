# AVR_DIO
Atmega32 DIO Driver
ATmega32

Overview
The Atmega32 DIO (Digital Input/Output) Driver is a versatile and efficient library for controlling the GPIO (General Purpose Input/Output) pins of the Atmel AVR ATmega32 microcontroller. It provides a user-friendly interface to configure and manipulate individual pins as either input or output, allowing developers to easily interact with external devices such as sensors, LEDs, motors, and more.

Key Features
Simplified Abstraction: The driver offers a high-level abstraction to handle the complexities of manipulating individual I/O pins, making it easy for developers to focus on their application logic.

Flexible Configuration: Users can easily configure each pin as either input or output, with the option to enable pull-up resistors for input pins.

Efficient Performance: The driver is designed with performance in mind, ensuring minimal overhead and efficient use of microcontroller resources.

Bit Manipulation: The library leverages bitwise operations for maximum efficiency and compact code size.

Interrupt Support: The driver supports external interrupts, allowing users to respond to changes on specific pins without continuous polling.

Sample Applications: A set of well-documented sample applications showcase various use cases, serving as a helpful reference for users to get started quickly.

Installation
To use the Atmega32 DIO Driver in your AVR project, follow these steps:

Clone the repository or download the source code.
Copy the relevant driver files (dio.c and dio.h) into your project directory.
Include the dio.h header file in your application code.
Usage
Using the Atmega32 DIO Driver is straightforward:

Initialize the driver: Call the initialization function to set up the necessary configurations.

Configure pins: Use the provided functions to set a pin as an input or output and enable pull-ups if needed.

Read from input pins: Use the appropriate function to read the logic level from input pins.

Write to output pins: Control the logic level on output pins using the provided functions.

Enable interrupts (if required): Configure external interrupt settings to handle specific events from external devices.


Contributions
Contributions to the Atmega32 DIO Driver are welcome! If you find any issues or have enhancements to propose, please feel free to open an issue or submit a pull request on the GitHub repository.

License
The Atmega32 DIO Driver is licensed under the MIT License, making it suitable for both personal and commercial projects.

Note: This driver is intended for use specifically with the Atmega32 microcontroller, but it can serve as a reference or basis for similar drivers on other AVR microcontrollers. Always refer to the Atmega32 datasheet and the driver documentation for the most accurate and up-to-date information.
