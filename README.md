# libft

42 Tokyo Piscine 課題「libft」の完成版 C 言語汎用ライブラリです。  
メモリ操作、文字列操作、文字分類／変換、数値変換、ファイルディスクリプタ出力、そしてボーナスのリンクドリスト操作まで、合計 42 種類以上の関数をゼロから実装しています。

---

## 目次
- [機能](#機能)  
  - [必須関数](#必須関数)  
  - [ボーナス関数](#ボーナス関数)  
- [ディレクトリ構成](#ディレクトリ構成)  
- [ビルド方法](#ビルド方法)  
- [使い方](#使い方)  
- [テスト](#テスト)  
- [コーディング規約](#コーディング規約)  
- [ライセンス](#ライセンス)  
- [作者](#作者)  

---

## 機能

### 必須関数

#### メモリ操作
- `ft_memset`  
- `ft_bzero`  
- `ft_memcpy`  
- `ft_memccpy`  
- `ft_memmove`  
- `ft_memchr`  
- `ft_memcmp`  

#### 文字列操作
- `ft_strlen`  
- `ft_strlcpy`  
- `ft_strlcat`  
- `ft_strchr`  
- `ft_strrchr`  
- `ft_strnstr`  
- `ft_strncmp`  
- `ft_strdup`  

#### 文字分類・変換
- `ft_isalpha`  
- `ft_isdigit`  
- `ft_isalnum`  
- `ft_isascii`  
- `ft_isprint`  
- `ft_toupper`  
- `ft_tolower`  

#### 数値変換・割り当て
- `ft_atoi`  
- `ft_calloc`  

#### ファイルディスクリプタ出力
- `ft_putchar_fd`  
- `ft_putstr_fd`  
- `ft_putendl_fd`  
- `ft_putnbr_fd`  


### ボーナス関数

#### 単方向リスト操作
- `ft_lstnew`  
- `ft_lstadd_front`  
- `ft_lstsize`  
- `ft_lstlast`  
- `ft_lstadd_back`  
- `ft_lstdelone`  
- `ft_lstclear`  
- `ft_lstiter`  
- `ft_lstmap`  


---

## ディレクトリ構成
```

libft/

├── includes/

│   └── libft.h        # 全関数プロトタイプ & 必要な構造体定義

├── srcs/

│   ├── ft_memset.c

│   ├── ft_bzero.c

│   ├── …

│   └── bonus/

│       ├── ft_lstnew.c

│       └── …

├── Makefile

└── README.md


```shell
---

## ビルド方法

```bash
# リポジトリをクローン
$ git clone https://github.com/nekogami6666/libft.git
$ cd libft

# 標準ビルド（必須関数のみ）
$ make

# ボーナス関数を含めてビルド
$ make bonus

# クリーンアップ
$ make clean      # *.o を削除
$ make fclean     # *.o と libft.a を削除
$ make re         # fclean してから再ビルド
```

ビルドが成功すると、ルートディレクトリに `libft.a` が生成されます。


---



## 使い方 

作成した `libft.a` を他のプロジェクトにリンクして利用できます。例：


```bash
gcc -I includes -L . -lft main.c -o my_program
```

 
- `-I includes` でヘッダーファイルを参照
 
- `-L .` でライブラリ検索パスにカレントディレクトリを追加
 
- `-lft` で `libft.a` をリンク



---



## テスト 


42 Tokyo の公式テストスイートや外部リポジトリ（例：libft-unit-test）で動作確認ができます。



```bash
# 例: 外部テストリポジトリを使う場合
$ git clone https://github.com/yourusername/libft-unit-test.git
$ cd libft-unit-test
$ make
$ ./test_libft ../libft
```



---



## コーディング規約 

 
- [Norminette](https://github.com/42School/norminette)  準拠
 
- 1 行の長さは 80 文字以内
 
- インデントはタブ文字
 
- グローバル変数禁止
 
- ヘッダーファイルのインクルードガード必須



```bash
# Norminette 実行例
$ norminette includes/libft.h srcs/*.c srcs/bonus/*.c
```



---



## ライセンス 

MIT License

詳細は [LICENSE]()  ファイルを参照してください。


---



## 作者 

 
- Hayate Okumura (@nekogami6666)
 
- Email: [okumura.hayate.q8@dc.tohoku.ac.jp]()



---
