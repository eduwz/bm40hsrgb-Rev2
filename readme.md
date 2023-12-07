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
![](https://imgur.com/RZSS9C7.png)

- `Gesc` - Escape when pressed, ` when Shift or GUI are held.
- `Enter Shift` - Right Shift when held, Enter when tapped.
- `Ctrl Del` - Right Control when held, Delete when tapped.
- `Num Fun`, `Lower` and `Raise` are the main layer keys.

## Lower layer
![](https://imgur.com/BHgw5Lu.png)
Navigation layer

- `Blank keys` - Transparent keys, which Use the next lowest non-transparent key.
- `Gray keys` - Key held to access the current layer.
- `Search` - Control + F.
- `Focus Url` - Control + L.
- `Win` + `Left/Down/Right/Up` - Windows Snap
## Raise layer
![](https://imgur.com/HhSB8J2.png)
Symbols layer


## Numbers & Function layer
![](https://imgur.com/LMZbc58.png)

- `Sound` - Shortcut for the Windows Sound Output 

## Game layer
![](https://imgur.com/KcZJFtH.png)

- `Num Fum` - Numbers & Functions layer.
- This layer can be toggled on the `Adjust` layer.
- The key `GAME` untoggles the layer.


## Numpad layer
![](https://imgur.com/zT6dsgS.png)
- This is a toggle layer that can be accessed in the `Adjust` layer.
- The key `Numpad` untoggles the layer.

## Adjust layer
![](https://imgur.com/T03FCAa.png)

- `Adjust` layer can be accessed by holding `Lower` and `Raise` together.
- `NumPad` and `GAME` are toggle layer keys.
- `Qwerty` and `Colemak` switches the default layer.

# Layout goals and thoughts

I'm actually using `Colemak-DH` over `Qwerty`, which I can access by switch in the `Adjust` layer.

Colemak-DHM layout:
![](https://imgur.com/SvV613q.png)

Overall I'm still experimenting with different layouts and trying to find new tech to improve my keymap,<br>
e.g. recently I've been trying [Caps Word](https://docs.qmk.fm/#/feature_caps_word) using both shifts to activate, and so far, it's great.

The `Game` `layer` is mainly for fps games, where `1234` is used to cycle through weapons and utilities. Layer swapping to access these keys can make your character stop moving or lose speed/momentum during the process, and the delay of pressing two keys can be too much, I can use `Num Fun` to access all the numbers and function keys if needed, also the `Tab` key is placed inside the `Num Fun`.
