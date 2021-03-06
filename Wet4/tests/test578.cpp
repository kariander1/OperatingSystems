#include "aux_macro.h"
#include "../malloc_3.cpp"
#include <iostream>

void printStats()
                    {
                        std::cout << "_num_free_blocks: " << _num_free_blocks() << std::endl;
                        std::cout << "_num_free_bytes: " << _num_free_bytes() << std::endl;
                        std::cout << "_num_allocated_blocks: " << _num_allocated_blocks() << std::endl;
                        std::cout << "_num_allocated_bytes: " << _num_allocated_bytes() << std::endl;
                        std::cout << "_num_meta_data_bytes: " << _num_meta_data_bytes() << std::endl;
                        std::cout << "_size_meta_data: " << _size_meta_data() << std::endl;
                    }
                    int main()
                    {
                        PRINT_POINTER(scalloc(84,158););
printStats();
void* p0 = last_address;
DEBUG_PRINT(sfree(p0););
printStats();
PRINT_POINTER(smalloc(164););
printStats();
void* p1 = last_address;
DEBUG_PRINT(sfree(p1););
printStats();
PRINT_POINTER(scalloc(172,234););
printStats();
void* p2 = last_address;
DEBUG_PRINT(sfree(p2););
printStats();
PRINT_POINTER(smalloc(102););
printStats();
void* p3 = last_address;
PRINT_POINTER(smalloc(54););
printStats();
void* p4 = last_address;
PRINT_POINTER(smalloc(141););
printStats();
void* p5 = last_address;
PRINT_POINTER(srealloc(p3,146););
printStats();
void* p6 = last_address;
PRINT_POINTER(smalloc(128););
printStats();
void* p7 = last_address;
PRINT_POINTER(srealloc(p5,229););
printStats();
void* p8 = last_address;
DEBUG_PRINT(sfree(p8););
printStats();
DEBUG_PRINT(sfree(p4););
printStats();
DEBUG_PRINT(sfree(p7););
printStats();
PRINT_POINTER(srealloc(p6,66););
printStats();
void* p9 = last_address;
PRINT_POINTER(scalloc(82,74););
printStats();
void* p10 = last_address;
PRINT_POINTER(smalloc(125););
printStats();
void* p11 = last_address;
DEBUG_PRINT(sfree(p10););
printStats();
PRINT_POINTER(smalloc(235););
printStats();
void* p12 = last_address;
PRINT_POINTER(smalloc(74););
printStats();
void* p13 = last_address;
PRINT_POINTER(smalloc(52););
printStats();
void* p14 = last_address;
DEBUG_PRINT(sfree(p13););
printStats();
DEBUG_PRINT(sfree(p11););
printStats();
PRINT_POINTER(scalloc(172,188););
printStats();
void* p15 = last_address;
PRINT_POINTER(scalloc(79,202););
printStats();
void* p16 = last_address;
PRINT_POINTER(srealloc(p15,209););
printStats();
void* p17 = last_address;
PRINT_POINTER(srealloc(p16,168););
printStats();
void* p18 = last_address;
PRINT_POINTER(smalloc(86););
printStats();
void* p19 = last_address;
PRINT_POINTER(srealloc(p14,35););
printStats();
void* p20 = last_address;
DEBUG_PRINT(sfree(p20););
printStats();
DEBUG_PRINT(sfree(p17););
printStats();
PRINT_POINTER(smalloc(78););
printStats();
void* p21 = last_address;
PRINT_POINTER(smalloc(7););
printStats();
void* p22 = last_address;
PRINT_POINTER(srealloc(p19,17););
printStats();
void* p23 = last_address;
PRINT_POINTER(srealloc(p22,11););
printStats();
void* p24 = last_address;
PRINT_POINTER(scalloc(44,138););
printStats();
void* p25 = last_address;
PRINT_POINTER(smalloc(226););
printStats();
void* p26 = last_address;
PRINT_POINTER(smalloc(208););
printStats();
void* p27 = last_address;
PRINT_POINTER(smalloc(130););
printStats();
void* p28 = last_address;
PRINT_POINTER(srealloc(p18,166););
printStats();
void* p29 = last_address;
PRINT_POINTER(scalloc(205,123););
printStats();
void* p30 = last_address;
DEBUG_PRINT(sfree(p28););
printStats();
PRINT_POINTER(srealloc(p29,16););
printStats();
void* p31 = last_address;
PRINT_POINTER(smalloc(179););
printStats();
void* p32 = last_address;
PRINT_POINTER(smalloc(194););
printStats();
void* p33 = last_address;
PRINT_POINTER(scalloc(93,157););
printStats();
void* p34 = last_address;
PRINT_POINTER(scalloc(186,53););
printStats();
void* p35 = last_address;
PRINT_POINTER(srealloc(p9,23););
printStats();
void* p36 = last_address;
PRINT_POINTER(scalloc(64,124););
printStats();
void* p37 = last_address;
PRINT_POINTER(scalloc(48,163););
printStats();
void* p38 = last_address;
PRINT_POINTER(scalloc(77,200););
printStats();
void* p39 = last_address;
PRINT_POINTER(scalloc(50,71););
printStats();
void* p40 = last_address;
PRINT_POINTER(scalloc(248,75););
printStats();
void* p41 = last_address;
PRINT_POINTER(srealloc(p35,217););
printStats();
void* p42 = last_address;
PRINT_POINTER(scalloc(202,169););
printStats();
void* p43 = last_address;
DEBUG_PRINT(sfree(p37););
printStats();
PRINT_POINTER(smalloc(193););
printStats();
void* p44 = last_address;
PRINT_POINTER(srealloc(p33,97););
printStats();
void* p45 = last_address;
PRINT_POINTER(scalloc(65,76););
printStats();
void* p46 = last_address;
DEBUG_PRINT(sfree(p25););
printStats();
PRINT_POINTER(srealloc(p43,141););
printStats();
void* p47 = last_address;
DEBUG_PRINT(sfree(p31););
printStats();
PRINT_POINTER(srealloc(p21,131););
printStats();
void* p48 = last_address;
DEBUG_PRINT(sfree(p30););
printStats();
PRINT_POINTER(scalloc(219,123););
printStats();
void* p49 = last_address;
PRINT_POINTER(smalloc(95););
printStats();
void* p50 = last_address;
PRINT_POINTER(scalloc(217,17););
printStats();
void* p51 = last_address;
PRINT_POINTER(scalloc(84,61););
printStats();
void* p52 = last_address;
PRINT_POINTER(scalloc(135,149););
printStats();
void* p53 = last_address;
PRINT_POINTER(scalloc(180,117););
printStats();
void* p54 = last_address;
PRINT_POINTER(smalloc(239););
printStats();
void* p55 = last_address;
DEBUG_PRINT(sfree(p44););
printStats();
PRINT_POINTER(smalloc(79););
printStats();
void* p56 = last_address;
PRINT_POINTER(smalloc(200););
printStats();
void* p57 = last_address;
PRINT_POINTER(smalloc(183););
printStats();
void* p58 = last_address;
PRINT_POINTER(srealloc(p36,83););
printStats();
void* p59 = last_address;
PRINT_POINTER(smalloc(71););
printStats();
void* p60 = last_address;
DEBUG_PRINT(sfree(p51););
printStats();
PRINT_POINTER(scalloc(54,70););
printStats();
void* p61 = last_address;
PRINT_POINTER(srealloc(p27,15););
printStats();
void* p62 = last_address;
PRINT_POINTER(srealloc(p34,241););
printStats();
void* p63 = last_address;
PRINT_POINTER(srealloc(p63,38););
printStats();
void* p64 = last_address;
PRINT_POINTER(scalloc(241,149););
printStats();
void* p65 = last_address;
PRINT_POINTER(srealloc(p23,240););
printStats();
void* p66 = last_address;
PRINT_POINTER(srealloc(p62,187););
printStats();
void* p67 = last_address;
PRINT_POINTER(scalloc(140,104););
printStats();
void* p68 = last_address;
PRINT_POINTER(scalloc(54,148););
printStats();
void* p69 = last_address;
PRINT_POINTER(scalloc(197,2););
printStats();
void* p70 = last_address;
PRINT_POINTER(smalloc(240););
printStats();
void* p71 = last_address;
PRINT_POINTER(scalloc(219,70););
printStats();
void* p72 = last_address;
PRINT_POINTER(smalloc(110););
printStats();
void* p73 = last_address;
DEBUG_PRINT(sfree(p72););
printStats();
DEBUG_PRINT(sfree(p46););
printStats();
PRINT_POINTER(scalloc(24,192););
printStats();
void* p74 = last_address;
PRINT_POINTER(smalloc(161););
printStats();
void* p75 = last_address;
DEBUG_PRINT(sfree(p66););
printStats();
DEBUG_PRINT(sfree(p58););
printStats();
PRINT_POINTER(scalloc(71,178););
printStats();
void* p76 = last_address;
PRINT_POINTER(smalloc(227););
printStats();
void* p77 = last_address;
PRINT_POINTER(smalloc(164););
printStats();
void* p78 = last_address;
DEBUG_PRINT(sfree(p52););
printStats();
DEBUG_PRINT(sfree(p55););
printStats();
PRINT_POINTER(smalloc(100););
printStats();
void* p79 = last_address;
DEBUG_PRINT(sfree(p54););
printStats();
PRINT_POINTER(smalloc(164););
printStats();
void* p80 = last_address;
PRINT_POINTER(scalloc(171,104););
printStats();
void* p81 = last_address;
PRINT_POINTER(smalloc(63););
printStats();
void* p82 = last_address;
DEBUG_PRINT(sfree(p69););
printStats();
PRINT_POINTER(srealloc(p53,47););
printStats();
void* p83 = last_address;
DEBUG_PRINT(sfree(p48););
printStats();
PRINT_POINTER(srealloc(p49,206););
printStats();
void* p84 = last_address;
PRINT_POINTER(scalloc(46,185););
printStats();
void* p85 = last_address;
DEBUG_PRINT(sfree(p42););
printStats();
PRINT_POINTER(scalloc(241,64););
printStats();
void* p86 = last_address;
PRINT_POINTER(srealloc(p70,100););
printStats();
void* p87 = last_address;
PRINT_POINTER(smalloc(106););
printStats();
void* p88 = last_address;
PRINT_POINTER(smalloc(237););
printStats();
void* p89 = last_address;
PRINT_POINTER(smalloc(78););
printStats();
void* p90 = last_address;
PRINT_POINTER(smalloc(247););
printStats();
void* p91 = last_address;
}
