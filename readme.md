# Keymap for BM40hsrgb
    
![](https://i.imgur.com/pRpfnwDh.jpg)
    
    
This is a QMK keymap[^1] for revision 2 of the krpublic board bm40hsrgb available on: [Aliexpress](https://www.aliexpress.com/item/4001147779116.html) and [Kprepublic site](https://kprepublic.com/collections/bm40/products/bm40-rgb-40-hot-swap-custom-mechanical-keyboard-pcb-qmk-underglow-type-c-planck).

# How to compile
You will need to compile this keymap into the firmware, follow the [QMK documentation](https://docs.qmk.fm/#/) and the [QMK MSYS tool page](https://msys.qmk.fm/) on how to compile.

# How to flash
Follow this [video guide](https://www.youtube.com/watch?v=fuBJbdCFF0Q) on how to flash the firmware using the QMK toolbox.

# Visual layout

## Base layer
![](https://i.imgur.com/Vt0BOMt.png)

- `Gesc` = Escape when pressed, ` when Shift or GUI are held.
- `Rs Enter` = Right Shift when held, Enter when tapped.
- `Ctrl Del` = Right Control when held, Delete when tapped.
- `Nav` = Navigate layer when held Tab or ' when tapped.
- `Lower` &dArr; and `Raise` &uArr; are layer keys.
- `Lower` &dArr; is Tap toggle = Acts like a Momentarily layer unless it’s tapped multiple times, which toggles the layer on.

## Lower layer
![](https://i.imgur.com/T899j7H.jpg)

- Blank keys = Transparent keys which Use the next lowest non-transparent key.

## Raise layer
![](https://i.imgur.com/fBKXn4H.jpg)

## Game layer
![](https://i.imgur.com/qnnWObf.jpg)

- Transparent keys are the base layer.

## Navigate layer
![](https://i.imgur.com/x8o8MVm.jpg)

## Num pad layer
![](https://i.imgur.com/DUMwTYT.jpg)

## Adjust layer
![](https://i.imgur.com/rHJUy0q.png)

- `Game` and `NumPad` are toggle layers keys.


# Layout goals and thoughts
I felt the need to have access to `Enter` with both hands and using the thumb for `Enter` feels better but I still use the Shift/Enter key sometimes.

The game layer is mainly for csgo and apex legends since in other games I didn't feel the need, `1234` is used to cycle through weapons and utilities, so far I didn't find a comfortable spot for the `4` key because of that I am rebinding ingame to a mouse button instead.

  [^1]: you can use [Vial](https://github.com/vial-kb/vial-gui) to configure the keymap without having to recompile and reflash.


