# Arrays

以下が配列の定義方法

```c
type name_of_array[size]

// 例
int numbers[5];

// 初期化を伴う場合
int numbers[3] = { 1, 2, 3 };

// サイズ箇所を省略しての初期化
int numbers[] = { 1, 2, 3 };

// サイズより少ない数の初期値を与えた場合、残りの数は０で初期化される。
int numbers[3] = { 1, 2 }
```
