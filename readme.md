# Callum style keymap (https://github.com/callum-oakley/qmk_firmware/tree/master/users/callum)
This is my personal keymap based on Callum style home-row mods. It's a 34-key layout - intended for use on a ortho Planck-sized keyboard or a split keyboard (like Microdox, Corne, Ferris).

## HOWTO
The layout used is called `brove` - so you'll need to define it for your layout/keyboard.
For a Planck keyboard you need to add a new layout to the folder `/layouts/community/ortho_4x12`.
Add a folder named `brove` with the files `config.h` and `keymap.c`.

`config.h`:
```
#pragma once

#define LAYOUT_brove(                                                                  \
    KEY00, KEY01, KEY02, KEY03, KEY04,               KEY05, KEY06, KEY07, KEY08, KEY09, \
    KEY10, KEY11, KEY12, KEY13, KEY14,               KEY15, KEY16, KEY17, KEY18, KEY19, \
    KEY20, KEY21, KEY22, KEY23, KEY24,               KEY25, KEY26, KEY27, KEY28, KEY29, \
                         KEY30, KEY31,               KEY32, KEY33                       \
)                                                                                       \
LAYOUT_ortho_4x12(                                                                      \
    KEY00, KEY01, KEY02, KEY03, KEY04, KC_NO, KC_NO, KEY05, KEY06, KEY07, KEY08, KEY09, \
    KEY10, KEY11, KEY12, KEY13, KEY14, KC_NO, KC_NO, KEY15, KEY16, KEY17, KEY18, KEY19, \
    KEY20, KEY21, KEY22, KEY23, KEY24, KC_NO, KC_NO, KEY25, KEY26, KEY27, KEY28, KEY29, \
    KC_NO, KC_NO, KC_NO, KEY30, KEY31, KC_NO, KC_NO, KEY32, KEY33, KC_NO, KC_NO, KC_NO  \
)
```

The `keymap.c` must be empty - keymap is loaded from userspace files.


## TODO
- numpad layout for numbers
- HJKL navigation
- word forward/back
- cmd/ctrl + tab
- shortcuts/keycombos based on OS


n/a   +   [   ]   #        %  cap  *   =  n/a 
 @    -   (   )   $        ~  ent esc  _   &
 <    >   {   }   ^        `   !   ?   |   \
 
// https://github.com/rstacruz/my_qmk_keymaps
// https://github.com/callum-oakley/qmk_firmware/tree/master/users/callum
// https://stevep99.github.io/seniply/
// https://github.com/rafaelromao/qmk_firmware/tree/rafaelromao/users/rafaelromao
// https://github.com/reinier/dotfiles
// https://thomasbaart.nl/2018/12/01/reducing-firmware-size-in-qmk/


// Mac/Win keycode handling:
// https://github.com/mrkskk/qmk_firmware/blob/my_branch/users/mrkskk/process_records.c
// https://github.com/mrkskk/qmk_firmware/tree/review/8591/users/mrkskk
// https://github.com/mrkskk/qmk_firmware/tree/my_branch/users/mrkskk
