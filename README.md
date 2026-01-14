μPD777 is an emulator for the Epoch Cassette Vision, from Japan in 1981.

It is written by 猫大名ねこ猫 (W88DodPECuThLOl) at https://github.com/W88DodPECuThLOl/PD777 .

This fork adds a libretro interface to run in RetroArch or similar.

ROM file handling is slightly awkward because of the two-file ROM format.
1. Zip-files (bundling one `.bin777` and one `.ptn777`) are supported.
2. Supply a `.bin777` file to load; the core looks for a similarly-named `.ptn777` file in the same directory.

There is not yet a suitable single-file format for the Cassette Vision.
If ROM loading fails, the core will run a built-in balloon demo, as in standalone emulator.

(For a test file, the upstream developer W88DodPECuThLOl has a homebrew Tetris port at
* https://github.com/W88DodPECuThLOl/PD777supplement/tree/main/sample/NekkoRis/obj )

Most simple button and switch controls are working as in the standalone Windows and WASM builds.
* 4 Paddle controllers are controlled by Left Analog axes on RetroPads 1 and 2.
* Lightgun (for Big Sports 12) is controlled by libretro's virtual light gun; this can
  be controlled by the main system mouse, a touchscreen, or a physical lightgun.

Possible future controls, not yet available:
* Paddles controlled by mouse or hardware spinner.
* Lightgun controlled by gamepad analog inputs.

Tested on:
* Linux x86_64
* Windows x86_64
* macOS Apple Silicon
* Raspberry Pi 64-bit
* Raspberry Pi 32-bit

Thanks again to W88DodPECuThLOl for this emulator!

Upstream README.md follows:
==========================
# μPD777エミュレータ

# これは何？
μPD777というののエミュレータです。  

# ビルド環境
* Windowsのみ
* C++20
* CMake

## ビルド方法
1. CMakeにてプロジェクトを作成し
2. ビルドします

# todo
* 命令の実装があっているのかどうか

# コマンドラインオプション

| オプション | 説明 |
|---|---|
| -code <コードファイル名> | コードファイルを読み込む |
| -ptn <パターンファイル名> | パターンファイルを読み込む |
| -cfg <コンフィグファイル名> | コンフィグファイルを読み込む |
| -disassemble | コードを逆アセンブルし終了 |

ファイルのフォーマットなどは ⇒ [PD777supplement Pages](https://github.com/W88DodPECuThLOl/PD777supplement)

# 動作イメージ
![Battle Vader](/wiki/image/BattleVader000.png)
![Battle Vader](/wiki/image/BattleVader001.png)
![Battle Vader](/wiki/image/BattleVader002.png)
![Battle Vader](/wiki/image/Galaxian000.png)
![Battle Vader](/wiki/image/Galaxian001.png)
![Battle Vader](/wiki/image/Galaxian002.png)
