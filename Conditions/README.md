# Conditions

# if

C 言語では`if-else if-else`を用いて条件分岐を表す。
以下の様に値を比較できる。

```c

int num1 = 1;
int num2 = 2;

if (num2 > num1) {
  printf("num2 is bigger");
}else if (num1 == num2) {
  printf("They are the same");
}else {
  printf("num1 is bigger");
};
return 0;

// 比較演算子
int foo = 1;
int bar = 2;

foo > bar // smaller than
foo < bar // greater than
foo == bar // equal
foo != bar // not equal

// You can also use && and || to use 2 or more conditions together.
```

# Switch

式の結果は整数型でなくてはならない。
条件に当てはまる式から順に全てが評価される。

```c
switch(式) {
  case 定数式1: 文1
  case 定数式2: 文2
  case 定数式3: 文3
  default :文
}
```
