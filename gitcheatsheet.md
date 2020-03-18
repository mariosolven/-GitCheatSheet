# GitHub Commands.

## GitHub Basics.

### Getting a repository

- "git init" : creates an empty Git repository in format .git .
- "git add" : add a file content to the repository index.
- "git commit" : this help us to record changes in the repository.
- "git clone" : creates a copy of an existing Git repository.

### Recording changes to the repository

- "git status" : displays paths to mark which files are in which state.
- "git status -s" or " git status --short" : simplified way to see the output from the command "git status".
- "gitignore" : tells the system to ignore certain groups of untracked files depending their endings.
- "git diff" : it let us to check in detail the changes made on a file.
- "git diff --staged" : compares your staged changes to your last commit.
- "git difftool" : to see diffs in different sowftwares.
- "git difftool --tool-help" : let us to see what software is avaliable in our system to see that diffs.
- "git commit -m" : let you to type your own commit message inline.
- "git commit -a" : let you to skip the stagging area, stagging automatically every tracked file in background.
- "git rm" : remove a Git file.
- "git rm --cached" : to keep the file on your hard drive but not have Git track it anymore.
- "git rm log/\*.log" : removes all files in the log directory that have an .log extension.
- "git rm \* ~" : removes all files whose names end with a  ~ .
- "git mv x y" : rename a Git file.

### Viewing the commit history

- "git log" : let us see the existing commit history.
- "git log -p" or "git log --patch" : shows the differences introduced in each commit.
- "git log - <n>" : limit the number of log entries, you can use any number.
- "git log --stat" : to see abreviated stats of each commit entry.
- "git log --since" : display the list of commits made in certain time that you choose.

### Undoing things

- "git commit --amend" : it takes your staging area and uses it for the commit.
- "git reset HEAD <file> : it ustage the file.
- "git checkout -- <file>" : discard changes you have made in a file.

### Working with remotes

- "git remote" : to see which remote servers you have configured.
- "git remote -v" : shows the URLs of your Git servers.
- "git fetch <remote>" :  to get data from your remote proyects.
- "git fetch origin" : fetches any new work that has been pushed to a server sice it has been cloned.
- "git pull" : “fetches data from the original cloned and merge it into the actual code.
- "git push <remote> <branch>" : to upload or share your proyect into GitHub.
- "git push origin master" : to push any commits you’ve done back up to the server.
- "git remote show <remote>" : it shows more info about a particular remote.
- "git remote rename" : changes the remote's shortname.
- "git remote remove" or "git remote rm" : remove a particular remote.

### Tagging

- "git tag" : list tags in alphabetical order.
- "git tag -l" or "git tag --list" : match tag names.
- "git tag -a" : creates a git annotated tag, those tags contain the tagger name, email, and date;
		 also  have a tagging message.
- "git tag <tag_name> : this is basically the commit checksum stored in a file — no other information is kept. 
- "git tag -a v1.2 <9fceb02>" : to tag later a commit by  specifying part of the commit checksum at the end of the command.
- "git push origin <tag_name>" : explicitly push tags to a shared server after being created.
- "git push --tags" : push a lot of tags at once to the remote server.
- "git tag -d <tag_name>" : delete a tag of your local repository.
- "git checkout" : to view versions of files a tag is pointing to.
- "git config" : help us to put an alias for each Git commands and to create new ones.

## Git Branching.

### Branches in a Nutshell

- "git branch <testing>" : creates a new branch.
- "git log --one line --decorate" : show us where the branch pointers are pointing.
- "git checkout <testing>" : switch an existing branch.
- "git checkout master" : switch back to the master branch.
- "git log --oneline --decorate --graph --all" : it will print out the history of your commits, where your
						 branch pointers are and how your history has diverged.
### Basic Branching and Merging

- "git checkout -b <iss53>" : creates a new branch and switch it at the same time.
- "git merge <hotfix>" : merges the branch back into your master branch to deploy to production.
- "git branch -d <hotfix>" : deletes the hotfix branch.
- "git mergetool" : graphical tool to solve problems.

### Branch Management

- "git branch" : List, create, or delete branches.
- "git branch -v" : to see the last commit on each branch.
- "git branch --merged" : to see which branchs are already merged.
- "git branch --no-merged" : to see which branchs haven't yet merged.

### Remote Branches

- "git branch -vv" : to see what tracking branches you have set up.
- "git fetch --all; git branch -vv" : If you want totally up to date ahead and behind numbers, you’ll need to 
				      fetch from all your remotes right before running this. 
- "git push origin --delete <serverflix>" : to delete a remote branch/pointer from the server. 

### Rebasing

- "git rebase master" : Reapply commits on top of another base tip.
- "git rebase --onto master" : take changes on client that aren't on server and replay them on your master branch.
- "git rebase master server" : rebase the server branch onto the master branch. 


# -GitCheatSheet
