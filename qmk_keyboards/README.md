Requirements:
- `docker` or `podman` on the PATH
- a checkout of [qmk/qmk_firmware](https://www.github.com/qmk/qmk_firmware) on your system
- `python3` (for the build script only)

Setup:
```shell
export QMK_FIRMWARE_REPO=../<path>/<to>/<qmk_firmware_repo>
```

Usage:
```
build-qmk-keyboard [options] keyboard [keymap]

positional arguments:
keyboard              one of above keyboards
keymap

optional arguments:
-h, --help            show this help message and exit
--qmk-repo QMK_REPO   path to a checkout of the qmk_firmware repo. required, or can be set via QMK_FIRMWARE_REPO.
--runtime docker|podman
containerization runtime. detected if not set.
--alt-get-keyboards true|false
defaults to true
--skip-git SKIP_GIT
--makeflags MAKEFLAGS
```

Supports:
- [Adalyn](./adalyn) by MarvPFV and Tominabox
- ZSA [Moonlander](./moonlander) Mk1
