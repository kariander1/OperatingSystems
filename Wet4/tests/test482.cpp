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
                        PRINT_POINTER(scalloc(34,67););
printStats();
void* p0 = last_address;
PRINT_POINTER(srealloc(p0,90););
printStats();
void* p1 = last_address;
PRINT_POINTER(scalloc(246,75););
printStats();
void* p2 = last_address;
DEBUG_PRINT(sfree(p1););
printStats();
PRINT_POINTER(scalloc(147,192););
printStats();
void* p3 = last_address;
PRINT_POINTER(srealloc(p2,219););
printStats();
void* p4 = last_address;
DEBUG_PRINT(sfree(p4););
printStats();
PRINT_POINTER(srealloc(p3,152););
printStats();
void* p5 = last_address;
PRINT_POINTER(smalloc(209););
printStats();
void* p6 = last_address;
PRINT_POINTER(smalloc(243););
printStats();
void* p7 = last_address;
PRINT_POINTER(smalloc(31););
printStats();
void* p8 = last_address;
PRINT_POINTER(smalloc(143););
printStats();
void* p9 = last_address;
PRINT_POINTER(scalloc(190,49););
printStats();
void* p10 = last_address;
DEBUG_PRINT(sfree(p9););
printStats();
PRINT_POINTER(smalloc(115););
printStats();
void* p11 = last_address;
PRINT_POINTER(srealloc(p5,141););
printStats();
void* p12 = last_address;
DEBUG_PRINT(sfree(p11););
printStats();
DEBUG_PRINT(sfree(p7););
printStats();
DEBUG_PRINT(sfree(p10););
printStats();
PRINT_POINTER(smalloc(192););
printStats();
void* p13 = last_address;
PRINT_POINTER(srealloc(p12,25););
printStats();
void* p14 = last_address;
PRINT_POINTER(smalloc(84););
printStats();
void* p15 = last_address;
PRINT_POINTER(srealloc(p14,93););
printStats();
void* p16 = last_address;
PRINT_POINTER(smalloc(108););
printStats();
void* p17 = last_address;
PRINT_POINTER(srealloc(p16,37););
printStats();
void* p18 = last_address;
PRINT_POINTER(scalloc(202,181););
printStats();
void* p19 = last_address;
PRINT_POINTER(scalloc(120,30););
printStats();
void* p20 = last_address;
DEBUG_PRINT(sfree(p20););
printStats();
PRINT_POINTER(srealloc(p19,38););
printStats();
void* p21 = last_address;
DEBUG_PRINT(sfree(p21););
printStats();
DEBUG_PRINT(sfree(p17););
printStats();
DEBUG_PRINT(sfree(p18););
printStats();
DEBUG_PRINT(sfree(p13););
printStats();
DEBUG_PRINT(sfree(p8););
printStats();
PRINT_POINTER(srealloc(p15,117););
printStats();
void* p22 = last_address;
PRINT_POINTER(scalloc(105,127););
printStats();
void* p23 = last_address;
PRINT_POINTER(smalloc(103););
printStats();
void* p24 = last_address;
PRINT_POINTER(smalloc(6););
printStats();
void* p25 = last_address;
PRINT_POINTER(smalloc(96););
printStats();
void* p26 = last_address;
PRINT_POINTER(scalloc(150,216););
printStats();
void* p27 = last_address;
PRINT_POINTER(smalloc(244););
printStats();
void* p28 = last_address;
PRINT_POINTER(scalloc(101,67););
printStats();
void* p29 = last_address;
DEBUG_PRINT(sfree(p6););
printStats();
PRINT_POINTER(srealloc(p29,72););
printStats();
void* p30 = last_address;
PRINT_POINTER(scalloc(233,1););
printStats();
void* p31 = last_address;
PRINT_POINTER(srealloc(p23,120););
printStats();
void* p32 = last_address;
DEBUG_PRINT(sfree(p31););
printStats();
PRINT_POINTER(srealloc(p28,43););
printStats();
void* p33 = last_address;
PRINT_POINTER(scalloc(15,14););
printStats();
void* p34 = last_address;
PRINT_POINTER(srealloc(p32,142););
printStats();
void* p35 = last_address;
PRINT_POINTER(scalloc(209,235););
printStats();
void* p36 = last_address;
PRINT_POINTER(scalloc(132,38););
printStats();
void* p37 = last_address;
DEBUG_PRINT(sfree(p34););
printStats();
DEBUG_PRINT(sfree(p30););
printStats();
PRINT_POINTER(scalloc(152,164););
printStats();
void* p38 = last_address;
PRINT_POINTER(srealloc(p38,131););
printStats();
void* p39 = last_address;
DEBUG_PRINT(sfree(p22););
printStats();
PRINT_POINTER(srealloc(p24,210););
printStats();
void* p40 = last_address;
DEBUG_PRINT(sfree(p35););
printStats();
PRINT_POINTER(scalloc(146,177););
printStats();
void* p41 = last_address;
DEBUG_PRINT(sfree(p39););
printStats();
DEBUG_PRINT(sfree(p41););
printStats();
PRINT_POINTER(scalloc(197,133););
printStats();
void* p42 = last_address;
PRINT_POINTER(smalloc(145););
printStats();
void* p43 = last_address;
DEBUG_PRINT(sfree(p25););
printStats();
DEBUG_PRINT(sfree(p42););
printStats();
DEBUG_PRINT(sfree(p27););
printStats();
DEBUG_PRINT(sfree(p36););
printStats();
DEBUG_PRINT(sfree(p37););
printStats();
PRINT_POINTER(smalloc(11););
printStats();
void* p44 = last_address;
PRINT_POINTER(smalloc(53););
printStats();
void* p45 = last_address;
PRINT_POINTER(srealloc(p26,7););
printStats();
void* p46 = last_address;
PRINT_POINTER(smalloc(163););
printStats();
void* p47 = last_address;
PRINT_POINTER(srealloc(p45,73););
printStats();
void* p48 = last_address;
PRINT_POINTER(srealloc(p48,204););
printStats();
void* p49 = last_address;
PRINT_POINTER(scalloc(27,223););
printStats();
void* p50 = last_address;
DEBUG_PRINT(sfree(p40););
printStats();
PRINT_POINTER(scalloc(18,111););
printStats();
void* p51 = last_address;
DEBUG_PRINT(sfree(p33););
printStats();
PRINT_POINTER(srealloc(p44,40););
printStats();
void* p52 = last_address;
DEBUG_PRINT(sfree(p52););
printStats();
DEBUG_PRINT(sfree(p49););
printStats();
PRINT_POINTER(srealloc(p50,99););
printStats();
void* p53 = last_address;
PRINT_POINTER(srealloc(p51,119););
printStats();
void* p54 = last_address;
PRINT_POINTER(smalloc(212););
printStats();
void* p55 = last_address;
PRINT_POINTER(scalloc(188,219););
printStats();
void* p56 = last_address;
PRINT_POINTER(scalloc(1,135););
printStats();
void* p57 = last_address;
PRINT_POINTER(scalloc(228,11););
printStats();
void* p58 = last_address;
PRINT_POINTER(scalloc(23,239););
printStats();
void* p59 = last_address;
PRINT_POINTER(scalloc(179,27););
printStats();
void* p60 = last_address;
PRINT_POINTER(smalloc(150););
printStats();
void* p61 = last_address;
PRINT_POINTER(scalloc(22,53););
printStats();
void* p62 = last_address;
DEBUG_PRINT(sfree(p61););
printStats();
PRINT_POINTER(smalloc(194););
printStats();
void* p63 = last_address;
PRINT_POINTER(srealloc(p43,169););
printStats();
void* p64 = last_address;
DEBUG_PRINT(sfree(p57););
printStats();
PRINT_POINTER(smalloc(170););
printStats();
void* p65 = last_address;
PRINT_POINTER(srealloc(p63,15););
printStats();
void* p66 = last_address;
DEBUG_PRINT(sfree(p62););
printStats();
PRINT_POINTER(smalloc(239););
printStats();
void* p67 = last_address;
DEBUG_PRINT(sfree(p59););
printStats();
PRINT_POINTER(smalloc(69););
printStats();
void* p68 = last_address;
PRINT_POINTER(smalloc(79););
printStats();
void* p69 = last_address;
DEBUG_PRINT(sfree(p46););
printStats();
PRINT_POINTER(smalloc(224););
printStats();
void* p70 = last_address;
PRINT_POINTER(srealloc(p55,15););
printStats();
void* p71 = last_address;
PRINT_POINTER(scalloc(97,220););
printStats();
void* p72 = last_address;
DEBUG_PRINT(sfree(p64););
printStats();
PRINT_POINTER(srealloc(p53,187););
printStats();
void* p73 = last_address;
DEBUG_PRINT(sfree(p72););
printStats();
PRINT_POINTER(srealloc(p65,222););
printStats();
void* p74 = last_address;
DEBUG_PRINT(sfree(p67););
printStats();
PRINT_POINTER(smalloc(98););
printStats();
void* p75 = last_address;
DEBUG_PRINT(sfree(p66););
printStats();
DEBUG_PRINT(sfree(p70););
printStats();
PRINT_POINTER(scalloc(126,30););
printStats();
void* p76 = last_address;
PRINT_POINTER(srealloc(p73,230););
printStats();
void* p77 = last_address;
DEBUG_PRINT(sfree(p74););
printStats();
PRINT_POINTER(smalloc(194););
printStats();
void* p78 = last_address;
PRINT_POINTER(smalloc(53););
printStats();
void* p79 = last_address;
PRINT_POINTER(smalloc(91););
printStats();
void* p80 = last_address;
PRINT_POINTER(smalloc(230););
printStats();
void* p81 = last_address;
PRINT_POINTER(smalloc(111););
printStats();
void* p82 = last_address;
PRINT_POINTER(smalloc(23););
printStats();
void* p83 = last_address;
PRINT_POINTER(smalloc(245););
printStats();
void* p84 = last_address;
PRINT_POINTER(srealloc(p71,215););
printStats();
void* p85 = last_address;
PRINT_POINTER(smalloc(130););
printStats();
void* p86 = last_address;
PRINT_POINTER(scalloc(220,165););
printStats();
void* p87 = last_address;
PRINT_POINTER(smalloc(70););
printStats();
void* p88 = last_address;
PRINT_POINTER(scalloc(104,235););
printStats();
void* p89 = last_address;
DEBUG_PRINT(sfree(p84););
printStats();
PRINT_POINTER(scalloc(174,146););
printStats();
void* p90 = last_address;
PRINT_POINTER(smalloc(11););
printStats();
void* p91 = last_address;
DEBUG_PRINT(sfree(p54););
printStats();
PRINT_POINTER(srealloc(p68,198););
printStats();
void* p92 = last_address;
PRINT_POINTER(scalloc(56,57););
printStats();
void* p93 = last_address;
PRINT_POINTER(scalloc(94,46););
printStats();
void* p94 = last_address;
DEBUG_PRINT(sfree(p80););
printStats();
PRINT_POINTER(scalloc(197,169););
printStats();
void* p95 = last_address;
PRINT_POINTER(srealloc(p83,100););
printStats();
void* p96 = last_address;
PRINT_POINTER(srealloc(p92,85););
printStats();
void* p97 = last_address;
PRINT_POINTER(srealloc(p93,213););
printStats();
void* p98 = last_address;
PRINT_POINTER(srealloc(p81,89););
printStats();
void* p99 = last_address;
PRINT_POINTER(smalloc(176););
printStats();
void* p100 = last_address;
PRINT_POINTER(srealloc(p89,247););
printStats();
void* p101 = last_address;
}
