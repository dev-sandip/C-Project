# Console Voting System

![GitHub last commit](https://img.shields.io/github/last-commit/dev-sandip/C-Project)![GitHub](https://img.shields.io/github/license/dev-sandip/C-Project)

The **Console Voting System** is a simple command-line application that allows users to manage candidate details, cast votes, and display voting results. This system is developed in C and uses file handling to store candidate information and voter details.

## Introduction

This project is a console-based voting system implemented in C. It provides a simple interface for users to interact with and cast their votes for one of the pre-defined candidates. The voting results are stored persistently using file handling to ensure data integrity.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Getting Started](#getting-started)
- [License](#license)

## Features

1. **Enter Candidate Details:** Users can enter candidate information, including candidate ID and name, and save it in the "candidates.txt" file.

2. **Display Candidates Details:** Users can view the details of all candidates entered in the system, including their ID, votes received, and name.

3. **Cast a Vote:** Voters can cast their votes by entering their voter ID, name, and the candidate ID they want to vote for. The system updates the vote count for the selected candidate and stores the voter information in the "voterslist.txt" file.

4. **Display Results:** Users can view the votes received by each candidate along with the candidate who received the highest votes.

## Usage

Upon running the application, you will be presented with a menu. Choose the appropriate option by entering the corresponding number:

1. **Enter Candidate Details:** Select option 1 to enter candidate details. You will be prompted to input the number of candidates you want to enter. For each candidate, enter their ID (between 1 and 100) and name (up to 49 characters).

2. **Display Candidates Details:** Select option 2 to view the details of all candidates entered in the system. The candidate ID, votes received, and name will be displayed.

3. **Cast a Vote:** Select option 3 to cast a vote. Enter your voter ID, name (up to 49 characters), and the candidate ID you want to vote for. The system will update the vote count for the selected candidate and store your voter information in the "voterslist.txt" file.

4. **Display Results:** Select option 4 to view the votes received by each candidate along with the candidate who received the highest votes. The candidate with the highest votes will be displayed separately.

5. **Exit the Voting System:** Select option 5 to exit the voting system. The program will terminate, and you will see the message "Exiting the Voting System. Thank you!"

## Note

This console voting system is a basic implementation and may require further enhancements and error handling for real-world use. In the current version, the "Display Results" feature is not yet implemented and will display a message indicating that the functionality is not available. You can extend the code to implement this feature or add additional functionalities as per your requirements.

Feel free to explore, modify, and contribute to this repository to improve the voting system!

## Team

![Sandip Sapkota](https://github.com/git-sandip)

![Raghav Upadhyay](https://github.com/Meraghav4)

![Subhakar Pant](https://github.com/its-subhakar9)

![Sulav Poudel](https://github.com/Sulav18)

## License

[MIT](https://choosealicense.com/licenses/mit/)

Feel free to contribute to this project by submitting pull requests or opening issues. If you have any suggestions or improvements, please feel free to share them.

For any questions or inquiries, please contact [079bct076@ioepc.edu.np](mailto:079bct076@ioepc.edu.np).

## Suggestion By Teachers After Project Submission!

- Presentation Was Gone Little F as well

1. Candidate details should be hardcoded or admin system should be run or build separately!
2. Details of Candidates should be displayed automatically immediately after program execution!
3. User(Voter) should be able to directly enter their voter id and name and able to vote!
4. There should be exit button secretly as only admin or administrator only stop or run the program as well as there is no need to display voting results directly in voting machine!

` Note: You must analyze real life use or test cases before involving on a certain topic/project`

## Thank you !
