# Collaboration Project

This project will give you experience with creating and resolving Issues using GitHub.

Step 1: Fork the forking project already.
  On Github.com, click the Fork button to add a copy of the repository to your account.
  
Step 2: Clone the Project
  Clone the project to a local directory using Git Bash.
  
  git clone <repo url> <project folder>
  
Step 3: Add the Upstream Remote
  Move into the project folder and add the upstream.  Adding the upstream remote helps you keep the local project up-to-date with the original repository.
  
  cd <project folder>
  git remote add upstream <repo url>
  
  Update the local files using:
  
  git fetch upstream
  git merge upstream/main
  
Step 4: Check out Topic Branch
  git checkout -b <topic>
  
Step 5: Commit
  Make changes to the project and commit changes.
  
  git add <file>   or   git add . (to add all files)
  git commit -am "Update code; fixes #24"   (automatically closes issue #24)
  
Step 6: Push
  Push topic branch to the forked project.
  
  git push origin <topic>
  
Step 7: Create Pull Request
  Go to your forked repo on Github.  You should see a button "Compare & Pull Request".  Click the button to create the pull request.
