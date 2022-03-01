#include <stdbool.h>
#include <stdint.h>
#include "BasicRenderer.h"
#include "cstr.h"


extern "C" void _start(Framebuffer* framebuffer, PSF1_FONT* psf1_font){
    
    BasicRenderer newRenderer = BasicRenderer(framebuffer, psf1_font); 
    newRenderer.Print("Brick OS Kernel Loaded");
    return ;
}
