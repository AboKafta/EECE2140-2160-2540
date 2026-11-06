# EECE Coursework

This repository contains my coursework for **EECE 2140** and **EECE 2540**, organized by course and week.

## Repository Structure

```
EECE2140-1/
├── EECE2140/
│   ├── Week1/
│   ├── Week2/
│   │   └── Classwork/
│   ├── Week3/
│   │   └── Classwork/
│   ├── Week4/
│   │   └── Mini_Project1/
│   └── Week5/
├── EECE2540/
├── EECE2160/
├── .gitignore
└── README.md
```

## Getting Started

### Clone the repository

```bash
git clone https://github.com/AboKafta/EECE2140-1.git
cd EECE2140-1
```

### Run a program

Navigate to the course and week folder, then run the file:

```bash
cd EECE2140/Week1
python filename.py
```

> Requires Python 3. Check your version with `python --version`.

## Git Workflow

### One-time setup

Only needed the first time you use Git on a computer:

```bash
git config --global user.name "Your Name"
git config --global user.email "your-email@example.com"
cd ~/Documents
git clone https://github.com/AboKafta/EECE2140-1.git
```

### Every time you add or change files

```bash
# 1. Go to the repo folder
cd ~/Documents/EECE2140-1

# 2. Get the latest version from GitHub first
git pull

# 3. Check what's new or changed
git status

# 4. Stage your changes
git add .                              # stage everything
# or
git add EECE2140/Week6/filename.py     # stage one specific file

# 5. Commit with a short message describing what you did
git commit -m "Add Week 6 classwork"

# 6. Upload to GitHub
git push
```

### Adding a new course folder

Git doesn't track empty folders, so add a placeholder file:

```bash
mkdir EECE3000
touch EECE3000/.gitkeep
git add EECE3000
git commit -m "Add EECE3000 folder"
git push
```

Delete the `.gitkeep` once the folder has real files in it.

### Useful extras

```bash
git log --oneline             # view commit history
git restore filename.py       # undo unsaved changes to a file (before git add)
git restore --staged file.py  # unstage a file (after git add, before commit)
```

> **Tip:** On Windows, paste into Git Bash with **Shift+Insert** or right-click → **Paste**.

## Author

**AboKafta**

## Notes

This repository is for educational purposes. If you are a current student in these courses, please follow your course's academic integrity policy.
