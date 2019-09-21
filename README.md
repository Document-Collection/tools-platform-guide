# vscode-guide

[![Documentation Status](https://readthedocs.org/projects/vscode-guide/badge/?version=latest)](https://vscode-guide.readthedocs.io/zh_CN/latest/?badge=latest) [![standard-readme compliant](https://img.shields.io/badge/standard--readme-OK-green.svg?style=flat-square)](https://github.com/RichardLitt/standard-readme) [![Conventional Commits](https://img.shields.io/badge/Conventional%20Commits-1.0.0-yellow.svg)](https://conventionalcommits.org) [![Commitizen friendly](https://img.shields.io/badge/commitizen-friendly-brightgreen.svg)](http://commitizen.github.io/cz-cli/)

> VSCode使用

仓库中包含以下内容：

* 代码实例
* 代码片段
* 文档

文档包含以下内容：

1. 系统相关
2. 语言设置
3. 插件设置

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

# 安装

编译文档需要预先安装以下工具：

```
$ pip install -U Sphinx
$ sudo apt-get install make
```

## 用法

`C++`配置实例参考[Code Samples](https://github.com/zjZSTU/vscode-guide/tree/master/Code%20Samples)

`Python`配置实例参考[python-samples/first](https://github.com/zjZSTU/vscode-guide/tree/master/python-samples/first)

代码片段实例参考[snippets](https://github.com/zjZSTU/vscode-guide/tree/master/snippets)

文档有两种使用方式

1. 在线浏览文档：[VSCode使用指南](https://vscode-guide.readthedocs.io/zh_CN/latest/?badge=latest)

2. 本地生成文档，实现如下：

    ```
    $ git clone https://github.com/zjZSTU/vscode-guide.git
    $ cd vscode-guide/docs
    $ make html
    ```
    编译完成后进入`docs/build/html`目录，打开`index.html`文件

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
