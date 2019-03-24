# Loops

## For Loops

`for文`とは、ある回数処理を繰り返したい場合に使用します。
ある条件で処理を省きたい場合は`break`句や`continue`句を使って必要のない処理を省くなど、処理の制御を行います。

`for文`は以下の様に記述出来ます。

```c
for (初期化式; 継続条件式; 変化式) {
  // 継続条件式がtrueのときに繰り返す処理
}
```

## While Loops

`for文`と同じように繰り返し処理を行う`while文`があります。
`while文`は以下の様に定義できます。

```c
int n = 0;
while (n < 10) {
    n++;
}
```


## break and continue (Loop directives)

### break

`break`はループの実行を止めます。
以下の例だと、nが10の場合にループから抜けます。

```c
int n = 0;
while (1) {
    n++;
    if (n == 10) {
        break;
    }
}
```

### continue

`continue文`を使用すると、`for文`や`while文`の繰り返し処理の途中であってもそのループをスキップし、ループの先頭（次のループ）から実行します
例えば以下の例だと、
偶数にならない数の場合はループの中の処理を中断し、ループの先頭に戻っています。

```c
int n = 0;
while (n < 10) {
    n++;

    /* check that n is odd */
    if (n % 2 == 1) {
        /* go back to the start of the while block */
        continue;
    }

    /* we reach this code only if n is even */
    printf("The number %d is even.\n", n);
}
```
