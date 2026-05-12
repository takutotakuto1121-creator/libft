*This project has been created as part of the 42 curriculum by tsugimot.*

## 概要(Description)
この課題は42cursusの一番最初の課題です。C言語で自作ライブラリを作成しました。C言語の基本を理解することと、これから使用する便利なライブラリを作成することを目的としています。

## 指示(Instructions)
このプロジェクトには `Makefile` が含まれており、以下のルールが適用されます。

* **all**: ライブラリ `libft.a` をビルドします。
* **clean**: オブジェクトファイル（`.o`）を削除します。
* **fclean**: オブジェクトファイルと `libft.a` を削除します。
* **re**: フルビルド（fcleanを実行してからallを実行）を行います。

全てのソースファイルは、`-Wall -Wextra -Werror` フラグを用いて `cc` でコンパイルされます。

実行手順は以下の通りです。
`make` で `libft.a`を作成し、それをmain関数を含む任意のファイルとともにコンパイルします。

## 作成した関数について(about functions created)

### Part 1: Libc関数
標準ライブラリの関数を `ft_` プレフィックスを付けて再実装しています。これらは元の関数と同じ挙動をします。

* **文字判定・操作:**
`ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
* **文字列操作:**
`ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_atoi`, `ft_strdup`
* **メモリ操作:**
`ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`

### Part 2: 追加関数
標準ライブラリには含まれない、あるいは異なる形式で存在する便利な補助関数群です。

* **文字列生成・加工:**
`ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`
* **数値・関数適用・出力:**
`ft_itoa`, `ft_strmapi`, `ft_striteri`, `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### Part 3: 連結リスト
動的なデータ管理を可能にする、独自の連結リスト構造体 (`t_list`) を操作する関数です。

* **ノード操作と管理:**
`ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

## 参考(Resources)
manを参照しました。
AIは使用していません。
