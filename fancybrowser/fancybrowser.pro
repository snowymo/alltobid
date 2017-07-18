QT      +=  webkitwidgets network widgets
HEADERS =   mainwindow.h
SOURCES =   main.cpp \
            mainwindow.cpp
RESOURCES = jquery.qrc

# install
target.path = $$[QT_INSTALL_EXAMPLES]/webkitwidgets/fancybrowser
INSTALLS += target

INCLUDEPATH += C:\Zhenyi\Library\opencv_3.2.0\sources\qt-build_5.5\install\include

LIBS += C:\Zhenyi\Library\opencv_3.2.0\sources\qt-build_5.5\bin\libopencv_core320.dll
LIBS += C:\Zhenyi\Library\opencv_3.2.0\sources\qt-build_5.5\bin\libopencv_highgui320.dll
LIBS += C:\Zhenyi\Library\opencv_3.2.0\sources\qt-build_5.5\bin\libopencv_imgcodecs320.dll
LIBS += C:\Zhenyi\Library\opencv_3.2.0\sources\qt-build_5.5\bin\libopencv_imgproc320.dll
LIBS += C:\Zhenyi\Library\opencv_3.2.0\sources\qt-build_5.5\bin\libopencv_features2d320.dll
LIBS += C:\Zhenyi\Library\opencv_3.2.0\sources\qt-build_5.5\bin\libopencv_calib3d320.dll
