# install the dependencies
```bash
sudo apt install build-essential zsh cmake vim git python3.10-dev
```

# configure vim
```bash
ln -sf /path/to/.vimrc ~/.vimrc
ln -sf /path/to/template/ ~/.vim/template/
```

# install YoucompleteMe
```bash
# under the YoucompleteMe directory
/usr/bin/python3 /home/ql/.vim/bundle/YouCompleteMe/third_party/ycmd/build.py --verbose
```

# misc
## install oh-my-zsh
## disable the annoying bell
```bash
#/etc/inputrc
set bell-style visible
```
