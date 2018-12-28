# VSCode快捷键设置

参考：[Key Bindings for Visual Studio Code](https://code.visualstudio.com/docs/getstarted/keybindings)

---

## 概述

`VSCode`默认使用`Visual Studio`的[快捷键模板](https://github.com/zjZSTU/vscode-guide/blob/master/docs/source/ref/keyboard-shortcuts-windows.pdf)，可以根据需要自定义快捷键，或者选择合适
的快捷键模板

---

## 快捷键模板

参考：[Keymap extensions](https://code.visualstudio.com/docs/getstarted/keybindings#_keymap-extensions)

点击菜单栏`File > Preferences > Keymap Extensions`，将会显示多种编辑器的快捷键模
板，包括`Vim，IntelliJ IDEA`等等（需要在线安装）

![](./imgs/keymaps.png)

---

## 自定义快捷键

参考：[Keyboard Shortcuts editor](https://code.visualstudio.com/docs/getstarted/keybindings#_keyboard-shortcuts-editor)

点击菜单栏`File > Preferences > Keyboard Shortcuts`，将会显示当前实现的快捷键方式

![](./imgs/shortcuts.png)

可以搜索相应的功能，然后在双击该条目，输入你想要实现的快捷键方式，就可以修改默认的快捷键

也可以通过`keybindings.json`文件修改

    $HOME/.config/Code/User/keybindings.json

![](./imgs/keybindings.png)

---

## 常用快捷键

参考：[Navigating Code](https://code.visualstudio.com/docs/languages/cpp#_navigating-code)

打开命令窗口：`Ctrl+Shift+P/Ctrl+P`

新建文档：`Ctrl+N`

新建窗口：`Ctrl+Shift+N`

格式文档：`Ctrl+Shift+L`

运行代码：`Ctrl+Alt+N`

搜索符号：`Ctrl+Shift+O` - markdown中搜索标题，程序中搜索函数和变量声明，在命令窗口中以`@`开头

查找工作空间：`Ctrl+T` - 全局搜索，类似于搜索符号，在命令窗口中以`#`开头

查找当前文件：`Ctrl+F`

查找上/下一个：`Shift+F3/F3`

快速打开：`Ctrl+P`

打开最近文档：`Ctrl+R`

剪切：`Ctrl+X`

跳转定义：`F12`