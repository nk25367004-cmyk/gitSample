# Git & GitHub Sample (Simple C, single-file)

**目的**

- 第4回：fork → clone → 変更 → add/commit → push を最小コストで体験
- 第7回：同じファイル内の「関数部分」を修正してPR（ブランチ運用の練習）

**特徴**

- すべて単一Cファイル。`gcc file.c -o exe` だけでビルド
- Makefile・ヘッダ分割なし（負担を減らす）

## 構成
```
gitSample/
├── hello.c   # greet() を main と同一ファイルで定義
├── calc.c    # add()/sub()/mul()/div() を main と同一ファイルで定義
└── README.md
```

## ビルドと実行
```bash
gcc hello.c -o hello
./hello

gcc calc.c -o calc
./calc
```

## 第3回（変更の練習）
- `hello.c` のメッセージや `greet()` の文言を1〜2行変更 → push
- `README.md` に自分の名前・日付を追記 → push

## 第6回（ブランチ+PRの練習）
- ブランチを作成して `calc.c` の各関数を改善（例：ゼロ割チェック、平均値関数`avg()`追加）
- 入力エラー対応やメニュー表示の整理なども対象にできる
- 変更後に PR を作ってレビュー依頼

