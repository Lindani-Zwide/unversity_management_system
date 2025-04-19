Documentation
Overview
The University Management System is a cross-platform application built using Qt6 and C++20. It provides a secure and user-friendly interface for managing student enrollment, updates, and removal. The application uses an XML data file to store student records and user credentials.

Features
- User registration and login functionality with password hashing and validation
- Student enrollment, update, and removal functionality
- Search and display student records
- Delete all student records
- XML data file for storing student records and user credentials
- Cross-platform compatibility (Windows, macOS, Linux)

Technical Details
- Built using Qt6 and C++20
- Uses QCryptographicHash for password hashing and security
- Utilizes C++ regex library for input validation
- Employs QSharedPointers for dynamic memory management
- XML data file for storing student records and user credentials
- Deployed using windeployqt (and equivalent tools on macOS and Linux) to create a standalone executable file

Deployment
The application is deployed as a standalone executable file that can be run on any machine (Windows, macOS, Linux) without requiring Qt or a C++ compiler to be installed.

Security Measures
- Passwords are hashed using SHA-256 algorithm and stored securely in the XML data file
- Input validation and error handling to prevent potential security vulnerabilities

Future Development
- Additional features and functionality are planned for future releases

README
University Management System

A cross-platform application built using Qt6 and C++20 for managing student enrollment, updates, and removal.

Features
- Secure user registration and login functionality
- Student enrollment, update, and removal functionality
- Search and display student records
- Delete all student records
- XML data file for storing student records and user credentials
- Standalone executable file that can be run on any machine (Windows, macOS, Linux) without requiring Qt or a C++ compiler to be installed

Deployment
The application is deployed using windeployqt (and equivalent tools on macOS and Linux), which bundles the necessary Qt libraries with the executable file.

Usage
1. Extract the application folder
2. Run the executable file:
    - Windows: university_management_system.exe
    - macOS: University Management System.app (or university_management_system if not bundled as an .app)
    - Linux: university_management_system (may require making the file executable with chmod +x university_management_system)

Contributing
Contributions are welcome! Please submit a pull request with your changes.

License
MIT License 
