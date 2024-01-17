# Registration Form  C++/CLI Windows Forms Application

## Overview

This is a simple C++/CLI Windows Forms application that allows users to enter their name, email, and mobile number. The application validates the input and submits the data to a SQL Server database.

## Table of Contents

- [Prerequisites](#prerequisites)
- [Installation](#installation)
- [Usage](#usage)
- [Code Explanation](#code-explanation)
- [Troubleshooting](#troubleshooting)
- [Contributing](#contributing)
- [License](#license)

## Prerequisites

- Visual Studio (2017 or later) with C++/CLI support.
- SQL Server installed and running.
- Basic knowledge of C++/CLI and Windows Forms.

## Installation

1. Clone the repository:

   ```bash
   git clone https://github.com/Sabavat-Jayanth-Naik/RegistrationForm/tree/master
   ```

2. Open the project in Visual Studio.

3. Build the project.

## Usage

1. Run the application.
2. Enter your full name, email, and mobile number.
3. Click the "SUBMIT" button to save the data to the SQL Server database.
4. Click the "RESET" button to clear the input fields.

## Code Explanation

### MainForm.h

- The `MainForm` class is the main Windows Form class.
- It has textboxes for full name (`textname`), email (`textEmail`), and mobile number (`textMobile`).
- There are two buttons: "SUBMIT" (`button2`) and "RESET" (`button1`).

### MainForm.cpp

- The `button1_Click` method resets the input fields.
- The `button2_Click` method validates the input and submits the data to the SQL Server database.

### Troubleshooting

- If you encounter a "Keyword not supported: 'trust server certificate'" error, update the connection string in `button2_Click` by removing the unsupported keyword.

## Contributing

Contributions are welcome! Please fork the repository and create a pull request with your changes.

## INTERFACE 
DATABASE DESIGN 
<img width="960" alt="image" src="https://github.com/Sabavat-Jayanth-Naik/RegistrationForm/assets/130920035/eb1be58f-548f-4a7d-824e-17c47969e20d">
## USERINTERFACE
<img width="472" alt="image" src="https://github.com/Sabavat-Jayanth-Naik/RegistrationForm/assets/130920035/65465ea6-1495-4e79-9847-15a53c781eeb">

## REGISTERING
<img width="475" alt="image" src="https://github.com/Sabavat-Jayanth-Naik/RegistrationForm/assets/130920035/cdfb3927-7429-42e2-88bd-4484bd3806c8">
<img width="517" alt="image" src="https://github.com/Sabavat-Jayanth-Naik/RegistrationForm/assets/130920035/c7a9e782-cd60-439a-a7f3-6ce9fec38490">

## searching the user by his name
<img width="544" alt="image" src="https://github.com/Sabavat-Jayanth-Naik/RegistrationForm/assets/130920035/1039771d-9ef3-455e-8ff5-5cf25a9a3213">

## If no user exist it will display message like this..
<img width="479" alt="image" src="https://github.com/Sabavat-Jayanth-Naik/RegistrationForm/assets/130920035/437d0ca8-c780-437c-ab6e-61787a0c6c67">






## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
```

