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
![](https://i.imgur.com/l1SbwfC.png) 

- `Gesc` - Escape when pressed, ` when Shift or GUI are held.
- `Enter Shift` - Right Shift when held, Enter when tapped.
- `Ctrl Del` - Right Control when held, Delete when tapped.
- `Fun`, `Lower` and `Raise` are the main layer keys.

## Lower layer
![](https://imgur.com/X84RrWj.png)
Navigation and Numbers

- `Blank keys` - Transparent keys, which Use the next lowest non-transparent key.
- `Gray keys` - Key held to access the current layer.
- `Search` - Control + F.
- `Focus Url` - Control + L.

## Raise layer
![](https://imgur.com/HhSB8J2.png)
Symbols layer


## Function layer
![](https://imgur.com/kqW7D1z.png)

- `Win` + `Left/Down/Right/Up` - Windows Snap
- `Sound` - Shortcut for the Windows Sound Output 

## Game layer
![](https://imgur.com/06AEUmL.png)

- `Fun` - Functions layer.
- This layer can be toggled on the `Adjust` layer or with the `Menu` + `Ctrl Del` combo on the base layer.
- The key `GAME` untoggles the layer.

## Adjust layer
![](https://imgur.com/eJ9WRft.png)

- `Adjust` layer can be accessed by holding `Lower` and `Raise` together.
- `GAME` is a toggle layer key.
- `Qwerty` and `Colemak` switches the default layer.

## Layout goals and thoughts

I'm actually using `Colemak-DH` over `Qwerty`, which I can access by switch in the `Adjust` layer.

`Colemak-DH` layout:
![](https://imgur.com/SvV613q.png)

Currently using `Colemak DH`, it has nice rolls and felt better than `Qwerty` right away. But since
I type in English and Portuguese there are some annoyances.<br>
There is a lot of `'` usage in Portuguese, and with `Colemak DH` typing `'` + `oieu` is uncomfortable, so I will still be on the look for alternative layouts.

The `Game` `layer` is mainly for fps games, where `1234` is used to cycle through weapons and utilities. Layer swapping to access these keys can make your character stop moving or lose speed/momentum during the process, and the delay of pressing two keys can be too much.<br> The `Tab` key is placed inside the `Fun` layer.

---
some other tech:<br>
[Caps Word](https://docs.qmk.fm/#/feature_caps_word) - using both shifts to activate.<br>
[Combo](https://docs.qmk.fm/#/feature_combo) - used to toggle the `Game` layer with `Menu` + `Ctrl Del`<br>
[RGB Matrix](https://docs.qmk.fm/#/feature_rgb_matrix) - used for layer indication.
