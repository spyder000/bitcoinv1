
Debian
====================
This directory contains files used to package bitcoinv1d/bitcoinv1-qt
for Debian-based Linux systems. If you compile bitcoinv1d/bitcoinv1-qt yourself, there are some useful files here.

## bitcoinv1: URI support ##


bitcoinv1-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install bitcoinv1-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your bitcoinv1-qt binary to `/usr/bin`
and the `../../share/pixmaps/bitcoinv1128.png` to `/usr/share/pixmaps`

bitcoinv1-qt.protocol (KDE)

