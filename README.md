# Arch Linux Post-Install Configuration

## What's This?
This is my Arch Linux post-install configuration, which includes all the programs I need.

## Script Guide

1. **alacritty.sh**: Installs Alacritty and moves `alacritty.toml` (its configuration file) to the created Alacritty directory.
2. **aur.sh**: Includes the AUR (Arch User Repository) in your Arch Linux system using the `yay` package manager.
3. **packages.sh**: Installs a list of Arch Linux packages from the extra repository. It contains:
   - `fish`: My favorite shell.
   - `chromium`: Web browser.
   - `clang`: Compiler for C and C++.
   - `git`: Version control system.
   - `alacritty`: "Flat" terminal.
   - `fastfetch`: Quick fetch program (otherwise, how can I show others that I'm an Arch user?).
   - `discord`: Like Skype, but better.
   - `lolcat`: Improved `cat` command showing file content in rainbow colors.
   - `cmatrix`: Hacker matrix written in C.
   - `asciiquarium`: Aquarium in your terminal.
   - `mc`: Mouse-less terminal-based file explorer.
   - `helix`: Console text editor (somewhat similar to Vim/Neovim).
   - `micro`: Console text editor, better than classical Nano.
   - `gcc`: Compiler for C/C++/D from the GNU project.
4. **shell.sh**: Installs `fish` as the default command shell (instead of `bash`).
5. **zapret.sh**: Script by Snowy-Fluffy that quickly installs `zapret`. It is used to unblock YouTube, Discord, Rutracker, etc., in Russia. I use the 22nd strategy, by the way.
6. **general.sh**: Includes all the scripts from this list.
7. **bin/sudo-no-passwd**: Removes the need to enter the root password for the specified user. Written in C.

If you wanna contact me, write to email `kirillikaaxx@gmail.com` 
