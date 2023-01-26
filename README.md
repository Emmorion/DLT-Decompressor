# DLT-Decompressor
Before building and installing this plugin, you have to build and install DLT-Viewer. If you have not done it yet, follow [this link](https://github.com/COVESA/dlt-viewer) and instructions which are written therein for CMake.
1. Clone dlt-decompressor repository into work directory. Cut folder **decompressorplugin** into ../YOUR/PATH/TO/dlt-viewer/plugin.
2. Open **plugin.pro** and add **decompressorplugin** folder name after **SUBDIRS +=**.
3. Follow the root folder of dlt-viewer, open **BuildDltViewer.pro** via QT Creator and build it like **release**.
4. Aftter these steps follow ../YOUR/BUILD/FOLDER/release/plugin and copy it to your plugin folder of CMake built Dlt-Viewer.
![example-uml](http://www.plantuml.com/plantuml/png/XP51ZzCm48Nl_XMZSe53YX0N55NHiblHIoIG5e4uHMuoTArrFCQUj1iG_vsfaYXfqefBrOc_z-RPxowo3jpKLh5XYx3QeSEWBKJyrQ0h4UY8uMZmj5ARoAt5J5ayeAlWZmBuH8uVpM-4TnzakjVbyovGuwe7iXJWz6GOrL-rUTih1ocJ1ui_MMts8abVvURmnBkWsmpUXohn4gc5acfF3jsSGdGPK1CcmDcpirPgJo-moerhNbRGIHwVstlRe3hRcj9uxHWUh17XH--jAJKRSg1Z_n76E9SIMHSmHe5pimywj6iDar0Ni3Nxol8wqjbtQxcpxdMtDeYYg3JMv7hLjXjku09yas8mJ07LNoB9hWTEeUm_5xNyw0E-VgEkakAm29x2DlzQv9zt8beSYc3Cd4AKEWewOYYyyIY2yL38CVoKvD8BA2D8ZQelyxjn5PtYKESFj9PE_t-96R35uU8KljZcODnQIW8TvuStEnLe-Kw31oxVyC98ZHcJRB4oXKh62YUTw9BDKJFEMJMRnUxwzivpqVMOOvCa2_CAR-uTMhcJFqrj_m40)
