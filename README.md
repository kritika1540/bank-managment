Features:

Add Employee – Create a new employee record with details such as name, email, position, and salary.

View Employees – Display a list of all employees stored in the database.

Update Employee – Edit existing employee details.

Delete Employee – Remove employee records.

Search/Filter – Quickly find employees by specific fields.

Tech Stack:

Backend: Node.js, Express.js

Database:  MySQL 

Frontend: HTML, CSS, JavaScript, Bootstrap

 PROJECT STRUCTURE
php
Copy
Edit
├── models/         # Database models  
├── routes/         # Application routes  
├── views/          # EJS templates (if used)  
├── public/         # Static files (CSS, JS)  
├── app.js          # Main app entry point  
└── package.json    # Project metadata and dependencies  






1. Login Page
The login page allows registered users to securely access the Employee Management System. Users enter their registered email/username and password, which is validated against the database. Passwords are stored in hashed format for security. If credentials are correct, the user is redirected to the Employee Dashboard; otherwise, an error message is shown.

<img width="772" height="429" alt="image" src="https://github.com/user-attachments/assets/42fa3315-3572-43d5-b704-492a1363210d" />


3. Registration Page
The registration page enables new users to create an account. It collects essential details such as name, email, username, and password. Upon submission, the system hashes the password and stores the user information in the database. It also includes validation to ensure unique email/username and prevent weak passwords.

4. Employee Dashboard / List Page
Once logged in, the user is redirected to the Employee Dashboard, which displays a table of all employees stored in the database. Each record contains employee details such as name, position, department, and contact information. The page also provides options to add, edit, or delete employee records, enabling quick and efficient data management.

<img width="904" height="221" alt="image" src="https://github.com/user-attachments/assets/e4746be2-ff21-4598-b327-bc0bc5658dd0" />

5. Add Employee Page
The add employee page contains a form where users can enter details for a new employee, such as name, designation, department, salary, and contact number. On submission, the data is validated and inserted into the database, and the user is redirected back to the dashboard with a confirmation message.


7. Edit Employee Page
This page allows users to update an existing employee’s details. When the user selects an employee from the dashboard to edit, the page is pre-filled with that employee’s current information. After making the necessary changes, the user submits the form, and the updated data replaces the old record in the database.
<img width="1337" height="609" alt="image" src="https://github.com/user-attachments/assets/a25b7fc8-71cc-4229-9469-66d4784f04a3" />

