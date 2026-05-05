# Bello Script Language

Bello is a small scripting language interpreter implemented with C++,
Flex, and Bison. It supports fundamental structure, e.g. for, if, and
support object-orirented.

Its aim is to create a flexible, basically classical, stable implementation of scripting language.


## while语句
while [condition]
	[statement]

## if语句
if [condition]
	[statement_or_block]
elif 
	[statement_or_block]
else
	[statement_or_block]

## for语句
for [initial variable define, e.g i=0]: [condition] : [iterative]
	[statement_or_block] 

## 函数定义 function defination
fn [function_name]([parameter_name :] parameter, ...)
	[statement_or_block]


## break语句

用于循环中，跳出循环

break
break([layer])

## continue语句

用于循环中，跳过之后内容，（for：使用迭代语句），省略循环体

## 数组 array

a = [1, 2, 3, 4, 7]

a[2] = 5

## Features

- Variables and arrays
- If / for / while control flow
- Function definitions
- Basic built-in I/O (see examples)



