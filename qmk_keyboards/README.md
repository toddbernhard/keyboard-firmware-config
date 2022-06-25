**Supports:**
- [Adalyn](./adalyn) by MarvPFV and Tominabox
- ZSA [Moonlander](./moonlander) Mk1 

#### Requirements:
- `docker` or `podman` on the PATH
- a checkout of [qmk/qmk_firmware](https://www.github.com/qmk/qmk_firmware) on your system
- `python3` (for the build script only)

#### Environment Setup:

These can also be specified with commandline options. It is cleaner to throw these into the environment.
```shell
export QMK_REPO=../<path>/<to>/<qmk_firmware_repo>
export QMK_KEYMAP=myusername
```

Usage:
```
build-qmk-keyboard [options] keyboard [keymap]

Supports building custom QMK firmware for the following keyboards:
  . moonlander
  . adalyn

positional arguments:
  keyboard              one of the supported keyboards
  keymap                what to name the keymap for this build. defaults to git username. can be set via environment: QMK_KEYMAP.

optional arguments:
  -h, --help            show this help message and exit
  --userspace USERSPACE
  --qmk-repo QMK_REPO   path to a checkout of the qmk_firmware repo. required, or can be set via environment: QMK_REPO.
  --runtime docker|podman
                        containerization runtime. detected if not set.
  --qmk-keyboard-path QMK_KEYBOARD_PATH
  --alt-get-keyboards true|false
                        defaults to: true. pass-through for environment: ALT_GET_KEYBOARDS.
  --skip-git SKIP_GIT   pass-through for environment: SKIP_GIT.
  --makeflags MAKEFLAGS
                        pass-through for environment: MAKEFLAGS.
```

