#include <stdint.h>
#include "BasicRenderer.h"
#include "cstr.h"

struct BootInfo {
    Framebuffer* framebuffer;
    PSF1_FONT* psf1_Font;
    void* mMap;
    uint64_t mMapSize;
    uint64_t mMapDescSize;
} ;


extern "C" void _start(BootInfo* bootInfo){
    
    BasicRenderer newRenderer = BasicRenderer(bootInfo->framebuffer, bootInfo->psf1_font); 
    newRenderer.Print("© 2022 The Brick OS Team");
    return ;
}
