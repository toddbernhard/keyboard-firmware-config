FROM zmkfirmware/zmk-build-arm:stable

COPY config/west.yml /config/
RUN west init -l /config
RUN west update && west zephyr-export
COPY config /config
RUN west build -s zmk/app -b ble_chiffre -d ble_chiffre -- -DZMK_CONFIG="/config"
RUN cp ble_chiffre/zephyr/zmk.uf2 ble_chiffre.uf2