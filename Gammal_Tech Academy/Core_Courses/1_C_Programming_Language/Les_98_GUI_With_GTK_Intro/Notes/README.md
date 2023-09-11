# Notes ..

**N_1 : Console Application.**  
**N_2 : Graphical User Interface.**

**N_3 : Commands :**  

- Installation on windows :

الامرين الخاصين ب تنزيل الملفات التي نحتاجها قبل تنزيل gtk :

- pacman -Syu

- pacman -Su

‍

الامر الخاص بتنزيل ال compiler :

- pacman -S mingw-w64-x86_64-toolchain base-devel

‍

الامر الخاص بتنزيل مكتبة gtk :

- pacman -S mingw-w64-x86_64-gtk3

‍

الامر الخاص بتنزيل برنامج glade :

- pacman -S mingw-w64-x86_64-glade

‍

مكان ملف الcompiler :

- compiler directory: msys64\ming64

‍

الامرين المسئولين عن تعريف gtk في codeblocks :

- `pkg-config --cflags gtk+-3.0`‍

- `pkg-config --libs gtk+-3.0`
