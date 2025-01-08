# HotelManagementSystem

This is a C++ Project that implements a simple Hotel Management System. It allows users to manage room bookings, customer records, and room allocations for a hotel.

## Features

- Room Booking: Book rooms for customers with essential details.
- Customer Records: View details of customers based on their room numbers.
- Room Allocation List: Display all rooms that are currently allocated.
- Edit Records: Modify or delete customer details.
- Login Authentication: Secure login for the administrator.

## Project Structure

hotel-management-system/
├── src/
│   ├── main.cpp             // Main entry point of the application
│   ├── hotel.cpp            // Implementation of Hotel class methods
│   ├── utility.cpp          // Utility functions
│   └── authentication.cpp   // Authentication logic
├── include/
│   ├── hotel.h              // Hotel class definition
│   ├── utility.h            // Utility function declarations
│   └── authentication.h     // Authentication function declarations
├── data/
│   └── Record.dat           // Placeholder for data file
├── Makefile                 // Build automation
├── README.md                // Project documentation
└── LICENSE                  // License file (optional)

## Requirements

Software:
- GCC or any C++ compiler
- Make (for build automation)
- 
Libraries:
- Standard C++ libraries: <iostream>, <fstream>, <cstring>, etc.

## Installation and Usage

1. Clone the repository:

  ```bash
  git clone https://github.com/your-username/hotel-management-system.git
  cd hotel-management-system
  ```

2. Compile the project

  ```bash
make
  ```

3. Run the executable:

  ```bash
./hotel_management
  ```

4. Follow the menu instructions to use the system.

## How It Works

Menu Options:
1. Book A Room:

- Enter customer details like name, address, phone number, and days of stay.
- A room is booked, and fare is calculated based on the number of days.

2. View Customer Record:

- Enter the room number to fetch and display customer details.

3. View Rooms Allotted:

- Lists all rooms currently booked along with customer details.

4. Edit Record:

- Modify or delete an existing customer record by room number.

5. Exit:

- Close the application.

## License
This repository is licensed under the [MIT License](LICENSE). Feel free to use and modify the code as needed for your projects.

## Author
Benjamin Caron - https://github.com/bcaron518

## Contributing
If you'd like to contribute to this repository or improve the code examples, please feel free to open an issue or submit a pull request. Your contributions are welcome.
