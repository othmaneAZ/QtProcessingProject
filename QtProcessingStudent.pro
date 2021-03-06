TEMPLATE = app
TARGET = QtProcessing

QMAKE_CXXFLAGS= -O2 \
       -march=native -mtune=native -pipe -fomit-frame-pointer \
       -fprefetch-loop-arrays -I/opt/local/include -I/usr/include/opencv

LIBS += -lopencv_shape -lopencv_stitching -lopencv_superres -lopencv_videostab -lopencv_aruco\
 -lopencv_bgsegm -lopencv_bioinspired -lopencv_ccalib -lopencv_datasets -lopencv_dpm -lopencv_face\
 -lopencv_freetype -lopencv_fuzzy -lopencv_hdf -lopencv_line_descriptor -lopencv_optflow -lopencv_video\
 -lopencv_plot -lopencv_reg -lopencv_saliency -lopencv_stereo -lopencv_structured_light -lopencv_phase_unwrapping\
 -lopencv_rgbd -lopencv_viz -lopencv_surface_matching -lopencv_text -lopencv_ximgproc -lopencv_calib3d -lopencv_features2d\
 -lopencv_flann -lopencv_xobjdetect -lopencv_objdetect -lopencv_ml -lopencv_xphoto -lopencv_highgui -lopencv_videoio\
 -lopencv_imgcodecs -lopencv_photo -lopencv_imgproc -lopencv_core
QT       += core gui opengl network

HEADERS += src/playerinterface.h \
    src/openglwidget.h \
    src/Image/FImage.h \
    src/Image/CVideo.h \
    src/Image/Filters/filter.h \
    src/Image/Filters/LinearFilters/linearfilter.h \
    src/Image/Filters/SamplingFilters/samplingfilter.h \
    src/Image/Filters/ComplexFiltes/complexfilters.h \
    src/Image/Filters/LinearFilters/redchannel.h \
    src/Image/Filters/LinearFilters/greenchannel.h \
    src/Image/Filters/LinearFilters/bluechannel.h \
    src/Image/Filters/LinearFilters/greychannel.h \
    src/Image/Filters/LinearFilters/reliablegreychannel.h \
    src/Image/Filters/SamplingFilters/downsample.h \
    src/Image/Filters/SamplingFilters/lineardownsample.h \
    src/Image/Filters/SamplingFilters/cubicdownsample.h \
    src/Image/Filters/SamplingFilters/upsample.h \
    src/Image/Filters/SamplingFilters/linearupsample.h \
    src/Image/Filters/SamplingFilters/cubicupsample.h \
    src/Image/Filters/OtherFilters/blur.h \
    src/Image/Filters/ConvFilters/Convfilter.h \
    src/Image/Filters/ConvFilters/M0.h \
    src/Image/Filters/ConvFilters/M1.h \
    src/Image/Filters/ConvFilters/M2.h \
    src/Image/Filters/ConvFilters/M3.h \
    src/Image/Filters/ConvFilters/M4.h \
    src/Image/Filters/ConvFilters/M5.h \
    src/Image/Filters/ConvFilters/M6.h \
    src/Image/Filters/ConvFilters/M7.h \
    src/Image/Filters/ConvFilters/M8.h \
    src/Image/Filters/ConvFilters/B0.h \
    src/Image/Filters/ConvFilters/B1.h \
    src/Image/Filters/ConvFilters/B2.h \
    src/Image/Filters/ConvFilters/B3.h \
    src/Image/Filters/ConvFilters/M9.h
SOURCES += src/playerinterface.cpp \
    src/openglwidget.cpp \
    src/main.cpp \
    src/Image/FImage.cpp \
    src/Image/CVideo.cpp \
    src/Image/Filters/filter.cpp \
    src/Image/Filters/LinearFilters/linearfilter.cpp \
    src/Image/Filters/SamplingFilters/samplingfilter.cpp \
    src/Image/Filters/ComplexFiltes/complexfilters.cpp \
    src/Image/Filters/LinearFilters/redchannel.cpp \
    src/Image/Filters/LinearFilters/greenchannel.cpp \
    src/Image/Filters/LinearFilters/bluechannel.cpp \
    src/Image/Filters/LinearFilters/greychannel.cpp \
    src/Image/Filters/LinearFilters/reliablegreychannel.cpp \
    src/Image/Filters/SamplingFilters/downsample.cpp \
    src/Image/Filters/SamplingFilters/lineardownsample.cpp \
    src/Image/Filters/SamplingFilters/cubicdownsample.cpp \
    src/Image/Filters/SamplingFilters/upsample.cpp \
    src/Image/Filters/SamplingFilters/linearupsample.cpp \
    src/Image/Filters/SamplingFilters/cubicupsample.cpp \
    src/Image/Filters/OtherFilters/blur.cpp \
    src/Image/Filters/ConvFilters/Convfilter.cpp \
    src/Image/Filters/ConvFilters/M0.cpp \
    src/Image/Filters/ConvFilters/M1.cpp \
    src/Image/Filters/ConvFilters/M2.cpp \
    src/Image/Filters/ConvFilters/M3.cpp \
    src/Image/Filters/ConvFilters/M4.cpp \
    src/Image/Filters/ConvFilters/M5.cpp \
    src/Image/Filters/ConvFilters/M6.cpp \
    src/Image/Filters/ConvFilters/M7.cpp \
    src/Image/Filters/ConvFilters/M8.cpp \
    src/Image/Filters/ConvFilters/B0.cpp \
    src/Image/Filters/ConvFilters/B1.cpp \
    src/Image/Filters/ConvFilters/B2.cpp \
    src/Image/Filters/ConvFilters/B3.cpp \
    src/Image/Filters/ConvFilters/M9.cpp
RESOURCES +=
FORMS +=
