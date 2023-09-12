Commands :

امر عمل compile للبرنامج بدون IDE 

gcc `pkg-config --cflags gtk+-3.0` -o main main.c `pkg-config --libs gtk+-3.0`

بدل كلمة main باسم البرنامج الخاص بك 

‍

امر تشغيل البرنامج للتجربة بدون IDE

‍

./main

بدل كلمة main باسم ملف الexe الخاص بك

‍

الأوامر الخاصة بتجهيز البرنامج عشان يشتغل بدون compiler  علي أي جهاز windows

ldd bin/main.exe | grep '\/mingw.*\.dll' -o | xargs -I{} cp "{}" ./bin

‍

بدل كلمة main باسم ملف الexe الخاص بك

‍

cp -r /mingw64/lib/gdk-pixbuf-2.0 ./lib/gdk-pixbuf-2.0

‍

cp -r /mingw64/share/icons/* ./share/icons/

(استخدم هذا الامر فقط اذا كنت تستخدم gtk icons في برنامجك)

‍

cp /mingw64/share/glib-2.0/schemas/* share/glib-2.0/schemas/

‍

glib-compile-schemas.exe share/glib-2.0/schemas/