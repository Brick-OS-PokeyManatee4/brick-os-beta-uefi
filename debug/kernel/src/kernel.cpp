#include <stdint.h>
#include "BasicRenderer.h"
#include "cstr.h"


extern "C" void _start(Framebuffer* framebuffer, PSF1_FONT* psf1_font){
    
    BasicRenderer newRenderer = BasicRenderer(framebuffer, psf1_font); 
    newRenderer.Print("Brick OS Debug Kernel");
    newRenderer.Print("© 2022 The Brick OS Team");
    newRenderer.Print("Brick OS Debug Kernel Loaded");
    return ;
}
