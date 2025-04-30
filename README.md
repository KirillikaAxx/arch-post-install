###What's that?
It is my arch linux post-install config with all progranms I need.

###Script guide:
```
1. alacritty.sh -- installs alacritty and move alacritty.toml(its config file) to created by it alacritty's directory
2. aur.sh -- includes AUR to your arch linux system (using yay package manager)
3. packages.sh -- arch linux packages list from extra repository. It contains:
	- fish -> my favorite shell
	- chromium -> web-browser
	- clang -> compiler for C and C++
	- git -> version control system
	- alacritty -> "flat" terminal
	- fastfetch -> quick fetch program (otherwise, how can I show others that I'm an Arch user?)
	- discord -> like Skype, but better
	- lolcat -> improved cat command showing file's content in rainbow color
	- cmatrix -> hacker matrix written in C
	- asciiquarium -> aquarium in your term
	- mc -> mousless terminal based explorer
	- doas -> sudo analogue
	- helix -> console text editor (somewhat similar to Vim/Neovim)
	- micro -> console text editor, better than classical Nano
	- gcc -> compiler for C/C++/D from GNU project
4. shell.sh -- installs fish like default command shell (instead of bash)
5. zapret.sh -- script by Snowy-Fluffy that installs zapret quickly. It uses to unclock YouTube, Discord, Rutracker (etc.) in Russia. I use 22'nd strategy btw
6. general.sh -- includes ALL THE SCRIPTS from this list 
```

All the ```.sh``` files are executable, you don't need to ```chmod +x ... ``` these
