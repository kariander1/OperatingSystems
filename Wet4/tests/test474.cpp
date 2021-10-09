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
                        PRINT_POINTER(smalloc(244););
printStats();
void* p0 = last_address;
DEBUG_PRINT(sfree(p0););
printStats();
PRINT_POINTER(smalloc(125););
printStats();
void* p1 = last_address;
PRINT_POINTER(scalloc(126,217););
printStats();
void* p2 = last_address;
PRINT_POINTER(scalloc(40,203););
printStats();
void* p3 = last_address;
DEBUG_PRINT(sfree(p2););
printStats();
PRINT_POINTER(scalloc(243,57););
printStats();
void* p4 = last_address;
PRINT_POINTER(srealloc(p1,207););
printStats();
void* p5 = last_address;
PRINT_POINTER(smalloc(198););
printStats();
void* p6 = last_address;
PRINT_POINTER(smalloc(221););
printStats();
void* p7 = last_address;
PRINT_POINTER(srealloc(p4,33););
printStats();
void* p8 = last_address;
PRINT_POINTER(scalloc(127,233););
printStats();
void* p9 = last_address;
PRINT_POINTER(srealloc(p3,15););
printStats();
void* p10 = last_address;
PRINT_POINTER(smalloc(126););
printStats();
void* p11 = last_address;
PRINT_POINTER(srealloc(p10,3););
printStats();
void* p12 = last_address;
DEBUG_PRINT(sfree(p11););
printStats();
PRINT_POINTER(smalloc(244););
printStats();
void* p13 = last_address;
PRINT_POINTER(srealloc(p13,120););
printStats();
void* p14 = last_address;
PRINT_POINTER(smalloc(134););
printStats();
void* p15 = last_address;
PRINT_POINTER(srealloc(p8,73););
printStats();
void* p16 = last_address;
PRINT_POINTER(smalloc(84););
printStats();
void* p17 = last_address;
PRINT_POINTER(srealloc(p17,207););
printStats();
void* p18 = last_address;
PRINT_POINTER(scalloc(205,240););
printStats();
void* p19 = last_address;
PRINT_POINTER(smalloc(231););
printStats();
void* p20 = last_address;
PRINT_POINTER(scalloc(201,249););
printStats();
void* p21 = last_address;
DEBUG_PRINT(sfree(p18););
printStats();
PRINT_POINTER(smalloc(187););
printStats();
void* p22 = last_address;
DEBUG_PRINT(sfree(p5););
printStats();
PRINT_POINTER(srealloc(p9,54););
printStats();
void* p23 = last_address;
PRINT_POINTER(srealloc(p16,175););
printStats();
void* p24 = last_address;
PRINT_POINTER(scalloc(54,54););
printStats();
void* p25 = last_address;
PRINT_POINTER(scalloc(140,174););
printStats();
void* p26 = last_address;
PRINT_POINTER(scalloc(246,53););
printStats();
void* p27 = last_address;
PRINT_POINTER(srealloc(p15,108););
printStats();
void* p28 = last_address;
PRINT_POINTER(smalloc(52););
printStats();
void* p29 = last_address;
PRINT_POINTER(smalloc(224););
printStats();
void* p30 = last_address;
DEBUG_PRINT(sfree(p28););
printStats();
PRINT_POINTER(smalloc(104););
printStats();
void* p31 = last_address;
PRINT_POINTER(scalloc(245,159););
printStats();
void* p32 = last_address;
PRINT_POINTER(smalloc(102););
printStats();
void* p33 = last_address;
PRINT_POINTER(scalloc(160,157););
printStats();
void* p34 = last_address;
DEBUG_PRINT(sfree(p7););
printStats();
DEBUG_PRINT(sfree(p30););
printStats();
PRINT_POINTER(smalloc(72););
printStats();
void* p35 = last_address;
PRINT_POINTER(srealloc(p12,150););
printStats();
void* p36 = last_address;
PRINT_POINTER(srealloc(p27,57););
printStats();
void* p37 = last_address;
DEBUG_PRINT(sfree(p34););
printStats();
DEBUG_PRINT(sfree(p20););
printStats();
PRINT_POINTER(scalloc(158,170););
printStats();
void* p38 = last_address;
PRINT_POINTER(srealloc(p36,203););
printStats();
void* p39 = last_address;
PRINT_POINTER(scalloc(93,135););
printStats();
void* p40 = last_address;
PRINT_POINTER(smalloc(94););
printStats();
void* p41 = last_address;
PRINT_POINTER(scalloc(145,1););
printStats();
void* p42 = last_address;
DEBUG_PRINT(sfree(p19););
printStats();
PRINT_POINTER(smalloc(210););
printStats();
void* p43 = last_address;
PRINT_POINTER(smalloc(31););
printStats();
void* p44 = last_address;
PRINT_POINTER(srealloc(p35,65););
printStats();
void* p45 = last_address;
DEBUG_PRINT(sfree(p38););
printStats();
PRINT_POINTER(smalloc(73););
printStats();
void* p46 = last_address;
PRINT_POINTER(smalloc(58););
printStats();
void* p47 = last_address;
DEBUG_PRINT(sfree(p33););
printStats();
PRINT_POINTER(srealloc(p23,108););
printStats();
void* p48 = last_address;
DEBUG_PRINT(sfree(p44););
printStats();
PRINT_POINTER(srealloc(p48,200););
printStats();
void* p49 = last_address;
DEBUG_PRINT(sfree(p41););
printStats();
PRINT_POINTER(srealloc(p22,27););
printStats();
void* p50 = last_address;
DEBUG_PRINT(sfree(p26););
printStats();
PRINT_POINTER(srealloc(p40,140););
printStats();
void* p51 = last_address;
PRINT_POINTER(scalloc(43,13););
printStats();
void* p52 = last_address;
PRINT_POINTER(srealloc(p45,115););
printStats();
void* p53 = last_address;
DEBUG_PRINT(sfree(p32););
printStats();
DEBUG_PRINT(sfree(p14););
printStats();
PRINT_POINTER(srealloc(p42,38););
printStats();
void* p54 = last_address;
PRINT_POINTER(smalloc(174););
printStats();
void* p55 = last_address;
PRINT_POINTER(srealloc(p53,17););
printStats();
void* p56 = last_address;
PRINT_POINTER(smalloc(52););
printStats();
void* p57 = last_address;
PRINT_POINTER(smalloc(98););
printStats();
void* p58 = last_address;
PRINT_POINTER(smalloc(10););
printStats();
void* p59 = last_address;
PRINT_POINTER(smalloc(109););
printStats();
void* p60 = last_address;
PRINT_POINTER(smalloc(98););
printStats();
void* p61 = last_address;
PRINT_POINTER(smalloc(216););
printStats();
void* p62 = last_address;
PRINT_POINTER(scalloc(151,173););
printStats();
void* p63 = last_address;
PRINT_POINTER(srealloc(p58,166););
printStats();
void* p64 = last_address;
PRINT_POINTER(scalloc(221,135););
printStats();
void* p65 = last_address;
DEBUG_PRINT(sfree(p64););
printStats();
PRINT_POINTER(scalloc(209,222););
printStats();
void* p66 = last_address;
PRINT_POINTER(smalloc(110););
printStats();
void* p67 = last_address;
PRINT_POINTER(srealloc(p50,121););
printStats();
void* p68 = last_address;
PRINT_POINTER(srealloc(p6,60););
printStats();
void* p69 = last_address;
PRINT_POINTER(scalloc(97,86););
printStats();
void* p70 = last_address;
PRINT_POINTER(smalloc(17););
printStats();
void* p71 = last_address;
PRINT_POINTER(smalloc(91););
printStats();
void* p72 = last_address;
PRINT_POINTER(smalloc(81););
printStats();
void* p73 = last_address;
PRINT_POINTER(scalloc(55,9););
printStats();
void* p74 = last_address;
PRINT_POINTER(srealloc(p29,206););
printStats();
void* p75 = last_address;
PRINT_POINTER(scalloc(93,8););
printStats();
void* p76 = last_address;
PRINT_POINTER(smalloc(247););
printStats();
void* p77 = last_address;
PRINT_POINTER(srealloc(p43,64););
printStats();
void* p78 = last_address;
DEBUG_PRINT(sfree(p62););
printStats();
PRINT_POINTER(smalloc(239););
printStats();
void* p79 = last_address;
DEBUG_PRINT(sfree(p76););
printStats();
PRINT_POINTER(srealloc(p75,147););
printStats();
void* p80 = last_address;
DEBUG_PRINT(sfree(p25););
printStats();
PRINT_POINTER(smalloc(76););
printStats();
void* p81 = last_address;
PRINT_POINTER(scalloc(172,148););
printStats();
void* p82 = last_address;
PRINT_POINTER(scalloc(130,79););
printStats();
void* p83 = last_address;
PRINT_POINTER(srealloc(p63,44););
printStats();
void* p84 = last_address;
DEBUG_PRINT(sfree(p46););
printStats();
DEBUG_PRINT(sfree(p69););
printStats();
PRINT_POINTER(smalloc(24););
printStats();
void* p85 = last_address;
PRINT_POINTER(scalloc(121,10););
printStats();
void* p86 = last_address;
PRINT_POINTER(srealloc(p49,32););
printStats();
void* p87 = last_address;
PRINT_POINTER(srealloc(p68,214););
printStats();
void* p88 = last_address;
PRINT_POINTER(smalloc(141););
printStats();
void* p89 = last_address;
PRINT_POINTER(scalloc(165,135););
printStats();
void* p90 = last_address;
PRINT_POINTER(srealloc(p52,165););
printStats();
void* p91 = last_address;
DEBUG_PRINT(sfree(p72););
printStats();
PRINT_POINTER(smalloc(171););
printStats();
void* p92 = last_address;
PRINT_POINTER(scalloc(155,117););
printStats();
void* p93 = last_address;
PRINT_POINTER(smalloc(132););
printStats();
void* p94 = last_address;
DEBUG_PRINT(sfree(p80););
printStats();
DEBUG_PRINT(sfree(p31););
printStats();
DEBUG_PRINT(sfree(p54););
printStats();
DEBUG_PRINT(sfree(p78););
printStats();
PRINT_POINTER(scalloc(25,197););
printStats();
void* p95 = last_address;
PRINT_POINTER(scalloc(16,43););
printStats();
void* p96 = last_address;
DEBUG_PRINT(sfree(p55););
printStats();
PRINT_POINTER(srealloc(p70,238););
printStats();
void* p97 = last_address;
PRINT_POINTER(smalloc(245););
printStats();
void* p98 = last_address;
DEBUG_PRINT(sfree(p82););
printStats();
PRINT_POINTER(srealloc(p77,27););
printStats();
void* p99 = last_address;
PRINT_POINTER(smalloc(235););
printStats();
void* p100 = last_address;
PRINT_POINTER(scalloc(2,215););
printStats();
void* p101 = last_address;
PRINT_POINTER(srealloc(p83,162););
printStats();
void* p102 = last_address;
PRINT_POINTER(scalloc(222,192););
printStats();
void* p103 = last_address;
DEBUG_PRINT(sfree(p37););
printStats();
PRINT_POINTER(scalloc(121,23););
printStats();
void* p104 = last_address;
PRINT_POINTER(smalloc(133););
printStats();
void* p105 = last_address;
PRINT_POINTER(scalloc(74,199););
printStats();
void* p106 = last_address;
PRINT_POINTER(scalloc(78,130););
printStats();
void* p107 = last_address;
PRINT_POINTER(srealloc(p61,128););
printStats();
void* p108 = last_address;
PRINT_POINTER(smalloc(136););
printStats();
void* p109 = last_address;
DEBUG_PRINT(sfree(p51););
printStats();
PRINT_POINTER(smalloc(143););
printStats();
void* p110 = last_address;
DEBUG_PRINT(sfree(p47););
printStats();
DEBUG_PRINT(sfree(p60););
printStats();
PRINT_POINTER(scalloc(59,54););
printStats();
void* p111 = last_address;
DEBUG_PRINT(sfree(p87););
printStats();
DEBUG_PRINT(sfree(p108););
printStats();
PRINT_POINTER(scalloc(234,81););
printStats();
void* p112 = last_address;
PRINT_POINTER(srealloc(p92,222););
printStats();
void* p113 = last_address;
DEBUG_PRINT(sfree(p21););
printStats();
PRINT_POINTER(smalloc(47););
printStats();
void* p114 = last_address;
PRINT_POINTER(scalloc(189,157););
printStats();
void* p115 = last_address;
DEBUG_PRINT(sfree(p81););
printStats();
PRINT_POINTER(srealloc(p56,74););
printStats();
void* p116 = last_address;
PRINT_POINTER(smalloc(148););
printStats();
void* p117 = last_address;
DEBUG_PRINT(sfree(p101););
printStats();
PRINT_POINTER(smalloc(49););
printStats();
void* p118 = last_address;
PRINT_POINTER(scalloc(148,234););
printStats();
void* p119 = last_address;
PRINT_POINTER(srealloc(p85,47););
printStats();
void* p120 = last_address;
PRINT_POINTER(scalloc(96,136););
printStats();
void* p121 = last_address;
PRINT_POINTER(scalloc(31,191););
printStats();
void* p122 = last_address;
DEBUG_PRINT(sfree(p120););
printStats();
PRINT_POINTER(srealloc(p106,227););
printStats();
void* p123 = last_address;
PRINT_POINTER(smalloc(240););
printStats();
void* p124 = last_address;
PRINT_POINTER(scalloc(140,82););
printStats();
void* p125 = last_address;
PRINT_POINTER(scalloc(66,34););
printStats();
void* p126 = last_address;
PRINT_POINTER(srealloc(p71,141););
printStats();
void* p127 = last_address;
PRINT_POINTER(scalloc(50,31););
printStats();
void* p128 = last_address;
DEBUG_PRINT(sfree(p114););
printStats();
PRINT_POINTER(smalloc(71););
printStats();
void* p129 = last_address;
DEBUG_PRINT(sfree(p127););
printStats();
PRINT_POINTER(smalloc(178););
printStats();
void* p130 = last_address;
DEBUG_PRINT(sfree(p117););
printStats();
DEBUG_PRINT(sfree(p79););
printStats();
PRINT_POINTER(smalloc(190););
printStats();
void* p131 = last_address;
PRINT_POINTER(srealloc(p116,29););
printStats();
void* p132 = last_address;
PRINT_POINTER(srealloc(p98,170););
printStats();
void* p133 = last_address;
PRINT_POINTER(srealloc(p112,210););
printStats();
void* p134 = last_address;
PRINT_POINTER(srealloc(p133,82););
printStats();
void* p135 = last_address;
PRINT_POINTER(srealloc(p103,173););
printStats();
void* p136 = last_address;
PRINT_POINTER(smalloc(217););
printStats();
void* p137 = last_address;
PRINT_POINTER(smalloc(86););
printStats();
void* p138 = last_address;
PRINT_POINTER(scalloc(88,12););
printStats();
void* p139 = last_address;
DEBUG_PRINT(sfree(p119););
printStats();
DEBUG_PRINT(sfree(p123););
printStats();
PRINT_POINTER(srealloc(p95,241););
printStats();
void* p140 = last_address;
PRINT_POINTER(srealloc(p118,29););
printStats();
void* p141 = last_address;
PRINT_POINTER(smalloc(125););
printStats();
void* p142 = last_address;
PRINT_POINTER(srealloc(p136,10););
printStats();
void* p143 = last_address;
DEBUG_PRINT(sfree(p137););
printStats();
PRINT_POINTER(srealloc(p100,29););
printStats();
void* p144 = last_address;
DEBUG_PRINT(sfree(p107););
printStats();
PRINT_POINTER(scalloc(148,69););
printStats();
void* p145 = last_address;
PRINT_POINTER(srealloc(p39,241););
printStats();
void* p146 = last_address;
DEBUG_PRINT(sfree(p139););
printStats();
DEBUG_PRINT(sfree(p145););
printStats();
PRINT_POINTER(scalloc(121,241););
printStats();
void* p147 = last_address;
PRINT_POINTER(scalloc(207,183););
printStats();
void* p148 = last_address;
PRINT_POINTER(smalloc(85););
printStats();
void* p149 = last_address;
PRINT_POINTER(srealloc(p88,248););
printStats();
void* p150 = last_address;
DEBUG_PRINT(sfree(p94););
printStats();
PRINT_POINTER(smalloc(225););
printStats();
void* p151 = last_address;
DEBUG_PRINT(sfree(p151););
printStats();
DEBUG_PRINT(sfree(p89););
printStats();
DEBUG_PRINT(sfree(p142););
printStats();
PRINT_POINTER(smalloc(43););
printStats();
void* p152 = last_address;
}
