
# Ubuntu系统下安装VSCode

参考：[Visual Studio Code on Linux](https://code.visualstudio.com/docs/setup/linux)

---

## 安装

有多种安装方式，使用最简单的一种

1. 下载安装包：[Download Visual Studio Code](https://code.visualstudio.com/Download)

2. 安装

安装方式一：

    sudo apt install ./<file>.deb

安装方式二：

    # If you're on an older Linux distribution, you will need to run this instead:
    sudo dpkg -i <file>.deb
    sudo apt-get install -f # Install dependencies

---

## 更新

参考：[How to update VS Code on Ubuntu?](https://askubuntu.com/questions/833448/how-to-update-vs-code-on-ubuntu)

如果按照上述方式安装，那么系统包管理器会自动更新VSCode；也可以再次下载deb包，然后按照上述方式安装即可。

---

## 设置默认编辑器

设置VSCode为默认编辑器

    sudo update-alternatives --set editor /usr/bin/code

结果

    zhujian@zhujian-virtual-machine:~$ sudo update-alternatives --set editor /usr/bin/code
    update-alternatives: using /usr/bin/code to provide /usr/bin/editor (editor) in manual mode
