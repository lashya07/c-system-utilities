\# C-Based System Utility Development



\## Overview

This project contains a set of \*\*system-level utilities developed in C\*\*, focusing on \*\*file handling\*\*, \*\*dynamic memory management\*\*, and \*\*performance-oriented programming\*\*.  

The project demonstrates hands-on understanding of low-level concepts relevant to \*\*operating systems and network software development\*\*.



---



\## Project Structure

```text

c\_system\_utilities/

│── file\_analyzer.c        # Source code for file analysis utility

│── file\_analyzer.exe      # Compiled executable

│── memory\_monitor.c       # Source code for memory monitoring utility

│── memory\_monitor.exe     # Compiled executable

│── file\_copy.c            # Source code for file copy utility

│── file\_copy.exe          # Compiled executable

│── sample.txt             # Sample input file

│── sample\_copy.txt        # Copied output file

│── README.md              # Project documentation

## Commands Used

This section documents the commands used during the development, compilation,
execution, and version control of the C-based system utility project.
All commands were executed using **Windows PowerShell**.

---


# ALL COMMANDS USED (POWERSHELL)


# --------- NAVIGATION ----------
cd                                              # Move to project directory
dir                                             # List files in directory
cls                                             # Clear PowerShell screen

# --------- GCC VERIFICATION ----------
gcc --version                                   # Check GCC installation

# --------- FILE ANALYZER ----------
gcc file_analyzer.c -o file_analyzer            # Compile file analyzer
notepad sample.txt                               # Create sample input file
.\file_analyzer sample.txt                      # Run file analyzer on text file

# --------- MEMORY MONITOR ----------
gcc memory_monitor.c -o memory_monitor           # Compile memory monitor
.\memory_monitor                                # Run memory monitor utility

# --------- FILE COPY UTILITY ----------
gcc file_copy.c -o file_copy                    # Compile file copy utility
.\file_copy sample.txt sample_copy.txt          # Copy source file to destination

# --------- DOCUMENTATION ----------
notepad README.md                               # Create/Edit README file

# --------- GIT SETUP ----------
git --version                                   # Check Git installation
git init                                        # Initialize Git repository
git status                                      # Check repository status

# --------- GIT IGNORE ----------
notepad .gitignore                              # Create .gitignore file
# Content inside .gitignore:
# *.exe

# --------- GIT VERSION CONTROL ----------
git add .                                       # Add all files to staging
git commit -m "Initial commit: C-based system utilities"  # Commit files
git branch -M main                              # Rename branch to main

# --------- GITHUB CONNECTION ----------
git remote add origin https://github.com/<username>/c-system-utilities.git
                                                # Add GitHub remote repository

git push -u origin main                         # Push project to GitHub

# --------- OPTIONAL ----------
git log                                        # View commit history

# --------- IMPORTANT RULE ----------
# Use .\program_name to run executables in PowerShell

