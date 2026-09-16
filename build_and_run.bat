@echo off
echo ========================================================
echo   Building and Running NXP GUI Guider LVGL Simulator
echo ========================================================

set MINGW_BIN=C:\nxp\GUI-Guider-1.10.1-GA\environment\mingw\bin
set MINGW_LIB=C:\nxp\GUI-Guider-1.10.1-GA\environment\mingw\lib
set PATH=c:\Users\user\Desktop\AUG4\lvgl-simulator\build\bin;%MINGW_BIN%;%MINGW_LIB%;%PATH%
set GCC="%MINGW_BIN%\gcc.exe"
set AR="%MINGW_BIN%\ar.exe"

cd /d "%~dp0lvgl-simulator"

taskkill /F /IM simulator.exe >nul 2>&1

echo Compiling custom and generated code...
%GCC% -O3 -g0 -I.. -I. -I./rlottie -I../lvgl -I../lvgl/src -DLV_CONF_INCLUDE_SIMPLE=1 -I../custom -I../generated -I../generated/guider_customer_fonts -I../generated/guider_fonts -I../generated/images -ISDL2/i686-w64-mingw32/include -c ../custom/custom.c -o build/object/generated/custom.o
%GCC% -O3 -g0 -I.. -I. -I./rlottie -I../lvgl -I../lvgl/src -DLV_CONF_INCLUDE_SIMPLE=1 -I../custom -I../generated -I../generated/guider_customer_fonts -I../generated/guider_fonts -I../generated/images -ISDL2/i686-w64-mingw32/include -c ../generated/events_init.c -o build/object/generated/events_init.o
%GCC% -O3 -g0 -I.. -I. -I./rlottie -I../lvgl -I../lvgl/src -DLV_CONF_INCLUDE_SIMPLE=1 -I../custom -I../generated -I../generated/guider_customer_fonts -I../generated/guider_fonts -I../generated/images -ISDL2/i686-w64-mingw32/include -c ../generated/setup_scr_screen_1.c -o build/object/generated/setup_scr_screen_1.o
%GCC% -O3 -g0 -I.. -I. -I./rlottie -I../lvgl -I../lvgl/src -DLV_CONF_INCLUDE_SIMPLE=1 -I../custom -I../generated -I../generated/guider_customer_fonts -I../generated/guider_fonts -I../generated/images -ISDL2/i686-w64-mingw32/include -c ../generated/setup_scr_screen.c -o build/object/generated/setup_scr_screen.o
%GCC% -O3 -g0 -I.. -I. -I./rlottie -I../lvgl -I../lvgl/src -DLV_CONF_INCLUDE_SIMPLE=1 -I../custom -I../generated -I../generated/guider_customer_fonts -I../generated/guider_fonts -I../generated/images -ISDL2/i686-w64-mingw32/include -c ../generated/gui_guider.c -o build/object/generated/gui_guider.o
%GCC% -O3 -g0 -I.. -I. -I./rlottie -I../lvgl -I../lvgl/src -DLV_CONF_INCLUDE_SIMPLE=1 -I../custom -I../generated -I../generated/guider_customer_fonts -I../generated/guider_fonts -I../generated/images -ISDL2/i686-w64-mingw32/include -c ../generated/widgets_init.c -o build/object/generated/widgets_init.o

echo Updating archive...
powershell -Command "$objs = (Get-ChildItem build/object/generated/*.o | Select-Object -ExpandProperty FullName); & '%MINGW_BIN%\ar.exe' -csr build/object/generated/libgenerated.a $objs"

echo Linking simulator.exe...
powershell -Command "$objs = (Get-ChildItem build/object/*.o | Select-Object -ExpandProperty FullName); & '%MINGW_BIN%\gcc.exe' -o build/bin/simulator.exe $objs -Lbuild/object/generated -lgenerated -lSDL2 -L../lib/native -ldecoder -lopenh264 -lrlottie -lpthread -lstdc++ -ljansson -lcurl -lm -LSDL2/i686-w64-mingw32/lib -L'%MINGW_LIB%'"

echo Copying required DLLs...
copy /Y SDL2\lib\SDL2.dll build\bin\SDL2.dll >nul
copy /Y multi_thread\libgcc_s_dw2-1.dll build\bin\libgcc_s_dw2-1.dll >nul
copy /Y multi_thread\pthreadGC-3.dll build\bin\pthreadGC-3.dll >nul
copy /Y multi_thread\libjansson-4.dll build\bin\libjansson-4.dll >nul
copy /Y multi_thread\libcurl.dll build\bin\libcurl.dll >nul
copy /Y SDL2\lib\libopenh264.dll build\bin\libopenh264.dll >nul

echo Launching Simulator...
cd /d "%~dp0lvgl-simulator\build\bin"
start "" simulator.exe
echo Simulator started!
