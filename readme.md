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
![](https://i.imgur.com/nUIucHU.png)

- `Gesc` - Escape when pressed, ` when Shift or GUI are held.
- `Enter Shift` - Right Shift when held, Enter when tapped.
- `Ctrl Del` - Right Control when held, Delete when tapped.
- `Enter Sym` - Symbol layer when held, Enter when tapped.
- `Lower` and `Raise` are the main layer keys.

## Lower layer
![](https://i.imgur.com/W6fwEYN.png)

- `Blank keys` - Transparent keys, which Use the next lowest non-transparent key.
- `Gray keys` - Key held to access the current layer.
- `Search` - Control + F.
- `Focus Url` - Control + L.

## Raise layer
![](https://i.imgur.com/ahg1NYl.png)

- `Sound` - Shortcut for the Windows Sound Output 

## Symbol layer
![](https://i.imgur.com/ykD9dVZ.png)

- Windows + Arrows and some Copy & Pasta shortcuts.

## Game layer
![](https://i.imgur.com/lpuYmhn.png)

- This layer works as base layer.
- All the transparent keys are `Qwerty` which is layer 0.

## Numpad layer
![](https://i.imgur.com/plPeppp.png)
- This is a toggle layer that can be accessed in the `Adjust` layer.

## Adjust layer
![](https://i.imgur.com/LYWQCLg.png)

- `Adjust` layer can be accessed by pressing `Lower` and `Raise` together.
- `NumPad` is a toggle layer keys.
- `Qwerty`, `Colemak` and `GAME` switches the default layer.

# Layout goals and thoughts

Currently, I'm learning and using `Colemak-DH` over `Qwerty`, which I can access by using a DF() switch in the `Adjust` layer.

Colemak-DHM layout:
![](https://i.imgur.com/WjcOV3Z.png)

I'm still experimenting with different layouts, but for now I find comfortable having Navigation keys accessible with both hands, so I made the rest of the Keymap around that.

The `Game` `layer` is mainly for fps games, where `1234` is used to cycle through weapons and utilities. Layer swapping to access these keys can make your character stop moving or lose speed/momentum during the process, and the delay of pressing two keys can be too much.
