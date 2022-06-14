- Build against [https://github.com/zsa/qmk_firmware/](https://github.com/zsa/qmk_firmware/)
- Add volume mount to the `docker_build.sh` script
  ```
  -v "$dir/../keyboard-firmware-config/moonlander/src":/qmk_firmware/keyboards/moonlander/keymaps/toddbernhard \
  ```
- From the ZSA QMK checkout, build with docker: ```./util/docker_build.sh moonlander:toddbernhard```
- Flash with Wally or QMK Toolbox
