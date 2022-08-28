Supports only BLe Chiffre for now.

##### Requirements
`docker` and `docker-compose`

##### Build locally

```shell
docker-compose up -d --build
```
Run the above command within this directory.
This will create a `build` directory containing the `.uf2` file.

##### Build with Github Actions*

Commit to a branch and push.
View your build in the Actions tab.
Download the `.uf2` file from the build artifacts.

##### Installing firmwareo
When the BLe Chiffre is connected via USB cable, it appears as a USB device in the file explorer.
Copy the `.uf2` file onto the BLe Chiffre drive to install it.
