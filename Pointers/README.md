# Pointers
`pointers`とはアドレスを取り扱う変数の事。

## ポインタの宣言

```c
// （例）int型変数のポインタを宣言するとき。
int *pointer;
```

## アドレスを代入

```c
// 以下で変数名のアドレスを取得できる。
&変数名;
// 宣言と同時に直接代入も可能
int *p = &x;
```

## ポインタが示すアドレス内の値を表示

```c
*ポインタ変数名;
```

# References
- [C言語ポインタの基礎](https://qiita.com/lrf141/items/a3e96b315dd4f08508a9)
- [Goのポインタ](https://k-sato1995.github.io/MyBlogFront/#/Post/16)
