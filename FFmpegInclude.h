#ifndef FFMPEGINCLUDE_H
#define FFMPEGINCLUDE_H

#include <QDebug>
#define ERROR_LEN 1024  // 异常信息数组长度
#define PRINT_LOG 1
extern "C" {
#include <libavcodec/avcodec.h>
#include <libavdevice/avdevice.h>
#include <libavformat/avformat.h>
#include <libavutil/opt.h>
#include <libavutil/imgutils.h>
#include <libswscale/swscale.h>
#include <libswresample/swresample.h>
#include <libavutil/avutil.h>
#include <libavutil/rational.h>
#include <libavutil/time.h>
#include <libavutil/frame.h>
}


#endif // FFMPEGINCLUDE_H
