# Structures
Cにはオブジェクト指向言語におけるclassというものは存在しません。
似た役割として関連する変数をひとまとめにする`structures(構造体)`が使用されます。


## 構造体の型付け
`structures(構造体)`は以下の様に定義できる。

```c
struct person {
  int age;
  char sex;
  char name[15];
};

// personがこの構造体のタグ名
// 整数型のメンバ age
// 文字型のメンバ sex
// 文字配列型のメンバ name
```

## 構造体の宣言 初期値設定
今度は実際に構造体を宣言して構造体を使えるようにします。

```c
struct person p1; // p1という名前の`struct person`型変数を宣言
p1.age=24;
p1.sex='M';
p1.name="Tom";

struct person p1 = {24, 'M', "Tom"}; // 初期値と共に宣言する事もできる。
```

## メンバ参照(直接参照)

```
p1.age;
p1.sex;
p1.name;
```

## Typedef
`typedef`を用いると，既に定義されている型に，別の新しい名前をつけて定義することができる。

```c
typedef　定義されている型　定義する新しい型名;
```

`typedef`を使用すれば構造体を以下の様にかける。

```c
// 構造体の型枠を定義して，同時にそれを型名 person として定義する
typedef struct {
  int age;
  char sex;
  char name[15];
} person;

// 初期値設定
person p1 = {24, 'M', "Tom"};
```

## References
- [構造体(プログラミングB)](https://www.cc.kyoto-su.ac.jp/~yamada/programming/struct.html)
- [構造体(納得C言語)](http://www.isl.ne.jp/pcsp/beginC/C_Language_14.html)
