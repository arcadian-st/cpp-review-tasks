# C++复习任务

*[English](https://github.com/arcadian-st/cpp-review-tasks/blob/main/README.md)* | *简体中文*

20个用于复习C++基本概念的编程练习任务。

请注意，这是为之前学习并使用过C++的开发者设计的，
目的是在休息一段时间后快速重新学习C++。
复习任务并没有覆盖C++的全部学习要点，
如果你是C++的新手，在阅读本项目之前最好先学习C++的课程或教程。

## 大纲

1. [开始](#开始)

   1.1 [环境](#环境)
   
   1.2 [项目结构](#项目结构)
   
   1.3 [构建](#构建)

2. [任务描述](#任务描述)

   2.1 [任务1：基本概念](#任务1基本概念)
   
   2.2 [任务2：函数](#任务2函数)
   
   2.3 [任务3：面向对象编程（OOP）](#任务3面向对象编程oop)
   
   2.4 [任务4：内存管理](#任务4内存管理)
   
   2.5 [任务5：标准模板库（STL）](#任务5标准模板库stl)
   
   2.6 [任务6：异常处理](#任务6异常处理)
   
   2.7 [任务7：文件输入/输出](#任务7文件输入输出)
   
   2.8 [任务8：模板和泛型编程](#任务8模板和泛型编程)
   
   2.9 [任务9：并发](#任务9并发)
   
   2.10 [任务10：C++11/14/17/20特性](#任务10c11141720特性)
   
   2.11 [任务11：构建系统](#任务11构建系统)

   2.12 [任务12：调试和性能分析](#任务12调试和性能分析)
   
   2.13 [任务13：最佳实践](#任务13最佳实践)
   
   2.14 [任务14：最新趋势和更新](#任务14最新趋势和更新)
   
   2.15 [任务15：项目](#任务15项目)
   
   2.16 [任务16：在线资源](#任务16在线资源)
   
   2.17 [任务17：练习](#任务17练习)
   
   2.18 [任务18：版本控制](#任务18版本控制)
   
   2.19 [任务19：测试](#任务19测试)
   
   2.20 [任务20：网络编程（可选）](#任务20网络编程可选)

## 开始

### 环境

  * Microsoft Visual C++ Build Tools v19.28.29915
 
  * CMake v3.27

### 项目结构

  可执行文件将从以下文件构建

  ```
  src/main.cpp
  ```

  任务示例放置在以下目录中

  ```
  src/tasks/
  ```

  修改上面的 main.cpp 文件，插入任务代码，如下所示：

  ```cpp
  #include "./tasks/task1_basic_concepts.cpp"

  int main() {
      return main_basic_concepts();
  }
  ```

  所有任务的执行函数都以'main_'为前缀，可以在每个任务的代码中轻松找到。

### 构建

  除了`CMakeLists.txt`外，所有的CMake文件都没有上传到此项目中。
  你可以用喜欢的方式借助CMake构建和测试项目。

  以下是从项目根目录出发在终端上使用CMake构建项目的示例。

  ```
  mkdir build
  cd build
  cmake ..
  cmake --build .
  cd ..
  ```

  构建项目并返回到根目录后，你可以在终端中测试可执行文件。假设项目在"Debug"类型下构建，执行方法为：

  ```
  ./build/Debug/cpp-review-tasks
  ```

## 任务描述

### 任务1：基本概念

> #### 要点
> 
> * 变量和数据类型
> * 运算符和表达式
> * 控制流（if、else、switch、循环）
>
> #### 任务
>
> * 编写一个程序，接受用户输入的两个数字，并执行基本的算术运算（加法、减法、乘法、除法）。

### 任务2：函数

> #### 要点
>
> * 函数声明和定义
> * 参数和返回类型
> * 函数重载
>
> #### 任务
>
> * 创建一个计算给定数字阶乘的函数。
> * 实现一个检查数字是否为质数的函数。

### 任务3：面向对象编程（OOP）

> #### 要点
>
> * 类和对象
> * 继承
> * 多态
> * 封装
> * 抽象
>
> #### 任务
>
> * 创建一个表示几何形状（例如，圆形、正方形）的类，具有适当的属性和方法。
> * 使用基类和派生类实现继承层次结构。
  
### 任务4：内存管理

> #### 要点
>
> * 指针和引用
> * 动态内存分配（new和delete）
> * 智能指针（unique_ptr、shared_ptr）
>
> #### 任务
>
> * 使用指针编写程序，动态分配和释放数组的内存。
> * 在程序中实现一个简单的智能指针类或使用标准智能指针。

### 任务5：标准模板库（STL）

> #### 要点
>
> * 容器（vector、list、map等）
> * 算法（排序、查找等）
> * 迭代器
>
> #### 任务
>
> * 使用vector存储一组元素并执行各种操作（例如，排序、搜索、迭代）。
> * 使用不同的容器尝试如`std::find`、`std::sort`和`std::transform`等算法。


### 任务6：异常处理

> #### 要点

> * try、catch、throw
> * RAII（资源获取即初始化）
>
> #### 任务
>
> * 编写一个程序，使用try-catch块处理潜在的异常（例如除零异常）。
> * 使用RAII原则实现具有适当资源管理的类。

### 任务7：文件输入/输出

> #### 要点
>
> * 读写文件
>
> #### 任务
>
> * 创建一个程序，从文件中读取数据，执行一些操作，并将结果写回另一个文件。

### 任务8：模板和泛型编程

> #### 要点
>
> * 函数模板
> * 类模板
>
> #### 任务
>
> * 实现一个交换两个变量值的函数模板。
> * 为通用容器（例如，栈或队列）创建一个类模板。

### 任务9：并发

> #### 要点
>
> * 线程
> * 互斥锁
> * 线程安全
>
> #### 任务
>
> * 使用`std::thread`编写一个简单的多线程程序。
> * 使用互斥锁同步对共享数据进行访问。

### 任务10：C++11/14/17/20特性

> #### 要点
>
> * Lambda表达式
> * 智能指针
> * 移动语义
> * 基于范围的for循环
> * C++20基本概念
>
> #### 任务
>
> * 利用Lambda表达式在程序中定义一个简短的函数。
> * 在一个项目中探索移动语义和基于范围的for循环等特性。

### 任务11：构建系统

> #### 要点
>
> * Makefile
> * CMake
>
> #### 任务
>
> * 编写的一个程序创建一个简单的CMake项目。

### 任务12：调试和性能分析

> #### 要点
>
> * gdb或其他调试器
> * 性能分析工具（如Valgrind）
>
> #### 任务
>
> * 使用调试器（如gdb）逐步执行代码并识别错误。
> * 使用性能分析工具（如Valgrind）分析程序的内存使用情况。

### 任务13：最佳实践

> #### 要点
>
> * 有效的C++实践
> * 代码组织和风格
>
> #### 任务
>
> * 遵循有效的C++实践，审查并重构一段现有代码。

### 任务14：最新趋势和更新

> #### 要点
>
> * 了解C++语言的最新变化和功能。
>
> #### 任务
>
> * 探索C++20标准引入的功能。

### 任务15：项目

> #### 要点
>
> * 开展小型项目来应用和巩固知识。
>
> #### 任务
>
> * 在一个项目中结合复习过的多个概念。

### 任务16：在线资源

> #### 要点
>
> * 参考在线文档、教程和论坛，保持更新。
>
> #### 任务
>
> * 参与如Stack Overflow这样的在线论坛，解决C++问题并向他人学习。

### 任务17：练习

> #### 要点
>
> * 定期进行编程练习，以加强你的技能。
>
> #### 任务
>
> * 定期在平台上解决类似LeetCode或HackerRank的编程挑战。

### 任务18：版本控制

> #### 要点
>
> * 用于源代码管理的Git基础知识。
>
> #### 任务
>
> * 为你的一个项目设置一个Git仓库，并练习基本的版本控制命令。

### 任务19：测试

> #### 要点
>
> * 单元测试框架的基础知识（例如Google Test）。
>
> #### 任务
>
> * 学习并使用类似Google Test的框架进行基本的单元测试。

### 任务20：网络编程（可选）

> #### 要点
>
> * 如果你对网络编程感兴趣，可以了解一些相关基本概念。
>
> #### 任务
>
> * 通过创建一个简单的客户端-服务器程序，探索C++中的基本网络概念。
