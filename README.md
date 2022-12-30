# DLT-Decompressor
Before building and installing this plugin, you have to build and install DLT-Viewer. If you have not done it yet, follow [this link](https://github.com/COVESA/dlt-viewer) and instructions which are written therein for CMake.
1. Clone dlt-decompressor repository into work directory. Cut folder **decompressorplugin** into ../YOUR/PATH/TO/dlt-viewer/plugin.
2. Open **plugin.pro** and add **decompressorplugin** folder name after **SUBDIRS +=**.
3. Follow the root folder of dlt-viewer, open **BuildDltViewer.pro** via QT Creator and build it like **release**.
4. Aftter these steps follow ../YOUR/BUILD/FOLDER/release/plugin and copy it to your plugin folder of CMake built Dlt-Viewer.
