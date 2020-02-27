# tools-platform-guide

[![Documentation Status](https://readthedocs.org/projects/tools-platform-guide/badge/?version=latest)](https://tools-platform-guide.readthedocs.io/zh_CN/latest/?badge=latest) [![standard-readme compliant](https://img.shields.io/badge/standard--readme-OK-green.svg?style=flat-square)](https://github.com/RichardLitt/standard-readme) [![Conventional Commits](https://img.shields.io/badge/Conventional%20Commits-1.0.0-yellow.svg)](https://conventionalcommits.org) [![Commitizen friendly](https://img.shields.io/badge/commitizen-friendly-brightgreen.svg)](http://commitizen.github.io/cz-cli/)

> 工具和平台配置

小结开发工具以及开发平台的配置和使用

* 开发工具
    - [VSCode](https://vscode-guide.readthedocs.io/zh_CN/latest/vscode/)
    - [Jupyter](https://vscode-guide.readthedocs.io/zh_CN/latest/jupyter/[conda]JupyterLab%E5%AE%89%E8%A3%85/)
    - [CLion](https://vscode-guide.readthedocs.io/zh_CN/latest/clion/安装/)
    - [Android Studio](https://vscode-guide.readthedocs.io/zh_CN/latest/android/android-studio/[Ubuntu]Android%20Studio%E5%AE%89%E8%A3%85/)
* 开发平台
    - [NodeJS](https://vscode-guide.readthedocs.io/zh_CN/latest/node/nodeJS%E5%AE%89%E8%A3%85/)
    - [Anaconda](https://vscode-guide.readthedocs.io/zh_CN/latest/anaconda/%E7%8E%AF%E5%A2%83%E6%9F%A5%E8%AF%A2%EF%BC%8C%E5%AE%89%E8%A3%85%EF%BC%8C%E5%8D%B8%E8%BD%BD%EF%BC%8C%E5%85%8B%E9%9A%86/)
    - [Gradle](https://vscode-guide.readthedocs.io/zh_CN/latest/android/gradle/[Ubuntu]gradle%E5%90%8C%E6%AD%A5%E5%A4%B1%E8%B4%A5/)
    - [NDK](https://vscode-guide.readthedocs.io/zh_CN/latest/android/ndk/NDK%E5%BC%80%E5%8F%91%E6%A6%82%E8%BF%B0/)

仓库中还包含了`VSCode`的代码实例和代码片段（`C++/Python`，位于`vscode`目录下）

## 内容列表

- [背景](#背景)
- [安装](#安装)
- [用法](#用法)
- [主要维护人员](#主要维护人员)
- [参与贡献方式](#参与贡献方式)
- [许可证](#许可证)

## 背景

之前在不同平台（`Windows/Ubuntu`）上尝试过各种不同的编辑工具，比如`Sublime、Atom、gedit、Markdown Pad`，都有各自的缺陷：不跨平台，编辑繁琐，功能过少等等

[VSCode](https://code.visualstudio.com/)确实极大的提高了文档编辑体验，不过要自定义编辑环境、配置不同语言集成还需要好好学习一番

*本仓库最开始用于管理`VSCode`文档和代码，之后逐渐扩充到多个工具和开发平台的配置*

## 安装

编译文档需要预先安装以下工具：

```
$ pip install mkdocs
```

## 用法

文档有两种使用方式

1. 在线浏览文档：[Tools&Platform Guide](https://vscode-guide.readthedocs.io/zh_CN/latest/?badge=latest)

2. 本地浏览文档，实现如下：

    ```
    $ git clone https://github.com/zjZSTU/tools-platform-guide.git
    $ cd tools-platform-guide
    $ mkdocs serve
    ```
    启动本地服务器后即可登录浏览器`localhost:8000`

## 主要维护人员

* zhujian - *Initial work* - [zjZSTU](https://github.com/zjZSTU)

## 参与贡献方式

欢迎任何人的参与！打开[issue](https://github.com/zjZSTU/vscode-guide/issues)或提交合并请求。

注意:

* `GIT`提交，请遵守[Conventional Commits](https://www.conventionalcommits.org/en/v1.0.0-beta.4/)规范
* 语义版本化，请遵守[Semantic Versioning 2.0.0](https://semver.org)规范
* `README`编写，请遵守[standard-readme](https://github.com/RichardLitt/standard-readme)规范

## 许可证

[Apache License 2.0](LICENSE) © 2019 zjZSTU
