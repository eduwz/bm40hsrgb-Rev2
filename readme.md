# BM40hsrgb Rev2
    
![](https://i.imgur.com/pRpfnwDh.jpg)
    
    
This is a QMK keymap[^1] for BM40HSRGB **Revision 2** board made by Krepublic and available on: [Aliexpress](https://www.aliexpress.com/item/4001147779116.html) and [Kprepublic site](https://kprepublic.com/collections/bm40/products/bm40-rgb-40-hot-swap-custom-mechanical-keyboard-pcb-qmk-underglow-type-c-planck).

# How to compile
Follow the [QMK documentation](https://docs.qmk.fm/#/) and the [QMK MSYS tool page](https://msys.qmk.fm/) on how to compile.

# How to flash
Follow this [video guide](https://www.youtube.com/watch?v=fuBJbdCFF0Q) on how to flash the firmware using the [QMK toolbox](https://github.com/qmk/qmk_toolbox).

# Visual layout

## Base layer
![](https://i.imgur.com/tqWTTZR.png)

- `Gesc` = Escape when pressed, ` when Shift or GUI are held.
- `Rs Enter` = Right Shift when held, Enter when tapped.
- `Ctrl Del` = Right Control when held, Delete when tapped.
- `Func` = Function layer when held Tab or ' when tapped.
- `Lower` &dArr; and `Raise` &uArr; are layer keys.
- `Lower` &dArr; is Tap toggle = Acts like a Momentarily layer unless it’s tapped multiple times, which toggles the layer on.

## Lower layer
![](https://i.imgur.com/GdZs82s.png)

- Blank keys = Transparent keys which Use the next lowest non-transparent key.

## Raise layer
![](https://i.imgur.com/I36v4tu.png)

## Game layer
![](https://i.imgur.com/3bDBSOM.png)

## Function layer
![](https://i.imgur.com/JPPDmIa.png)

## Numpad layer
![](https://i.imgur.com/ochvfDZ.png)

## Adjust layer
![](https://i.imgur.com/gS2INZML.png)

- `Game` and `NumPad` are toggle layers keys.


# Layout goals and thoughts
I felt the need to have access to `Enter` with both hands and using the thumb for `Enter` feels better but I still use the Shift/Enter key sometimes.

The game layer is mainly for apex and csgo/valo, `1234` is used to cycle through weapons and utilities, so far I did not found a comfortable spot for the `4` key and thats the only key that i need to rebind ingame, currently using a mouse button for that.



  [^1]: you can use [Vial](https://github.com/vial-kb/vial-gui) to configure the keymap without having to recompile and reflash.
