#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include"FFmpegInclude.h"

#define WIDTH  1280
#define HEIGHT 720
#define FPS    30
#define RTMP_URL "rtmp://127.0.0.1:10035/live"

int main(int argc, char *argv[]) {
    AVFormatContext *format_ctx = NULL;
    AVInputFormat *input_fmt = NULL;
    const char *input_device = "desktop";
    const char *input_format_name = "gdigrab";
    int ret;

    // Register all FFmpeg components
    av_register_all();

    // Find input format by name
    input_fmt = av_find_input_format(input_format_name);
    if (!input_fmt) {
        fprintf(stderr, "Could not find input format: %s\n", input_format_name);
        return 1;
    }

    // Open video input
    ret = avformat_open_input(&format_ctx, input_device, input_fmt, NULL);
    if (ret < 0) {
        char errors[1024];
        av_strerror(ret, errors, sizeof(errors));
        fprintf(stderr, "Failed to open video input: %s\n", errors);
        return 1;
    }

    // Find video stream information
    ret = avformat_find_stream_info(format_ctx, NULL);
    if (ret < 0) {
        fprintf(stderr, "Failed to find stream information\n");
        return 1;
    }

    // Print information about the input format
    av_dump_format(format_ctx, 0, input_device, 0);

    // Close input
    avformat_close_input(&format_ctx);

    return 0;
}
