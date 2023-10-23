# BM40hsrgb Rev2
    
![](https://i.imgur.com/pRpfnwDh.jpg)
    
    
This is a QMK firmware for BM40HSRGB **Revision 2** board made by Kprepublic and available on: [Aliexpress](https://www.aliexpress.com/item/4001147779116.html) and [Kprepublic site](https://kprepublic.com/collections/bm40/products/bm40-rgb-40-hot-swap-custom-mechanical-keyboard-pcb-qmk-underglow-type-c-planck).
<br>Based on the [rgoulter bm40hsrgb](https://github.com/rgoulter/qmk_firmware/tree/bm40hsrgb_rev2/keyboards/kprepublic/bm40hsrgb) repository.

# How to compile
Follow the [QMK documentation](https://docs.qmk.fm/#/) and the [QMK MSYS tool page](https://msys.qmk.fm/) on how to compile.

# How to flash
Follow this [video guide](https://www.youtube.com/watch?v=fuBJbdCFF0Q) on how to flash the firmware using the [QMK toolbox](https://github.com/qmk/qmk_toolbox).

# Visual layout

## Base layer
![](https://i.imgur.com/X2vRFKD.png)

- `Gesc` = Escape when pressed, ` when Shift or GUI are held.
- `Rs Enter` = Right Shift when held, Enter when tapped.
- `Ctrl Del` = Right Control when held, Delete when tapped.
- `Lower` and `Raise` are the main layer keys.

## Lower layer
![](https://i.imgur.com/bPHJvOC.png)

- `Blank keys` = Transparent keys, which Use the next lowest non-transparent key.

## Raise layer
![](https://i.imgur.com/HkuMlKK.png)

## Game layer
![](https://i.imgur.com/8bjV6qh.png)

## Numpad layer
![](https://i.imgur.com/V4S8Mje.png)

## Adjust layer
![](https://i.imgur.com/zBf7NHD.png)

- `Adjust` layer can be accessed by pressing `Lower` and `Raise` together.
- `Game` and `NumPad` are toggle layers keys.


# Layout goals and thoughts
I'm still experimenting with different layouts, but for now I find comfortable having Navigation keys accessible with both hands, so I made the rest of the Keymap around that.

The `Game` `layer` is mainly for fps games, where `1234` is used to cycle through weapons and utilities. Layer swapping to access these keys can make your character stop moving or lose speed/momentum during the process, and the delay of pressing two keys can be too much.

The next step should probably be ditching the Qwerty layout for something more efficient...
