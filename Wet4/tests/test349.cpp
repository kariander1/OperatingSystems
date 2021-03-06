#include "aux_macro.h"
#include "../malloc_2.cpp"
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
                        PRINT_POINTER(smalloc(181););
printStats();
void* p0 = last_address;
PRINT_POINTER(srealloc(p0,38););
printStats();
void* p1 = last_address;
PRINT_POINTER(srealloc(p1,132););
printStats();
void* p2 = last_address;
PRINT_POINTER(scalloc(79,76););
printStats();
void* p3 = last_address;
DEBUG_PRINT(sfree(p2););
printStats();
PRINT_POINTER(srealloc(p3,86););
printStats();
void* p4 = last_address;
PRINT_POINTER(scalloc(48,227););
printStats();
void* p5 = last_address;
PRINT_POINTER(smalloc(50););
printStats();
void* p6 = last_address;
PRINT_POINTER(scalloc(53,117););
printStats();
void* p7 = last_address;
PRINT_POINTER(srealloc(p6,199););
printStats();
void* p8 = last_address;
DEBUG_PRINT(sfree(p8););
printStats();
PRINT_POINTER(smalloc(195););
printStats();
void* p9 = last_address;
DEBUG_PRINT(sfree(p9););
printStats();
DEBUG_PRINT(sfree(p4););
printStats();
PRINT_POINTER(scalloc(75,100););
printStats();
void* p10 = last_address;
DEBUG_PRINT(sfree(p7););
printStats();
PRINT_POINTER(srealloc(p5,14););
printStats();
void* p11 = last_address;
DEBUG_PRINT(sfree(p11););
printStats();
PRINT_POINTER(smalloc(4););
printStats();
void* p12 = last_address;
PRINT_POINTER(srealloc(p12,195););
printStats();
void* p13 = last_address;
PRINT_POINTER(scalloc(150,232););
printStats();
void* p14 = last_address;
PRINT_POINTER(smalloc(205););
printStats();
void* p15 = last_address;
PRINT_POINTER(smalloc(127););
printStats();
void* p16 = last_address;
PRINT_POINTER(smalloc(191););
printStats();
void* p17 = last_address;
PRINT_POINTER(srealloc(p17,91););
printStats();
void* p18 = last_address;
PRINT_POINTER(srealloc(p13,134););
printStats();
void* p19 = last_address;
PRINT_POINTER(scalloc(218,62););
printStats();
void* p20 = last_address;
PRINT_POINTER(scalloc(241,11););
printStats();
void* p21 = last_address;
DEBUG_PRINT(sfree(p15););
printStats();
PRINT_POINTER(scalloc(89,1););
printStats();
void* p22 = last_address;
PRINT_POINTER(scalloc(89,237););
printStats();
void* p23 = last_address;
PRINT_POINTER(srealloc(p20,41););
printStats();
void* p24 = last_address;
PRINT_POINTER(smalloc(18););
printStats();
void* p25 = last_address;
PRINT_POINTER(srealloc(p14,231););
printStats();
void* p26 = last_address;
DEBUG_PRINT(sfree(p26););
printStats();
PRINT_POINTER(smalloc(220););
printStats();
void* p27 = last_address;
PRINT_POINTER(smalloc(158););
printStats();
void* p28 = last_address;
PRINT_POINTER(scalloc(177,79););
printStats();
void* p29 = last_address;
PRINT_POINTER(srealloc(p28,80););
printStats();
void* p30 = last_address;
PRINT_POINTER(smalloc(47););
printStats();
void* p31 = last_address;
DEBUG_PRINT(sfree(p19););
printStats();
DEBUG_PRINT(sfree(p27););
printStats();
PRINT_POINTER(srealloc(p21,149););
printStats();
void* p32 = last_address;
PRINT_POINTER(srealloc(p30,190););
printStats();
void* p33 = last_address;
PRINT_POINTER(smalloc(43););
printStats();
void* p34 = last_address;
PRINT_POINTER(smalloc(237););
printStats();
void* p35 = last_address;
PRINT_POINTER(srealloc(p22,149););
printStats();
void* p36 = last_address;
PRINT_POINTER(srealloc(p24,131););
printStats();
void* p37 = last_address;
DEBUG_PRINT(sfree(p23););
printStats();
PRINT_POINTER(smalloc(21););
printStats();
void* p38 = last_address;
DEBUG_PRINT(sfree(p25););
printStats();
DEBUG_PRINT(sfree(p34););
printStats();
PRINT_POINTER(smalloc(120););
printStats();
void* p39 = last_address;
PRINT_POINTER(scalloc(9,221););
printStats();
void* p40 = last_address;
PRINT_POINTER(scalloc(205,216););
printStats();
void* p41 = last_address;
PRINT_POINTER(scalloc(85,27););
printStats();
void* p42 = last_address;
DEBUG_PRINT(sfree(p31););
printStats();
PRINT_POINTER(smalloc(37););
printStats();
void* p43 = last_address;
PRINT_POINTER(scalloc(182,0););
printStats();
void* p44 = last_address;
PRINT_POINTER(srealloc(p35,1););
printStats();
void* p45 = last_address;
PRINT_POINTER(smalloc(231););
printStats();
void* p46 = last_address;
PRINT_POINTER(scalloc(240,134););
printStats();
void* p47 = last_address;
PRINT_POINTER(smalloc(121););
printStats();
void* p48 = last_address;
PRINT_POINTER(smalloc(173););
printStats();
void* p49 = last_address;
DEBUG_PRINT(sfree(p36););
printStats();
PRINT_POINTER(scalloc(243,150););
printStats();
void* p50 = last_address;
PRINT_POINTER(scalloc(77,28););
printStats();
void* p51 = last_address;
PRINT_POINTER(scalloc(150,32););
printStats();
void* p52 = last_address;
DEBUG_PRINT(sfree(p51););
printStats();
PRINT_POINTER(scalloc(98,126););
printStats();
void* p53 = last_address;
PRINT_POINTER(smalloc(189););
printStats();
void* p54 = last_address;
PRINT_POINTER(smalloc(201););
printStats();
void* p55 = last_address;
PRINT_POINTER(scalloc(217,181););
printStats();
void* p56 = last_address;
PRINT_POINTER(scalloc(154,243););
printStats();
void* p57 = last_address;
PRINT_POINTER(srealloc(p18,18););
printStats();
void* p58 = last_address;
PRINT_POINTER(scalloc(72,83););
printStats();
void* p59 = last_address;
DEBUG_PRINT(sfree(p49););
printStats();
PRINT_POINTER(scalloc(201,103););
printStats();
void* p60 = last_address;
PRINT_POINTER(scalloc(157,204););
printStats();
void* p61 = last_address;
PRINT_POINTER(smalloc(153););
printStats();
void* p62 = last_address;
PRINT_POINTER(srealloc(p61,74););
printStats();
void* p63 = last_address;
PRINT_POINTER(smalloc(39););
printStats();
void* p64 = last_address;
PRINT_POINTER(srealloc(p64,114););
printStats();
void* p65 = last_address;
PRINT_POINTER(scalloc(109,88););
printStats();
void* p66 = last_address;
PRINT_POINTER(scalloc(84,249););
printStats();
void* p67 = last_address;
PRINT_POINTER(srealloc(p66,89););
printStats();
void* p68 = last_address;
PRINT_POINTER(srealloc(p58,54););
printStats();
void* p69 = last_address;
PRINT_POINTER(smalloc(235););
printStats();
void* p70 = last_address;
PRINT_POINTER(scalloc(198,20););
printStats();
void* p71 = last_address;
PRINT_POINTER(scalloc(195,147););
printStats();
void* p72 = last_address;
PRINT_POINTER(smalloc(209););
printStats();
void* p73 = last_address;
PRINT_POINTER(smalloc(78););
printStats();
void* p74 = last_address;
PRINT_POINTER(srealloc(p63,39););
printStats();
void* p75 = last_address;
DEBUG_PRINT(sfree(p38););
printStats();
PRINT_POINTER(scalloc(204,221););
printStats();
void* p76 = last_address;
PRINT_POINTER(smalloc(154););
printStats();
void* p77 = last_address;
PRINT_POINTER(smalloc(212););
printStats();
void* p78 = last_address;
DEBUG_PRINT(sfree(p52););
printStats();
PRINT_POINTER(scalloc(119,56););
printStats();
void* p79 = last_address;
PRINT_POINTER(scalloc(249,0););
printStats();
void* p80 = last_address;
PRINT_POINTER(smalloc(212););
printStats();
void* p81 = last_address;
PRINT_POINTER(srealloc(p72,157););
printStats();
void* p82 = last_address;
PRINT_POINTER(srealloc(p32,222););
printStats();
void* p83 = last_address;
DEBUG_PRINT(sfree(p50););
printStats();
PRINT_POINTER(scalloc(126,77););
printStats();
void* p84 = last_address;
PRINT_POINTER(smalloc(142););
printStats();
void* p85 = last_address;
PRINT_POINTER(srealloc(p79,199););
printStats();
void* p86 = last_address;
DEBUG_PRINT(sfree(p83););
printStats();
DEBUG_PRINT(sfree(p81););
printStats();
PRINT_POINTER(smalloc(105););
printStats();
void* p87 = last_address;
DEBUG_PRINT(sfree(p56););
printStats();
DEBUG_PRINT(sfree(p69););
printStats();
DEBUG_PRINT(sfree(p45););
printStats();
PRINT_POINTER(scalloc(161,209););
printStats();
void* p88 = last_address;
PRINT_POINTER(smalloc(66););
printStats();
void* p89 = last_address;
DEBUG_PRINT(sfree(p40););
printStats();
PRINT_POINTER(scalloc(38,167););
printStats();
void* p90 = last_address;
PRINT_POINTER(scalloc(231,0););
printStats();
void* p91 = last_address;
PRINT_POINTER(srealloc(p46,124););
printStats();
void* p92 = last_address;
PRINT_POINTER(srealloc(p90,220););
printStats();
void* p93 = last_address;
PRINT_POINTER(srealloc(p75,106););
printStats();
void* p94 = last_address;
PRINT_POINTER(srealloc(p33,48););
printStats();
void* p95 = last_address;
PRINT_POINTER(smalloc(188););
printStats();
void* p96 = last_address;
PRINT_POINTER(smalloc(208););
printStats();
void* p97 = last_address;
PRINT_POINTER(smalloc(172););
printStats();
void* p98 = last_address;
PRINT_POINTER(scalloc(232,145););
printStats();
void* p99 = last_address;
PRINT_POINTER(smalloc(179););
printStats();
void* p100 = last_address;
PRINT_POINTER(srealloc(p44,193););
printStats();
void* p101 = last_address;
PRINT_POINTER(srealloc(p68,113););
printStats();
void* p102 = last_address;
PRINT_POINTER(srealloc(p41,136););
printStats();
void* p103 = last_address;
DEBUG_PRINT(sfree(p98););
printStats();
PRINT_POINTER(scalloc(43,110););
printStats();
void* p104 = last_address;
DEBUG_PRINT(sfree(p99););
printStats();
DEBUG_PRINT(sfree(p55););
printStats();
PRINT_POINTER(srealloc(p102,249););
printStats();
void* p105 = last_address;
PRINT_POINTER(srealloc(p101,27););
printStats();
void* p106 = last_address;
PRINT_POINTER(smalloc(5););
printStats();
void* p107 = last_address;
PRINT_POINTER(srealloc(p107,244););
printStats();
void* p108 = last_address;
DEBUG_PRINT(sfree(p108););
printStats();
PRINT_POINTER(scalloc(182,133););
printStats();
void* p109 = last_address;
DEBUG_PRINT(sfree(p65););
printStats();
PRINT_POINTER(smalloc(48););
printStats();
void* p110 = last_address;
PRINT_POINTER(scalloc(46,194););
printStats();
void* p111 = last_address;
PRINT_POINTER(srealloc(p82,76););
printStats();
void* p112 = last_address;
PRINT_POINTER(scalloc(101,244););
printStats();
void* p113 = last_address;
}
