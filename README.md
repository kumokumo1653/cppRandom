# cppRandom
c++の乱数生成クラス

## 概要
c++ではc言語のrand()も使用できるが周期や範囲が小さかったり、範囲指定生成に偏りがある(rand % Nすると)などの理由から<random>を使いたい。
しかし、rand()のように気軽に使えないのでヘッダーファイルにしました。

## 使い方
1. Random.hppを使いたい使いたいソースファイルと同階層置く。
2. 使いたいソースファイルの先頭に#include "Random.hpp"を追加

###  例
~~~
#include "Random.hpp"
#include <iostream>
using namespace std;
int main(void){
    Rand::Random rand;
    cout << rand.RandInt(0, 4) << endl;
    cout << rand.RandInt(4) << endl;
    cout << rand.RandDouble(-1, 4) << endl;
    cout << rand.RandDouble(4) << endl;
    cout << rand.RandBool(0.3) << endl;
    cout << rand.RandBool() << endl;
    cout << rand.RandDiscrete({1, 10, 100}) << endl;
    return 0;
}
~~~
### 実行結果
~~~
4
0
0
2
~~~
