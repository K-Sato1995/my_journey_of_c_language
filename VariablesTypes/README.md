# Data Types
C言語は以下の様な基本型を持つ。
- Integers: 自然数にも負の数にもなりうる数字。(`char`, `int`, `short`, `long`, `long long`を用いて定義する。)
- Unsigned integers: 自然数にしかなりえない数字。(`unsigned char`, `unsigned int`, `unsigned short`, `unsigned long`, `unsigned long long`を用いて定義する。)
- Floating point numbers: 少数 (`float`や`double`を用いて定義する。)
- Structures: Structuresのセクションで詳細を説明。

※ C言語には`boolean`タイプは存在しないせず、通常以下の表記法を用いて定義する。

```c
#define BOOL char
#define FALSE 0
#define TRUE 1
```

※ C言語では文字の配列を利用して`string`を表す。(Stringセクションで詳細を解説。)
