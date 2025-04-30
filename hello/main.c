#include <stdio.h>
#include <string.h>
#include <assert.h>

#define CL_TARGET_OPENCL_VERSION 300
#include <CL/cl.h>
#include <CL/cl_ext.h>

// ファイル内グローバル変数を定義
static cl_device_id device_id;
static cl_context context = NULL;
static cl_command_queue queue = NULL;
static cl_program program = NULL;
static cl_kernel kernel = NULL;

// ファイル内ローカル関数のプロトタイプ宣言
static void set_work_size(size_t *ws, cl_int x, cl_int y);

#define MAKE_STRING(x) #x
#define MAX_PLATFORM_NUM 4
#define MAX_GPU_UNIT 4
#define KERNEL_FUNC "kernel_hello"

// カーネル関数のソースコード
const char *kernel_code = MAKE_STRING(
    __kernel void kernel_hello(void) {
        printf("[Kernel] Hello, OpenCL!\n");
    }
);

int main(int argc, char **argv) {
    printf("Hello, OpenCL!\n");
    char device_vendor[40];
}